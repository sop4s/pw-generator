#include <iostream>
#include <sstream>
#include "utilities.hpp"
#include "constants.h"

using namespace std;

#define RANDOM_RANGE(MIN, MAX) \
    ((rand()%(int)(((MAX) + 1)-(MIN))) + (MIN))

bool ask_use(const char* message) {
  string input;
  cout << USE_EMPTY << message << " [y/n] ";
  getline(cin, input);

  if (input.empty()) return false;
  if (tolower(input[0]) == 'y') {
    cout << CURSOR_UP(1) << USE_ACTIVE << endl;
    return true;
  }
  cout << CURSOR_UP(1) << USE_INACTIVE << endl;
  return false;
}
std::string generate_password(std::string charset, size_t pw_len) {
  stringstream password;
  srand(static_cast<unsigned int>(time(nullptr)));
  for (int i = 0; i < pw_len; i++)
    password << charset[RANDOM_RANGE(0, charset.length())];
  return password.str();
}
