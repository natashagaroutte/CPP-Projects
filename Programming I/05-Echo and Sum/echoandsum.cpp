//****************************************************************************************************
//     Echo and Sum
//     
//     This assignment practices the concepts of partially filled arrays and parallel arrays.
//
//****************************************************************************************************

#include <iostream>
using namespace std;

//****************************************************************************************************

int main()
{
	const int SIZE = 10;
    int nums[SIZE],
    	sum = 0,
		count;

	cout << "How many numbers (< 10)?" << endl;
	cin >> count;

	cout << "Enter " << count << " numbers: " << endl;

 	 for (int i = 0; i < SIZE; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    cout << "\nSum is: " << sum << "\nThe list of numbers was: ";

    for (int i = 0; i < SIZE; i++)
        cout << nums[i] << " ";

    return 0;
}

//****************************************************************************************************

/*
How many numbers (< 10)?
9
Enter 9 numbers: 
1
2
3
4
4
6
7
8
9
9

Sum is: 53
The list of numbers was: 1 2 3 4 4 6 7 8 9 9 

*/
