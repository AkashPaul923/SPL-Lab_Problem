//Verify whether the given year is leap year or not


#include <stdio.h>
int main()
{
 int yr;
 printf ("Enter a year: ");
 scanf ("%d", &yr);
 if (yr%4 == 0 && yr%100 == 0 && yr%400 == 0){
 printf("%d It is LEAP YEAR.", yr);
 }else if (yr%4==0 && yr%100!=0){
 printf("%d It is LEAP YEAR.",yr);
 }else{
 printf ("%d It is NOT LEAP YEAR.",yr);
 }
 return 0;
}
