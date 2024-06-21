#ifndef CONSTANTS_H
#define CONSTANTS_H
  
  #define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  #define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
  #define SPECIAL "!@#$%^&*()_+-=[]{};:,.<>?"
  #define NUMBERS "0123456789"
  
  #define FG_RED "\x1b[0;31m"
  #define FG_LIGHT_CYAN "\x1b[1;36m"
  #define FG_GREEN "\x1b[0;32m"
  #define FG_RESET "\x1b[0m"
  
  #define CHECK FG_GREEN "\uf42e" FG_RESET
  #define CROSS FG_RED "X" FG_RESET
  
  #define USE_ACTIVE "[" CHECK "] "
  #define USE_INACTIVE "[" CROSS "] "
  #define USE_EMPTY "[ ] "
  
  #define CURSOR_UP(LINES) "\x1b[" #LINES "A"

#endif
