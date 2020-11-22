//program to compute simple interest//

#include<stdio.h>
int main()
{
	float p,r,t;
	float s;
	printf("enter p value\n");
	scanf("%f",&p);
	printf("enter r value\n");
	scanf("%f",&r);
	printf("enter t value\n");
	scanf("%f",&t);
	s=(p*r*t)/100;
	printf("simple interest=%f ",s);


	
}
