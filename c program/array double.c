#include<stdio.h>
int main()
{
	int a[20][20],i,j;
	for(i = 0; i < 2; i++) 
        for (j = 0; j < 2; j++) 
		{
		printf("enter the values");
		scanf("%d",&a[i][j]);
		}
	for(i = 0; i < 2; i++) 
        for (j = 0; j < 2; j++) 
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
	return 0;
}
