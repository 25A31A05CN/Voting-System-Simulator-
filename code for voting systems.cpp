#include <iostream>
using namespace std;

int main() {
    int votes[5] = {0}; // Stores votes for 5 candidates
    int choice;

    do {
        cout << "\n===== Voting System =====\n";
        cout << "1. Vote for Candidate 1\n";
        cout << "2. Vote for Candidate 2\n";
        cout << "3. Vote for Candidate 3\n";
        cout << "4. Vote for Candidate 4\n";
        cout << "5. Vote for Candidate 5\n";
        cout << "6. Show Results\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                votes[choice - 1]++;
                cout << "Vote recorded successfully!\n";
                break;

            case 6: {
                cout << "\n===== Results =====\n";
                for(int i = 0; i < 5; i++) {
                    cout << "Candidate " << i+1 << ": " << votes[i] << " votes\n";
                }

                // Find winner
                int maxVotes = votes[0];
                int winner = 0;

                for(int i = 1; i < 5; i++) {
                    if(votes[i] > maxVotes) {
                        maxVotes = votes[i];
                        winner = i;
                    }
                }

                cout << "Winner is Candidate " << winner + 1 
                     << " with " << maxVotes << " votes!\n";
                break;
            }

            case 0:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 0);

    return 0;
}