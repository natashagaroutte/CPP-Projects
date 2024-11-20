//****************************************************************************************************
//
// Activity: Max of 3
//
// Objective: This activity is to teach you how to design a program with functions and use pass-by
//            -reference functions.
//
// Prompt: Write a complete program to read three inputs from user and output the maximum of three 
//         numbers.
//
//****************************************************************************************************

#include <iostream>
using namespace std;

//****************************************************************************************************

void readNumbers(int &, int &, int &);
int findMax(int, int, int);
void displayMax(int);

//****************************************************************************************************

int main ()
{
  int num1,
      num2,
      num3,
      max;

readNumbers(num1, num2, num3);
max = findMax(num1, num2, num3);
diplayMax(max);

//****************************************************************************************************

void readNumbers(int number1, int number2, int number3)
{
  cout << "Enter three numbers: ";
  cin >> number1 >> number2 >> number3;
}

//****************************************************************************************************

int findMax(int num1, int num2, int num3)
{
  int max = num1;
  if (max < num2)
    max = num2;
  if (max < num3)
    max = num3;

  return max;
}

//****************************************************************************************************

void displayMax(int max)
{
  cout << "The max is: " << max << endl;
}

//****************************************************************************************************

    
