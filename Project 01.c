//Exercise 1
#include <stdio.h>

int main() {
    int num; // Variable to store the user input number

    // Prompt the user to enter a number
    printf("Please enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd using a conditional statement
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else if (num % 2 != 0) {
        printf("%d is an odd number.\n", num);
    }

    return 0; // Return 0 to indicate successful program execution
}
//ONAH PRAISE CHIBUZOR
//CMP2307630
//SOFTWARE ENGINEERING 