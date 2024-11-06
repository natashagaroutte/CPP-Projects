//****************************************************************************************************
//     Tuition
//
//     This program will practice if statements and iomanipulation. 
//
//****************************************************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char category;
    int price = 0, 
        credits = 0, 
        tuition = 0;

    cout << "Enter the category label according to its description (A-F): ";
    cin >> category;

    if (!(category == 'A' || category == 'a' ||
          category == 'B' || category == 'b' ||
          category == 'C' || category == 'c' ||
          category == 'D' || category == 'd' ||
          category == 'E' || category == 'e' ||
          category == 'F' || category == 'f')) {
        cout << "INVALID! Please input a category A-F." << endl;
        return 1; 
          }
    cout << "How many credits? ";
    cin >> credits;

    if (category == 'A' || category == 'a') {
        price = 725;
    } else if (category == 'B' || category == 'b') {
        price = 505;
    } else if (category == 'C' || category == 'c') {
        price = 570;
    } else if (category == 'D' || category == 'd') {
        price = 595;
    } else if (category == 'E' || category == 'e') {
        price = 725;
    } else if (category == 'F' || category == 'f') {
        price = 350;
    }

    tuition = price * credits;

    cout << fixed << setprecision(2); 
    cout << "\nYour tuition for category " << category << " is: $" << tuition 
         << endl;

    return 0; 
}


/* Sample Outputs:
1. Category A, 12 credits:
Enter the category label according to its description (A-F): A
How many credits? 12
Your tuition for category A is: $ 8700.00

2. Category B, 15 credits:
Enter the category label according to its description (A-F): b
How many credits? 15
Your tuition for category b is: $ 7575.00

3. Invalid category:
Enter the category label according to its description (A-F): G
INVALID! Please input a category A-F.
*/
