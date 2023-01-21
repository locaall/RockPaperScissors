// So Goddamn ugly code :))

#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    string list[] = {"rock", "paper", "scissors"};
    char decision = '0';
    int size = sizeof(list)/sizeof(list[0]);
    int index = rand() % size;

    string randomString = list[index];

    cout << "Enter R - rock, P - paper, S - scissors: "; cin >> decision;
    switch (decision) {
        case 'R':
            cout << list[0] << endl;
            break;
        case 'P':
            cout << list[1] << endl;
            break;
        case 'S':
            cout << list[2] << endl;
            break;
        default:
            cout << "Wrong key pressed." << endl;
            break;
    }
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << randomString << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    if (decision == 'R') {
        if (randomString == "rock") {
            cout << "Tie." << endl;
        } else if (randomString == "paper") {
            cout << "You lost!" << endl;
        } else {
            cout << "You won!" << endl;
        }
    } else if (decision == 'P') {
        if (randomString == "rock") {
            cout << "You won!" << endl;
        } else if (randomString == "paper") {
            cout << "Tie." << endl;
        } else {
            cout << "You lost!" << endl;
        }
    } else if (decision == 'S') {
        if (randomString == "rock") {
            cout << "You lost." << endl;
        } else if (randomString == "paper") {
            cout << "You won!" << endl;
        } else {
            cout << "Tie." << endl;
        }
    }
    return 0;
}