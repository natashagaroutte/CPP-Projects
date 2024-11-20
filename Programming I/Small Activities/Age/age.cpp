//****************************************************************************************************
//
// Activity: Age
//
// Objective: This activity is to teach the use of randomNumbers.
//
// Prompt: Write a program that generates a number between 0 and 60, inclusively and output it on 
//         the screen. Note: each time the program runs, it should generate a different number.
//
//****************************************************************************************************

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//****************************************************************************************************

int main ()
{
    int randAge;

    short seed = time(0); // assign the current time
    srand(seed);          // seed the random number generator
    randAge = rand()% 61; // generate the random number

    cout << "Age is: " << randAge << endl;

    return 0;

}
