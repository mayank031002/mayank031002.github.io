#include<stdio.h>
int main()
{
    int a;
    int b;
    {
    printf("Enter the table which you want to know ");
    scanf("%d",&a);//Taking input//
    }   
    for(a,b=1;b<=10;b++)
    {
    printf("%d\n",a*b);
    }
    return 0;
}