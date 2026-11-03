#include<stdio.h>
int main ()
{
    int i,j;
    int sum;
    i = 1;
    int n;
    scanf("%d",&n);
    n = 9;

    while ( i<=n ) {
        j=1;
        while ( j<=i ) {
            printf("%d*%d=%d",j,i,i*j);
            if ( i*j<10 ) {
                printf("   ");
            } else {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

/*

#include<stdio.h>
int main ()
{
    int i,j;
    int n;
    scanf("%d",&n);

    n= 9;

    for( i=1;i<=9;i++) {
         printf("\n");
        for (j=1;j<=i;j++) {
              printf("%d*%d=%d",j,i,i*j);
        if (i*j<10) {
            printf("   ");
            }    else {
            printf("  ");
            }
        }
      
    }
       
    
        
    return 0;
}

*/
