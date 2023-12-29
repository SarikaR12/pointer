#include<stdio.h>

main()
{
	int n;
	
	printf("Enter value of N =");
	scanf("%d",&n);
	int *p;
	p =&n;
	
	int square = *p * *p;
	printf("square of N =%d",square);
	
}