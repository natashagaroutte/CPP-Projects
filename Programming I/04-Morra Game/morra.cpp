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

int main() {
    srand(time(0));

    int instances;
    cout << "Enter the number of instances: ";
    cin >> instances;

    ofstream outFile("morraResults.txt");
    outFile << "Number of instances: " << instances << "\n\n";

    for (int i = 1; i <= instances; i++) {
        int player1Fingers = rand() % 6;
        int player2Fingers = rand() % 6;
        int actualSum = player1Fingers + player2Fingers;

        int player1Guess = rand() % (10 - player1Fingers) + player1Fingers;
        int player2Guess = rand() % (10 - player2Fingers) + player2Fingers;

        string result;
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
        outFile << "  Player 1 fingers: " << player1Fingers << ", Guess: " 
                                          << player1Guess << "\n";
        outFile << "  Player 2 fingers: " << player2Fingers << ", Guess: " 
                                          << player2Guess << "\n";
        outFile << "  Actual Sum: " << actualSum << "\n";
        outFile << "  Result: " << result << "\n\n";
    }

    outFile.close();
    cout << "Results sent to: morraResults.txt" << endl;
    return 0;
}
