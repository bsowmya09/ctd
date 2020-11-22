//program to find area and perimeter of a rectangle//

#include<stdio.h>
int main()
{
	int l,b,a,p;
	printf("enter l value\n");
	scanf("%d",&l);
	printf("enter b value\n");
	scanf("%d",&b);
	a=l*b;
	printf("area=%d\n",a);
	p=2*(l+b);
	printf("perimeter=%d",p);
}
