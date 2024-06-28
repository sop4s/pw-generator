#ifndef CONSTANTS_H
#define CONSTANTS_H
  //CHARSET
  #define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  #define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
  #define SPECIAL "!@#$%^&*()_+-=[]{};:,.<>?"
  #define NUMBERS "0123456789"
  
  //TERMINAL COLORS
  #define FG_RED "\x1b[0;31m"
  #define FG_RESET "\x1b[0m"
  #define FG_LIGHT_GREEN "\x1b[1;32m"

  //LOG MESSAGES
  #define ERROR_MSG FG_RED "[Error] " FG_RESET

  //DECORATION
  #define USE_ACTIVE "[" FG_LIGHT_GREEN "+" FG_RESET "] "
  #define USE_INACTIVE "[" FG_RED "-" FG_RESET "] "
  #define USE_EMPTY "[ ] "

  //CURSOR
  #define CURSOR_UP(LINES) "\x1b[" #LINES "A"
#endif
