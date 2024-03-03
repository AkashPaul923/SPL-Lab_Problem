/*To read data from keyboard, write it to a file called
INPUT.txt. Again, open the same file to read the same data from the file
and display it to the terminal*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int num;
 FILE *fptr;
 fptr = fopen("INPUT.txt","w");
 printf("Enter Number:");
 scanf("%d", &num);
 fprintf(fptr, "%d",num);
 fclose(fptr);
 fptr = fopen("INPUT.txt","r");
 fscanf(fptr, "%d", &num);
 printf("Value of number: %d", num);
 fclose(fptr);
 return 0;
}
