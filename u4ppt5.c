#include<stdio.h>

int main()

{
	int a,b,c;
	
	printf("enter valur a=");
	scanf("%d",&a);
	
    printf("enter valur b=");
	scanf("%d",&b);
	
	c=(a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b);
	
	printf("%d",c);
	
	return 0;
}