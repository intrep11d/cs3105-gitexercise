#include <stdio.h>

void printThis(char buffer[]);

int main() {
    char buffer[50];

    printf("Enter message: ");
    scanf("%s", &buffer);
    printThis(buffer);

}

void printThis(char buffer[]) {
    printf("Function is printing message: %s", buffer);
}