#include<stdio.h
int main()
{
int n,i,sum,number;
sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&number);
    sum=sum+number;
}

float avg=sum/n;
printf("sum is %d\n",sum);
printf("avg is %f\n",avg);
return 0;
}
