#include<stdio.h>

main()
{
	int a,b;
	printf("Enter value A =");
	scanf("%d",&a);
	printf("Enter value B =");
	scanf("%d",&b);
	
	int *p1 , *p2;
	
	p1=&a;
	p2=&b;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("Swiping value of A & B \n\n=");
	
	printf("swap value A = %u = %d\n",p1,*p1);
	printf("swap value B = %u = %d",p2,*p2);
}