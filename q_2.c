#include<stdio.h>
void main()
{
	int i,r,j,coef=1,space;
	for(i=0;i<5;i++)
	{
		for(space=1;space<=5-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);	
		}
		for(j=i;j!=0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

                                                                                                                         
