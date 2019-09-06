#include<stdio.h>
int main()
{
	int i,a,b,j,k,product[20][20];
	
	printf("enter no of rows");
	scanf("%d",&a);
	printf("enter no of columns");
	scanf("%d",&b);
	printf("\t \t \t \033[022;33mMultiplication table \n \n");
	for(i=1;i<=b;i++)
		printf(" \t %d",i);
	printf("\n");
	printf(" \033[022;31m_________________________________________________________________________ \n ");
	for(i=1;i<=a;i++)
	{
		printf("\033[022;34m \n %d | ", i);
		for(j=1;j<=b;j++)
		{
			product[i][j]=i*j;
		printf("\t \033[022;34m %d",product[i][j]);
	    }
	}
	
	return 0;
}