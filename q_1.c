#include<stdio.h>
void main()
{
	int i,j,space;
	for(i=0;i<5;i++)
	{
		for(space=5;space>5-i;space--)
		{
			printf(" ");
		}
		for(j=5;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
