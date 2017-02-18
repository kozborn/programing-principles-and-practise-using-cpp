#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Create a program to find all the prime numbers between 1 and 100. One" << endl <<
            "way to do this is to write a function that will check if a number is prime" << endl <<
            "(i.e., see if the number can be divided by a prime number smaller than" << endl <<
            "itself) using a vector of primes in order (so that if the vector is called" << endl <<
            "primes , primes[0]==2 , primes[1]==3 , primes[2]==5 , etc.). Then write a" << endl <<
            "loop that goes from 1 to 100, checks each number to see if it is a prime," << endl <<
            "and stores each prime found in a vector . Write another loop that lists the" << endl <<
            "primes you found. You might check your result by comparing your vector" <<
            "of prime numbers with primes . Consider 2 the first prime." << endl;

    cout << "Exercise 4.12"<<  endl
         << "Modify the program described in the previous exercise to take an input"<< endl
         << "value max and then find all prime numbers from 1 to max ." << endl << endl;

    vector <int> primes;
    bool isPrime;
    int max;
    cout << "Enter the number for which you want to find prime numbers." << endl;
    cin >> max;
    for(int i=2;i<=max;++i){
        isPrime = true;
        for(int k=2; k<i; ++k){
            if((i % k) == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(i);
        }
    }

    for(auto prime : primes){
        cout << prime << endl;
    }


    return 0;
}

