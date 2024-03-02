//–Evaluate: 𝒇(𝒙) = 𝒙 −𝒙^𝟑/𝟑! +𝒙^𝟓/𝟓!− ⋯



#include <stdio.h>
#include <math.h>
long factorial(int n)
{
 if (n == 0){
 return 1;
 }else{
 return(n * factorial(n-1));
 }
}
int main()
{
float x,sum,t,d;
int i,j,n;
printf("Input the Value of x :");
scanf("%f",&x);
printf("Input the number of terms : ");
scanf("%d",&n);
sum = 0; t = 1;
for (i=1,j=1;i<(n*2) && j<=n;i+=2,j++)
{
 if(j%2 == 0){
 sum = sum - pow(x,i)/factorial(i);
 }else{
 sum = sum + pow(x,i)/factorial(i);
 }
}
printf("\nthe sum = %.2f\n",sum);
return 0;
}
