//Find grade point average(GPA) for five subject marks. Marks should be taken into an array called “sub_marks”.


#include <stdio.h>
#include <string.h>
int main() {
 float sub_marks[5];
 float total = 0, average, percentage;
 char grade[10];
 printf("Enter the marks of five subjects:");
 for(int i=0; i<5; i++)
 {
    scanf("%f", &sub_marks[i]);
    total += sub_marks[i];
 }
 average = total / 5.0;
 if (average <= 100 && average >= 80)
 {
    strcpy(grade, "A+");
 }
 else if (average >= 75 && average < 80)
 {
    strcpy(grade, "A");
 }
 else if (average >= 70 && average < 75)
 {
    strcpy(grade, "A-");
 }
 lse if (average >= 65 && average < 70)
 {
    strcpy(grade, "B+");
 }
 else if (average >= 60 && average < 65)
 {
    strcpy(grade, "B");
 }
 else if (average >= 55 && average < 60)
 {
    strcpy(grade, "B-");
 }
 else if (average >= 50 && average < 55)
 {
    strcpy(grade, "C+");
 }
 else if (average >= 45 && average < 50)
 {
    strcpy(grade, "C");
 }
 else if (average >= 40 && average < 45)
 {
    strcpy(grade, "D");
 }
 else
 {
    strcpy(grade, "Fail");
 }
 printf("\nThe Total marks is: \t%.2f out of 500.00\n", total);
 printf("\nThe Average marks is:\t%.2f\n", average);
 printf("\nThe Grade is: \t'%s'\n", grade);
 return 0;
}
