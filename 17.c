#include<stdio.h>
int main ()
{
    int a,n;
    scanf("%d %d",&a,&n);

    int sum = 0;
    int i;
    int t=0;

    for ( i=0; i<n;i++) {
        t = t*10+a;
        sum += t;
    }
    printf("%d\n",sum);

    return 0;
}


/*#include<stdio.h>
int main ()
{
    int a,n;
    int sum=0;
    int t;
    int S=0;


    scanf("%d %d", &a, &n);

    int i = 1;
    for (t=1;t<=n;t++) {
        sum = sum+a*i;
        i = i*10;

//        printf("sum=%d\n",sum);
//        printf("t=%d\n",t);
//        printf("i=%d\n",i);
        S += sum;
    }


    printf("和为%d",S);
    return 0;
}
*/    
