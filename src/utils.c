#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "utils.h"
#include "constants.h"

int ask_option(const char* txt) {
  char selection;
  printf(USE_EMPTY "%s (y/n): ", txt);
  scanf("%c", &selection);
  int use = tolower(selection) == 'y';
  printf(CURSOR_UP(1) "%s\n", use ? USE_ACTIVE:USE_INACTIVE);
  if (selection == '\n') return 0;
  getchar();
  return use;
}
void gen_pw(const char* charset, size_t pw_len) {
  size_t charset_len = strlen(charset);
  printf("Generated password: " FG_LIGHT_GREEN);
  for (int i = 0; i < pw_len; i++) {
    printf("%c", charset[ rand() % charset_len  ]);  
  }
  printf(FG_RESET "\n");
}
