//****************************************************************************************************
//     File:               worksheet.cpp
//
//     This assignment to make you familiar with the basic concepts of arrays and functions.
//
//****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//****************************************************************************************************

const int PROBLEMS = 45;
const int COLS = 5;
const int ROWS = 9;

int minuend[PROBLEMS];
int subtrahend[PROBLEMS];
int difference[PROBLEMS];

//****************************************************************************************************

void genMinuend();
void genSub();
void calcDiff();
void display();

int main() 
{
    srand(time(0));
    genMinuend();
    genSub();
    calcDiff();
    display();

    return 0;
}

//****************************************************************************************************

void genMinuend() 
{
    for (int i = 0; i < PROBLEMS; i++) 
    {
        minuend[i] = rand() % 90 + 10; 
    }
}

//****************************************************************************************************

void genSub() 
{
    for (int i = 0; i < PROBLEMS; i++) 
    {
        subtrahend[i] = rand() % (minuend[i] + 1); 
    }
}

//****************************************************************************************************

void calcDiff() 
{
    for (int i = 0; i < PROBLEMS; i++) 
    {
        difference[i] = minuend[i] - subtrahend[i]; 
    }
}

//****************************************************************************************************

void display() 
{
    for (int row = 0; row < ROWS; row++) 
    {
        for (int col = 0; col < COLS; col++) 
        {
            int index = row * COLS + col;
            if (index < PROBLEMS) 
            {
                cout << setw(2) << index + 1 << ") "; 
                cout << setw(2) << minuend[index] << " "; 
            }
        }
        cout << endl;

        for (int col = 0; col < COLS; col++) 
        {
            int index = row * COLS + col;
            if (index < PROBLEMS) 
            {
                cout << "   -"; 
                cout << setw(2) << subtrahend[index] << " "; 
            }
        }
        cout << endl;

        for (int col = 0; col < COLS; col++) 
        {
            cout << "   ___ "; 
        }
        cout << endl;

        for (int col = 0; col < COLS; col++) 
        {
            int index = row * COLS + col;
            if (index < PROBLEMS) 
            {
                cout << setw(6) << difference[index]; 
            }
            if (col < COLS - 1) 
            { 
                cout << " ";
            }
        }

        cout << endl;
        for (int col = 0; col < COLS; col++) 
        {
            cout << "   === "; 
        }

        cout << endl << endl;  
    }
}

//****************************************************************************************************

/*

1) 49  2) 33  3) 40  4) 38  5) 77 
   -48    - 4    -24    - 4    - 2 
   ___    ___    ___    ___    ___ 
     1     29     16     34     75
   ===    ===    ===    ===    === 

 6) 70  7) 48  8) 62  9) 65 10) 18 
   -34    -12    -27    -44    - 1 
   ___    ___    ___    ___    ___ 
    36     36     35     21     17
   ===    ===    ===    ===    === 

11) 79 12) 57 13) 51 14) 37 15) 24 
   -26    - 2    -32    - 8    -14 
   ___    ___    ___    ___    ___ 
    53     55     19     29     10
   ===    ===    ===    ===    === 

16) 34 17) 52 18) 50 19) 28 20) 17 
   - 3    - 2    -22    -21    -17 
   ___    ___    ___    ___    ___ 
    31     50     28      7      0
   ===    ===    ===    ===    === 

21) 74 22) 27 23) 93 24) 21 25) 34 
   - 6    - 6    -26    -13    - 9 
   ___    ___    ___    ___    ___ 
    68     21     67      8     25
   ===    ===    ===    ===    === 

26) 62 27) 15 28) 92 29) 19 30) 29 
   -52    - 2    -84    - 0    -16 
   ___    ___    ___    ___    ___ 
    10     13      8     19     13
   ===    ===    ===    ===    === 

31) 59 32) 58 33) 53 34) 89 35) 86 
   -20    -51    -14    - 5    - 0 
   ___    ___    ___    ___    ___ 
    39      7     39     84     86
   ===    ===    ===    ===    === 

36) 30 37) 59 38) 35 39) 44 40) 25 
   -14    -28    - 0    -15    -16 
   ___    ___    ___    ___    ___ 
    16     31     35     29      9
   ===    ===    ===    ===    === 

41) 95 42) 23 43) 34 44) 98 45) 50 
   -19    - 3    - 3    -82    -20 
   ___    ___    ___    ___    ___ 
    76     20     31     16     30
   ===    ===    ===    ===    === 

*/

