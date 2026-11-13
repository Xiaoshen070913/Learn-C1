#include<stdio.h>

void  sum(int began,int end);

int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void  sum(int began,int end)
{
    int i;
    int sum=0;
    for ( i=began;i<=end;i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n",began, end,sum);
}