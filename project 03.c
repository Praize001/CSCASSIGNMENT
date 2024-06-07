// Exercise 3

#include <stdio.h>

int main() {
    char array[5][100];
    int i;

    printf("Enter 5 strings:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(array[i], 100, stdin);
    }

    printf("\nThe elements of the array are:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}

//ONAH PRAISE CHIBUZOR
//CMP2307630
//SOFTWARE ENGINEERING 