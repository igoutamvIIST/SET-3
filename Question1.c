/*
In the theory of numbers, square free numbers have a special place. A square free number
is one that is not divisible by a perfect square (other than 1). Thus 72 is divisible by 36 (a
perfect square), and is not a square free number, but 70 has factors 1, 2, 5, 7, 10, 14, 35 and
70. As none of these are perfect squares (other than 1), 70 is a square free number.
For some algorithms, it is important to find out the square free numbers that divide a number.
Note that 1 is not considered a square free number.
In this problem, you are asked to write a program to find the number of square free numbers
that divide a given number
*/
#include <stdio.h>
void main(){
    int input, j, count = 0;
    int is_square_free;

    printf("Enter a number: ");
    scanf("%d", &input);
    for (int i = 2; i <= input; i++) {
        if (input % i == 0) {
            is_square_free = 1;
            for (j = 2; j * j <= i; j++) {
                if (i % (j * j) == 0) {
                    is_square_free = 0;
                    break;
                }
            }
            if (is_square_free) {
                count++;
                printf("Current value of count: %d\n", count);
            }
        }
    }
    printf("\nSquare-free divisors of %d is: %d\n", input, count);
}