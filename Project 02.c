//Exercise 2
#include <stdio.h>

int main() {
    int num; // Variable declaration for loop control

    // Printing numbers from 1 to 10 using a for loop
    printf("For Loop:\n");
    for (num = 1; num <= 10; num++) {
        printf("%d\n", num); // Print the current value of num
    }

    // Printing a separator line
    printf("\n---\n");

    // Printing numbers from 1 to 10 using a while loop
    printf("While Loop:\n");
    num = 1; // Initialize num to 1 for while loop
    while (num <= 10) {
        printf("%d\n", num); // Print the current value of num
        num++; // Increment num by 1
    }

    // Printing a separator line
    printf("\n---\n");

    // Printing numbers from 1 to 10 using a do-while loop
    printf("Do-While Loop:\n");
    num = 1; // Initialize num to 1 for do-while loop
    do {
        printf("%d\n", num); // Print the current value of num
        num++; // Increment num by 1
    } while (num <= 10); // Continue the loop as long as num is less than or equal to 10

    return 0; // Return 0 to indicate successful program execution
}
//ONAH PRAISE CHIBUZOR
//CMP2307630
//SOFTWARE ENGINEERING 