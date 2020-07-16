#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char username[40];
    char email[50];
    char gender[6];
    int age;
};

void getUserInfo(char username[], char email[], int age) {
  printf("username: %s\nemail %s\nage: %d\n\n", username, email, age);
}

void createUsersFile(char fileName[]){
  FILE *filePointer = fopen(fileName, "w");
  fprintf(filePointer, "Hey!\nTesting!");
  fclose(filePointer);
}

void readUsersFile(char fileName[]) {
  char line[255];
  FILE *filePointer = fopen(fileName, "r");
  fgets(line, 255, filePointer);
  printf("%s", line);
  fgets(line, 255, filePointer);
  printf("%s\n\n", line);
  fclose(filePointer);
}

int main() {
  struct User admin;
  strcpy(admin.username, "boushib");
  strcpy(admin.email, "admin@boushib.com");
  strcpy(admin.gender, "male");
  admin.age = 29;

  //createUsersFile("./users.txt");
  readUsersFile("./users.txt");

  getUserInfo(admin.username, admin.email, admin.age);

  int num = 200;
  int *pNum = &num;
  printf("num pointer: %p\n", pNum);
  printf("num value: %d\n", *pNum);

  return 0;
}
