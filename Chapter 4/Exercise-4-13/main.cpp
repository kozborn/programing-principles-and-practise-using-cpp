#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    cout << "Exercise 4.13" << endl;
    cout << "Create a program to find all the prime numbers between 1 and 100. There" << endl
         << "is a classic method for doing this, called the “Sieve of Eratosthenes.” If" << endl
         << "you don’t know that method, get on the web and look it up. Write your" << endl
         << "program using this method." << endl << endl;

    int max = 100;

    vector <int> primes(max);
    for(int i=2;i <= (int) sqrt(max); ++i){
        for(int k=i; k<max; ++k){
            if(k==1) break;
            if(k!=i){
                if((k%i) == 0){
                    primes[k] = 1;
                }
            }
        }
    }

    cout << "Primes: " ;
    for(int i=2;i < max;++i){
        if(primes[i]==0){
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}

