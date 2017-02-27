// calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../../std_lib_facilities.h"

const float VERSION = 0.1;
const char number = '8';
const char quit = 'q';
const char print = ';';

const string prompt = "> ";
const string result = "= ";
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
	case print: //print
	case quit: //end
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
		return Token(number, val);
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
	case number:            // we use '8' to represent a number
		return t.value;  // return the number's value
	case '-':
		return -primary();
	case '+':
		return primary();
	default:
		error("primary expected");
	}
}
//------------------------------------------------------------------------------

void calculate();

int main(){
	cout << "Hello in calculator v" << VERSION << endl;
	cout << "You can use floating point numbers and operations:" << endl;
	cout  << "'+', '-', '/', '*', '(', ')'" << endl;
	cout << "Finish your expression with ';' to calculate or enter 'q' to exit program" << endl;
	double val = 0;
	try {
		calculate();
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
void calculate(){
	while (cin){
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit){
			keep_window_open("q");
			return;
		}

		ts.putback(t);
		cout << result << expression() << endl;
	}
	keep_window_open("q");
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
		case '%':
		{
			double d = primary();
			int i1 = int(left);
			if (i1 != left) error("Left argument of '%' operator is not a integer");
			int i2 = int(d);
			if (i2 != d) error("Right argument of '%' operator is not a integer");
			if (i2 == 0) error("Divive by 0");
			left = i1%i2;
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