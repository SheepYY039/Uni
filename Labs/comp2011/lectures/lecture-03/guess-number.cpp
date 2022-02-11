#include <cstdlib> // for rand()
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));

  // Generate random number
  int target;
  target = rand() % 100 + 1;

  // Get user input
  int guess; // if not initialized, we don't know what's in it ( no default
             // value )

  int lower = 1, upper = 100;
  do {
    do {
      cout << "Please enter a number between " << lower << " to " << upper
           << endl;
      cin >> guess;
    }
    // Validate user entered number
    while ((guess < lower) || (guess > upper));

    if (guess < target) {
      cout << "The number should be larger" << endl;
      lower = guess + 1;
    } else if (guess > target) {
      cout << "The number should be smaller" << endl;
      upper = guess - 1;
    } else {
      cout << "You are correct" << endl;
    }
  } while (guess != target);
  return 0;
}
