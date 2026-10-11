#include <stdio.h>
#include <string.h>

//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

int main() {
    char str[50];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= '!' && str[i] <= '/') || 
                   (str[i] >= ':' && str[i] <= '@') || 
                   (str[i] >= '[' && str[i] <= '`') || 
                   (str[i] >= '{' && str[i] <= '~')) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}


//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/


int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}