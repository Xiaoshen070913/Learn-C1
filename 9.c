#include <stdio.h>

int main ()
{
    int a;
    scanf("%d", &a);
    int i,j,k;
    int cnt = 0;

    i = a;
    while ( i<=a+3 ) {
            j = a;
            while ( j<=a+3 ) {
                k = a;
                while ( k<=a+3 ) {
                    if ( i!=j) {			//if ( i!=j && i!=k && j!=k ) 学到逻辑运算可以用这个以及还可以for循环
                        if ( i!=k) {
                            if ( j!=k ) {
                                cnt ++;
                                printf("%d%d%d",i,j,k);
                                if ( cnt == 6) {
                                    printf("\n");
                                    cnt = 0;
                                } else {
                                    printf(" ");
                                }
                            }
                        }
                    }
                    k++;
                }
                j++;
            }
            i++;

    }

    return 0;
}
