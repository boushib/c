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
  printf("username: %s\nemail %s\nage: %d\n", username, email, age);
}

int main() {
  struct User admin;
  strcpy(admin.username, "boushib");
  strcpy(admin.email, "admin@boushib.com");
  strcpy(admin.gender, "male");
  admin.age = 29;
  getUserInfo(admin.username, admin.email, admin.age);
  return 0;
}
