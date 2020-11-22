//program to compute quotient and remainder of given a and b values//

#include<stdio.h>
int main()
{
	int a,b,r,q;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	q=a/b;
	printf("quotient=%d\n",q);
	r=a%b;
	printf("remainder=%d\n",r);
}
