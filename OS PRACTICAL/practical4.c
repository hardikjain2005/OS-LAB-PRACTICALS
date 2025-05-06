// Practical4: To write a program do demonstrate process creation (parent and child).

// Commands:
// cd Documents
// ls
// cat file.c(filename)
// gcc file.c -o test
// ./test

// Code:
#include <unistd.h>
#include <stdio.h>

int main() {
    int cpr;
    cpr = fork();

    if (cpr < 0) {
        printf("Fork failed to create process\n");
    } else if (cpr == 0) {
        printf("Process created\n");
        printf("Process id of the child process: %d\n", getpid());
        printf("Process id of the parent process: %d\n", getppid());
    } else {
        printf("In parent process\n");
    }

    return 0;
}