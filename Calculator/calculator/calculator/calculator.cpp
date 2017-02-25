// calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../../std_lib_facilities.h"

//
// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//
//------------------------------------------------------------------------------


class Token {
public:
	char kind;        // what kind of token
	double value;     // for numbers: a value 
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
};

class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full;
	Token buffer;
};

Token_stream::Token_stream() : full(false), buffer(0) 
	{};

Token Token_stream::get(){
	if (full) {
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch; // be carefull >> it will avoid white spaces, new lines, tabs etc.

	switch (ch){
	case ';': //print
	case 'k': //end
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
		return Token(ch);
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{
		cin.putback(ch);
		double val;
		cin >> val;
		return Token('8', val);
	}
	default: 
		error("Bad Token");
	};
}

void Token_stream::putback(Token t){
	if (full) error("You can't putback token when token stream is full");
	buffer = t;
	full = true;
}

Token_stream ts;

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '8':            // we use '8' to represent a number
		return t.value;  // return the number's value
	default:
		error("primary expected");
	}
}
//------------------------------------------------------------------------------



int main(){

	double val = 0;
	try {
		while (cin){
			Token t = ts.get();
			if (t.kind == 'k') break;
			if (t.kind == ';') cout << "=" << val << endl;
			else
				ts.putback(t);
			val = expression();
		}
		keep_window_open("q");
	}
	catch (exception& e) {
		cerr << e.what() << endl;
		keep_window_open("q");
		return 1;
	}
	catch (...) {
		cerr << "exception \n";
		keep_window_open("q");
		return 2;
	}
}

//------------------------------------------------------------------------------

double expression()
{
	double left = term();      // read and evaluate a Term
	Token t = ts.get();     // get the next token
	while (true) {
		switch (t.kind) {
		case '+':
			left += term();    // evaluate Term and add
			t = ts.get();
			break;
		case '-':
			left -= term();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;       // finally: no more + or -: return the answer
		}
	}
}

//------------------------------------------------------------------------------

double term()
{
	double left = primary();
	Token t = ts.get();     // get the next token

	while (true) {
		switch (t.kind) {
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}
	}
}

//------------------------------------------------------------------------------