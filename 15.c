#include<stdio.h>
int main ()
{
    int m,n;
    int gcd;
    int min;

    scanf("%d/%d",&m,&n);

    if (m<n) {
        min = m;
    } else {
        min = n;
    }

    int i;
    for (i=1;i<=min;i++) {
        if (m%i==0) {
            if (n%i==0)
            gcd = i;
        }
    }
    printf("%d/%d",m/gcd,n/gcd);


    return 0;
}

/*
辗转相除法
int dividend,divisor;
scanf("%d/%d"，&dividend,&divisor);

int a = dividend;
int b = divisor;
int t;
while( b>0 ) {
    t = a%b;
    a = b;
    b = t;
}
printf("%d/%d",dividend/a,divisor/a);
*/
