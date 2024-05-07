/*– Generate numbers triangle like the following.
Code: -
                 1
                1 2
               1 2 3
              1 2 3 4
             1 2 3 4 5

*/

#include <stdio.h>
int main() {
 int rows, coef = 1, space, i, j;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for (i = 0; i <= rows; i++) {
 for (space = 1; space <= rows - i; space++){
 printf(" ");
 }
 for (j = 1; j <= i; j++) {
 printf("%4d", j);
 }
 printf("\n");
 }
 return 0;
}
