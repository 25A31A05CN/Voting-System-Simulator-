#include <iostream>
#include <iomanip>
using namespace std;

// ==============================
// ONLINE VOTING SYSTEM
// Using Arrays and Structures
// ==============================

// Structure for Candidate
struct Candidate {
    int id;
    string name;
    int votes;
};

// Constants
const int MAX_CANDIDATES = 10;
const int MAX_VOTERS = 100;

// Arrays
Candidate candidates[MAX_CANDIDATES];
int votedUsers[MAX_VOTERS];

// Global Counters
int candidateCount;
int votedCount = 0;

// ==============================
// Function to Check Duplicate Voting
// ==============================
bool hasVoted(int voterID) {
    for (int i = 0; i < votedCount; i++) {
        if (votedUsers[i] == voterID) {
            return true;
        }
    }
    return false;
}

// ==============================
// Function to Cast Vote
// ==============================
void castVote() {
    int voterID;

    cout << "\n====================================\n";
    cout << "          CAST YOUR VOTE\n";
    cout << "====================================\n";

    cout << "Enter Voter ID : ";
    cin >> voterID;

    // Duplicate Vote Check
    if (hasVoted(voterID)) {
        cout << "\n[ ACCESS DENIED ]\n";
        cout << "You have already voted.\n";
        return;
    }

    // Display Candidates
    cout << "\nAvailable Candidates\n";
    cout << "------------------------------------\n";

    for (int i = 0; i < candidateCount; i++) {
        cout << candidates[i].id << ". "
             << candidates[i].name << endl;
    }

    int choice;
    cout << "\nEnter Candidate ID : ";
    cin >> choice;

    // Candidate Search
    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].id == choice) {
            candidates[i].votes++;
            votedUsers[votedCount] = voterID;
            votedCount++;

            cout << "\n[ SUCCESS ] Vote Cast Successfully!\n";
            return;
        }
    }

    cout << "\n[ ERROR ] Invalid Candidate ID!\n";
}

// ==============================
// Function to Display Results
// ==============================
void displayResults() {
    cout << "\n====================================\n";
    cout << "          VOTING RESULTS\n";
    cout << "====================================\n";

    cout << left
         << setw(10) << "ID"
         << setw(20) << "Candidate"
         << setw(10) << "Votes" << endl;

    cout << "------------------------------------\n";

    for (int i = 0; i < candidateCount; i++) {
        cout << left
             << setw(10) << candidates[i].id
             << setw(20) << candidates[i].name
             << setw(10) << candidates[i].votes
             << endl;
    }
}

// ==============================
// Function to Display Winner
// ==============================
void displayWinner() {
    int maxVotes = -1;
    string winner = "";

    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].votes > maxVotes) {
            maxVotes = candidates[i].votes;
            winner = candidates[i].name;
        }
    }

    cout << "\n====================================\n";
    cout << "             WINNER\n";
    cout << "====================================\n";

    cout << "Winner : " << winner << endl;
    cout << "Votes  : " << maxVotes << endl;
}

// ==============================
// Function to Add Candidates
// ==============================
void addCandidates() {
    cout << "Enter Number of Candidates : ";
    cin >> candidateCount;

    if (candidateCount > MAX_CANDIDATES) {
        cout << "Maximum " << MAX_CANDIDATES
             << " candidates allowed.\n";
        candidateCount = MAX_CANDIDATES;
    }

    cout << "\n====================================\n";
    cout << "       ENTER CANDIDATE DATA\n";
    cout << "====================================\n";

    for (int i = 0; i < candidateCount; i++) {
        candidates[i].id = i + 1;

        cout << "Enter Name of Candidate "
             << i + 1 << " : ";

        cin >> candidates[i].name;

        candidates[i].votes = 0;
    }

    cout << "\nCandidates Registered Successfully!\n";
}

// ==============================
// Main Function
// ==============================
int main() {
    int choice;

    cout << "====================================\n";
    cout << "     ONLINE VOTING SYSTEM PROJECT\n";
    cout << "====================================\n";

    addCandidates();

    do {
        cout << "\n====================================\n";
        cout << "            MAIN MENU\n";
        cout << "====================================\n";

        cout << "1. Cast Vote\n";
        cout << "2. Display Results\n";
        cout << "3. Display Winner\n";
        cout << "4. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                castVote();
                break;

            case 2:
                displayResults();
                break;

            case 3:
                displayWinner();
                break;

            case 4:
                cout << "\nThank You for Using the System.\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}#include <iostream>
#include <iomanip>
using namespace std;

// ==============================
// ONLINE VOTING SYSTEM
// Using Arrays and Structures
// ==============================

// Structure for Candidate
struct Candidate {
    int id;
    string name;
    int votes;
};

// Constants
const int MAX_CANDIDATES = 10;
const int MAX_VOTERS = 100;

// Arrays
Candidate candidates[MAX_CANDIDATES];
int votedUsers[MAX_VOTERS];

// Global Counters
int candidateCount;
int votedCount = 0;

// ==============================
// Function to Check Duplicate Voting
// ==============================
bool hasVoted(int voterID) {
    for (int i = 0; i < votedCount; i++) {
        if (votedUsers[i] == voterID) {
            return true;
        }
    }
    return false;
}

// ==============================
// Function to Cast Vote
// ==============================
void castVote() {
    int voterID;

    cout << "\n====================================\n";
    cout << "          CAST YOUR VOTE\n";
    cout << "====================================\n";

    cout << "Enter Voter ID : ";
    cin >> voterID;

    // Duplicate Vote Check
    if (hasVoted(voterID)) {
        cout << "\n[ ACCESS DENIED ]\n";
        cout << "You have already voted.\n";
        return;
    }

    // Display Candidates
    cout << "\nAvailable Candidates\n";
    cout << "------------------------------------\n";

    for (int i = 0; i < candidateCount; i++) {
        cout << candidates[i].id << ". "
             << candidates[i].name << endl;
    }

    int choice;
    cout << "\nEnter Candidate ID : ";
    cin >> choice;

    // Candidate Search
    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].id == choice) {
            candidates[i].votes++;
            votedUsers[votedCount] = voterID;
            votedCount++;

            cout << "\n[ SUCCESS ] Vote Cast Successfully!\n";
            return;
        }
    }

    cout << "\n[ ERROR ] Invalid Candidate ID!\n";
}

// ==============================
// Function to Display Results
// ==============================
void displayResults() {
    cout << "\n====================================\n";
    cout << "          VOTING RESULTS\n";
    cout << "====================================\n";

    cout << left
         << setw(10) << "ID"
         << setw(20) << "Candidate"
         << setw(10) << "Votes" << endl;

    cout << "------------------------------------\n";

    for (int i = 0; i < candidateCount; i++) {
        cout << left
             << setw(10) << candidates[i].id
             << setw(20) << candidates[i].name
             << setw(10) << candidates[i].votes
             << endl;
    }
}

// ==============================
// Function to Display Winner
// ==============================
void displayWinner() {
    int maxVotes = -1;
    string winner = "";

    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].votes > maxVotes) {
            maxVotes = candidates[i].votes;
            winner = candidates[i].name;
        }
    }

    cout << "\n====================================\n";
    cout << "             WINNER\n";
    cout << "====================================\n";

    cout << "Winner : " << winner << endl;
    cout << "Votes  : " << maxVotes << endl;
}

// ==============================
// Function to Add Candidates
// ==============================
void addCandidates() {
    cout << "Enter Number of Candidates : ";
    cin >> candidateCount;

    if (candidateCount > MAX_CANDIDATES) {
        cout << "Maximum " << MAX_CANDIDATES
             << " candidates allowed.\n";
        candidateCount = MAX_CANDIDATES;
    }

    cout << "\n====================================\n";
    cout << "       ENTER CANDIDATE DATA\n";
    cout << "====================================\n";

    for (int i = 0; i < candidateCount; i++) {
        candidates[i].id = i + 1;

        cout << "Enter Name of Candidate "
             << i + 1 << " : ";

        cin >> candidates[i].name;

        candidates[i].votes = 0;
    }

    cout << "\nCandidates Registered Successfully!\n";
}

// ==============================
// Main Function
// ==============================
int main() {
    int choice;

    cout << "====================================\n";
    cout << "     ONLINE VOTING SYSTEM PROJECT\n";
    cout << "====================================\n";

    addCandidates();

    do {
        cout << "\n====================================\n";
        cout << "            MAIN MENU\n";
        cout << "====================================\n";

        cout << "1. Cast Vote\n";
        cout << "2. Display Results\n";
        cout << "3. Display Winner\n";
        cout << "4. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                castVote();
                break;

            case 2:
                displayResults();
                break;

            case 3:
                displayWinner();
                break;

            case 4:
                cout << "\nThank You for Using the System.\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}

