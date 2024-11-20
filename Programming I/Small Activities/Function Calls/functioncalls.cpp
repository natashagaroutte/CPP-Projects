//****************************************************************************************************
//
// Activity: Function Calls
//
// Objective: This activity is to teach you the use of system defined function calls.
//
// Prompt: Complete the following program using pow() and sqrt() to calculate hypotenuse.
//
//****************************************************************************************************

#include <iostream>
#include <cmath>
using namespacestd;

//****************************************************************************************************

int main ()
{
  double a,
         b,
         c;
  cout << "Side a and b?" ;
  cin >> a >> b;

  c = sqrt(pow(a, 2.0) + (b, 2.0));

  cout << endl << "Hypotenuse = " << c << endl;

  return 0;

}

//****************************************************************************************************
