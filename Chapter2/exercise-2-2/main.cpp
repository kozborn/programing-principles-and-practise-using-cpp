/*
 *  Expanding on what you have learned, write a program that lists the in-
 * structions for a computer to find the upstairs bathroom, discussed in §2.1.*
 * Can you think of any more steps that a person would assume, but that a
 * computer would not? Add them to your list. This is a good start in “think-
 * ing like a computer.” Warning: For most people, “go to the bathroom” is
 * a perfectly adequate instruction. For someone with no experience with
 * houses or bathrooms (imagine a stone-age person, somehow transported
 * into your dining room) the list of necessary instructions could be very
 * long. Please don’t use more than a page. For the benefit of the reader, you
 * may add a short description of the layout of the house you are imagining.
 *
 */

#include "../std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Step list:" << endl;
    cout << "1: " << "Stand up" <<  endl;
    cout << "2: " << "turn 90 deg left" <<  endl;
    cout << "3: " << "make 5 steps" <<  endl;
    cout << "4: " << "turn 90 deg right" <<  endl;
    cout << "5: " << "go upstair (assuming he knows how to)" <<  endl;
    cout << "6: " << "turn 90 deg left" <<  endl;
    cout << "7: " << "make 10 steps" << endl;
    cout << "8: " << "grab a door handle" <<  endl;
    cout << "9: " << "open the door" <<  endl;
    cout << "10: " << "enter the bathroom" <<  endl;

    cout << "Enjoy :) " << endl;

    return 0;
}

