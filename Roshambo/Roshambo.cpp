#include <iostream>
#include <stdlib.h>
#include <time.h> // Include this header for time-related functions

int main() {
  srand(time(NULL)); // Seed the random number generator

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  std::cout << "shoot! ";
  std::cin >> user;

  // Display the user's choice
  std::cout << "You chose: ";
  switch (user) {
    case 1:
      std::cout << "rock\n";
      break;
    case 2:
      std::cout << "paper\n";
      break;
    case 3:
      std::cout << "scissors\n";
      break;
    default:
      std::cout << "Invalid choice\n";
      return 1; // Exit with an error code
  }

  // Display the computer's choice
  std::cout << "Computer chose: ";
  switch (computer) {
    case 1:
      std::cout << "rock\n";
      break;
    case 2:
      std::cout << "paper\n";
      break;
    case 3:
      std::cout << "scissors\n";
      break;
  }

  // Determine the winner
  if (user == computer) {
    std::cout << "It's a tie!\n";
  } else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
    std::cout << "You win!\n";
  } else {
    std::cout << "Computer wins!\n";
  }

  return 0; // Exit with success code
}

