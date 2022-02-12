#include <iostream>
using namespace std;

int main() {
  int number; // BUG: 1. added ; at the end of number
  cout << "Welcome to the exciting, fun, and awesome programming world! "
       << "Enter an odd number, and I can tell something about you! "
       << endl; // BUG: 2. Added << before endl
  cin >> number;

  if (number % 2 == 0) // BUG: 3. changed = to ==
    cout << "Hmm... this is not an odd number..." << endl;
  else {
    if (number < 0)
      cout << "You seem to be a bit negative... :( Cheer up! " << endl;
    else
      cout << "You must be very excited! Me too! :)" << endl;
  } // BUG: 4. Missing close bracket

  return 0;
}
