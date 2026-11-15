#include<stdio.h>
#include<math.h>
int isPrime(int x,int knownPrime[],int number0fKnownPrimes);

/*去掉偶数，从3到x-1,每次加2；
int isPreme(int x) 
{
    int ret=1;
    int i;
    if ( x == 1 ||
        (x%2 == 0 && x != 2) )
        ret = 0;
    for ( i=3;i<x;i+=2) {
        if ( x % i == 0) {
            ret = 0;
            break;
        }
    }
    return 0;
}



//不走到x-1,走到x的平方根；
int isPreme(int x) 
{
    int ret=1;
    int i;
    if ( x == 1 ||
        (x%2 == 0 && x != 2) )
        ret = 0;
    for ( i=3;i<sqrt(x);i+=2) {
        if ( x % i == 0) {
            ret = 0;
            break;
        }
    }
    return 0;
}
*/    
//判断是否能被已知的素数整除
int main(void)
{
    const int number = 100;
    int prime[number];
    prime[0]=2;
    int count = 1;
    int i =3;
    while ( count< number) {
        if ( isPrime(i, prime,count)) {
            prime[count++] = i;
        }
        {
            printf("i=%d \tcnt=%d\t",i,count);
            int i;
            for( i=0;i<number;prime[i]); {
                printf("%d\t",prime[i]);
            }
            printf("\n");
        }
        i++;
    }
    for ( i=0;i<number;i++) {
        printf("%d",prime[i]);
        if ((i+1)%5 ) printf("\t");
        else printf("\n");
    }
    return 0;
}

int isPrime(int x,int knowPrime[],int number0fKnowPrimes)
{
    int ret = 1;
    int i;
    for( i = 0;i<number0fKnowPrimes;i++) {
        if ( x % knowPrime[i] == 0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}