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

/*
#include <stdio.h>

int main ()
{
    int a;
    scanf("%d", &a);
    int i,j,k;
    int cnt = 0;

    for ( i=a; i<=a+3; i++) {
        printf("%d",i);
    }  
    for ( j=a; j<=a+3; j++) {
        printf("%d", j);
    } 
    for ( k=a; k<=a+3; k++) {
        printf("%d",k);
    }
    if (i!=j) {
        if (j!=k) {
            if (i!=k) {
                cnt++;
                printf("%d%d%d",i,j,k);
                if ( cnt==6 ) {
                    printf("\n");
                    cnt = 0;
                } else {
                    printf(" ");
                }
            }
        }
    }


    return 0;
*/
