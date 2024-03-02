#include<stdio.h>
int main()

{
	int x,y,xy;
	
	printf("enter value x=");
	scanf("%d",&x);
	
	printf("enter value y=");
	scanf("%d",&y);
	
	xy=(x*x)-(2*x*y)+(y*y);
	
	printf("enter value %d %d ",xy);
	
	return 0;
}