#include<stdio.h>

int main()

{
	int a,b,c;
	
	printf("enter value = a");
	scanf("%d",&a);
	
	printf("enter value =b");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	
	printf("swap value =%d %d\n",a,b);
	
	return 0;
}
