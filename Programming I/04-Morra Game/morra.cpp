//****************************************************************************************************
//     Morra Game
//
//     This program will run a series of instances of a Morra game.
//
//****************************************************************************************************

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

//****************************************************************************************************

int main() 
{
    srand(time(0));
    
    int instances, 
        player1Fingers, 
        player2Fingers, 
        actualSum, 
        player1Guess, 
        player2Guess;
    
    string result;

    cout << "Enter the number of instances: ";
    cin >> instances;

    ofstream outFile("morraResults.txt");
    outFile << "Number of instances: " << instances << "\n\n";

    for (int i = 1; i <= instances; i++) {
        player1Fingers = rand() % 6;
        player2Fingers = rand() % 6;
        actualSum = player1Fingers + player2Fingers;

        player1Guess = rand() % 11;
        player2Guess = rand() % 11;

        if (player1Guess == actualSum && player2Guess == actualSum) {
            result = "Tie!";
        } else if (player1Guess == actualSum) {
            result = "Player 1 Wins!";
        } else if (player2Guess == actualSum) {
            result = "Player 2 Wins!";
        } else {
            result = "No One Wins :(";
        }

        outFile << "Instance " << i << ":\n";
        outFile << "  Player 1 fingers: " << player1Fingers << ", Guess: " << player1Guess << "\n";
        outFile << "  Player 2 fingers: " << player2Fingers << ", Guess: " << player2Guess << "\n";
        outFile << "  Actual Sum: " << actualSum << "\n";
        outFile << "  Result: " << result << "\n\n";
    }

    outFile.close();
    cout << "Results sent to: morraResults.txt" << endl;
    return 0;
}

//****************************************************************************************************
/*
Number of instances: 3

Instance 1:
  Player 1 fingers: 3, Guess: 7
  Player 2 fingers: 2, Guess: 6
  Actual Sum: 5
  Result: No One Wins :(

Instance 2:
  Player 1 fingers: 1, Guess: 4
  Player 2 fingers: 4, Guess: 5
  Actual Sum: 5
  Result: Player 2 Wins!

Instance 3:
  Player 1 fingers: 2, Guess: 5
  Player 2 fingers: 3, Guess: 4
  Actual Sum: 5
  Result: Tie!
*/

