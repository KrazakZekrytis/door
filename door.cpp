/*
Inspired by Saw: Guess which door leads to salvation. If chosen wrong will lead
to immediate termination. Let the game begin.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printDoors() {
    cout << endl;
    cout << endl;
    cout << "+---+ +---+" << endl;
    cout << "| 1 | | 2 |" << endl;
    cout << "+---+ +---+" << endl;
    cout << endl;
    cout << endl;
}

int main() {
  srand(time(NULL));
  int usrChoice;
  int randomChoice = (rand() % 2) + 1;
  int score = 0;

  printDoors();
  cout << "Enter 1 or 2: ";
  cin >> usrChoice;

  while(usrChoice == randomChoice) {
    if(usrChoice == randomChoice) {
      score += 1;
    }
    else {
      break;
    }
    randomChoice = (rand() %2) + 1;
    printDoors();
    cout << "Enter 1 or 2: ";
    cin >> usrChoice;
  }

  cout << "Final Score: " << score << endl;

}
