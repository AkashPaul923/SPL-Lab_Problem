//Search All Position of any particular value in an unsorted list called “marks”.



#include<stdio.h>
int findElement(int arr[], int n,int key)
{
 int i;
 for (i = 0; i < n; i++){
 if (arr[i] == key){
 return i;
 }
 }
 return -1;
}
int main()
{
 int key;
 int marks[] = {78, 88, 58, 60, 44};
 int size = sizeof(marks) / sizeof(marks[0]);
 printf("Enter number which you search:-");
 scanf("%d",&key);
 int position = findElement(marks, size, key);
 if (position == - 1){
 printf("Marks not found");
 }else{
 printf("Marks Found at Position: %d", position + 1 );
 }
 return 0;
}
