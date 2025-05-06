// Practical2: Write a C program using VI editor


// Commands:
// cd Documents
// ls
// cat file1.c (filename)  [for input]
// gcc file1.c -o test   [for output]
// ./test   [for output]


//  Code:

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}