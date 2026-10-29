 #include <stdio.h>
int main ()
{
int x;

//scanf("%d", &x);
x = 2;
int cnt = 0;

//for ( x = 2; x<100; x++)
//while ( cnt < 50)
for  ( x=2; cnt<50; x++)
	{
		int i;
		int isPrime = 1;   // x是素数
		for ( i=2; i<x; i++) {
        		if ( x % i==0 ) {
                		isPrime = 0;
               			break;
        		}
		}
	if ( isPrime == 1 )  {
        		printf("%d\n", x);
			cnt ++;
		}
//		x ++;
	}

        return 0;
}
