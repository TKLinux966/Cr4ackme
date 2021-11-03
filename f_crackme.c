#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkUsername(char c[]) {
  int length;
  length = strlen(c);
  //printf("Length is %d\n", length);
  if (1 < length && length < 8) {
    return 0;
  }
  else if (length >= 8) {
    return 1;
  }
  else {
    exit(0);
  }
}

void message() {
  printf("---------------------------------------------------\n");
  printf("Welcome to f-cr4ckme!! I hope you have fun :)\n");
  printf("---------------------------------------------------\n\n");
}

int main() {
  char name[20];
  char password[30];
  int twoOptions;
  char rightPasswd[30];

  message();
  printf("Type your username: ");
  scanf("%20s", name);
  twoOptions = checkUsername(name);

  if (twoOptions == 0) {
    strcpy(rightPasswd, "@fsociety");
    strcat(name, rightPasswd);
    strcpy(rightPasswd, name);
  } else if (twoOptions == 1) {
    strcpy(rightPasswd, "Mr.");
    strcat(rightPasswd, name);
  } else {
    exit(0);
  }

  printf("Type your password: ");
  scanf("%30s", password);

  int samePass = strcmp(rightPasswd, password);
  if (samePass == 0) {
    printf("\nHello, friend. You successfully cr4cked me :)");
  } else {
    printf("\nI'm sorry. You are not supposed to be here.");
  }

  return 0;
}
