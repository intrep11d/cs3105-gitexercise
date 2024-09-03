#include <stdio.h>

void printThis(char buffer[]);
void welcomeMessage();

int main() {
    char buffer[50];

    welcomeMessage(); //added welcome message to greet the user

    printf("Enter message: ");
    scanf("%s", &buffer);
    printThis(buffer);

}

void printThis(char buffer[]) {
    printf("Function is printing message: %s", buffer);
}

void welcomeMessage(){
    printf("Welcome to Lawrence's Program!\n");
}