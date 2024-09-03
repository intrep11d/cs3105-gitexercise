#include <stdio.h>

void greet(char buffer[]);

int main() {
    char buffer[50];

    printf("Enter name: ");
    scanf("%s", &buffer);
    greet(buffer);

}

void greet(char buffer[]) {
    printf("Hello, %s!", buffer);
}