#include<stdio.h>
int main()
{
	int i=0,a,b;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	while(a>b) 
    {
    	i++;
    	b++;
    	
	}
	printf("%d",i);
	return 0;
}
