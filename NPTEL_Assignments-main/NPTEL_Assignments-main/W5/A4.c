/*Write a C program to find sum of following series where the value of N is taken as input 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
*/

#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
sum=1;
for(float i=2;i<=N;i++)
 sum+=1/i;
printf("Sum of the series is: %.2f",sum);
}