//****************************************************************************************************
//
// Activity: Grade Book
//
// Objective: This activity is to teach parallel arrays and partially filled arrays.
//
// Prompt: Write a full program to get the following output on the console.
//         You are to write a program that helps your instructor to maintain the students' scores
//         for a class. The information that you need to maintain are: the student's letter
//         grade. The class capacity is 30. But, the actual enrollment could be less than the
//         capacity. So, the program should ask the number of students the class has. Then, the 
//         program should read the last names and the final scores from the console. The letter 
//         grade should be then calculated using the final score and output.
//         Score Grade Mapping: >=90 = A, >=80 = B, >=70 = C, <70 = F
//
//****************************************************************************************************

#include <iostream>

using namespacestd;

int main()
{

const int CAP = 30;
int students;
string names[CAP];
int scores [CAP];
char letters[CAP];

cout << "How many students are in the class?";
cin >> students;

cout << "The scores are: " << endl;
for (int i = 0; i < students; i++)
{
  cin >> names[i];
  cin >> scores[i];
}

for (int i = 0; i < students; i++)
{
  if (scores[i] >= 90)
    letters[i] = 'A';
    else if (scores[i] >= 80)
      letters[i] = 'B';
      else if (scores[i] >= 70)
        letters[i] = 'C';
        else
          letters[i] = 'D';
}

cout << "The letter grades are: " << endl;
for (int i = 0; i < students; i++)
{
  cout << names[i] << " ";
       << letters[i] << " " << endl;
}

  return 0;
}
