#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "constants.h"
#include "utils.h"

int main() {
  int password_len;
  char* charset = (char*)malloc(
    strlen(UPPERCASE) +
    strlen(LOWERCASE) +
    strlen(NUMBERS) +
    strlen(SPECIAL) + 1
  );

  srand( (unsigned int)time(NULL) ); 

  if (charset == NULL) {
    perror(ERROR_MSG "failed to assign memory");
    exit(EXIT_FAILURE);
  }

  charset[0] = '\0';

  printf("your password length: " FG_LIGHT_GREEN);
  if (scanf("%d", &password_len) != 1) {
    perror(ERROR_MSG "can't scan password length");
    exit(EXIT_FAILURE);
  }
  printf(FG_RESET);

  if (password_len <= 1) {
    perror(ERROR_MSG "password length must be higher than 1");
    exit(EXIT_FAILURE);
  }
  getchar();

  if (ask_option("use uppercase?"))
    strcat(charset, UPPERCASE);
  
  if (ask_option("use lowercase?"))
    strcat(charset, LOWERCASE);
  
  if (ask_option("use numbers?"))
    strcat(charset, NUMBERS);
  
  if (ask_option("use special?"))
    strcat(charset, SPECIAL);
  
  if (strlen(charset) == 0) {
    perror(ERROR_MSG "Can't generate password without a charset");
    exit(EXIT_FAILURE);
  }

  gen_pw(charset, (size_t)password_len);

  free(charset);
}
