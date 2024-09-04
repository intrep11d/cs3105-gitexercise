#include <stdio.h>

void printThis(char buffer[]);
void welcomeMessage();
void greet(char buffer[]);

int main() {
    char buffer[50];

    welcomeMessage(); //added welcome message to greet the user

    printf("Enter name: ");
    scanf("%s", &buffer);
    greet(buffer);

}

void greet(char buffer[]) {
    printf("Hello, %s!", buffer);
}

void welcomeMessage(){
    printf("Welcome to Lawrence's Program!\n");
}