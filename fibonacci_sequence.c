#include<stdio.h>

int main()
{
    int terms;
    printf("Enter the number of terms of Fibonacci Sequence you want to show: ");
    scanf("%i",&terms);

    int f1=0,f2=1;
    printf("0\n");
    printf("1\n");

    for (int i=1; i<=terms-2; i++)
    {
        int sum=f1+f2;
        printf("%i\n",sum);
        f1=f2;
        f2=sum;
    }

    return 0;
}