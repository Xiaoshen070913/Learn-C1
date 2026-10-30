# include <stdio.h>
int main ()
{
int x;
scanf("%d", &x);

int mask = 1;                   //int cnt = 0;
int t = x;			//do {
while ( t>9 ) {			// 	x/=10;
	t /= 10;;		//	cnt++;
	mask *=10;		//} while (x>0);
}				//int mask = pow(10,cnt-1);
printf("x=%d, mask=%d\n", x, mask);
do {
	int d = x / mask;
	printf("%d", d);
	if ( mask>9) {
		printf(" ");
	}
	x %= mask;
	mask /= 10;
} while ( mask > 0);
printf("\n");


	return 0;
}
