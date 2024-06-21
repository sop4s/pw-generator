#include <iostream>
#include <limits>
#include "constants.h"
#include "utilities.hpp"

using namespace std;

int main() {
  string charset;
  int pw_len;

  cout << "Your password length: ";
  cout << FG_LIGHT_CYAN;
  if (cin >> pw_len) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  } else {
    cerr << FG_RESET "Error reading password length" << endl;
    return 1;
  }
  cout << FG_RESET;

  if (pw_len < 1) {
    cerr << "Password can't be < 1" << endl;
    return 1;
  }
  
  if (ask_use("Use uppercase?")) charset.append(UPPERCASE);
  if (ask_use("Use lowercase?")) charset.append(LOWERCASE);
  if (ask_use("Use special?")) charset.append(SPECIAL);
  if (ask_use("Use numbers?")) charset.append(NUMBERS);
  
  cout << "Your password: " FG_LIGHT_CYAN << generate_password(charset, pw_len) << FG_RESET << endl;
  
  return 0;
}
