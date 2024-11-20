//****************************************************************************************************
// Activity: Your Name
//
// Objective: A function has three parts: prototype, definition, and calls. This activity 
//            is to teach you the user defined function calls.
//
// Prompt: Write the main funciton to produce the output given under the sample output 
//           using the functions whose prototypes are given.
//
//****************************************************************************************************

#include <iostream>
#include <string>

using namespacestd;

//****************************************************************************************************

int main ()
{

  string fName,
         mName,
         lName;

  fName = readFName();
  mName = readMName();
  lName = readLName();

  displayName(fName);
  displayStars();

  displayName(mName);
  displayStars();

  displayName(lName);
  displayStars();
  
  return 0;
}

//****************************************************************************************************

string readFName()
{
  string fName;
  cout << "What is your first name?";
  cin >> fName;

  return fName;
}

//****************************************************************************************************

string readMName()
{
  string mName;
  cout << "What is your middle name?";
  cin >> mName;

  return mName;
}

//****************************************************************************************************

string readlName()
{
  string lName;
  cout << "What is your last name?";
  cin >> lName;

  return lName;
}

//****************************************************************************************************

void displayName(string name)
{
  cout << name;
}

//****************************************************************************************************

void displayStars()
{
  cout << "**********";
}

//****************************************************************************************************





