#include<stdio.h
int main()
{
int n,number;
int sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&number);
    sum=sum+number;
}

float avg=sum/n;
printf("sum is %d\n",sum);
printf("avg is %.2f\n",avg);
return 0;
}
