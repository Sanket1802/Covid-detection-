#include<stdio.h>
int main()
{
	char key[20],response[20];
	int count,m,l,i,x,a,k,j,score,b,correct[20];
	printf("enter total marks \n");
	scanf("%d",&b);
	printf("enter number of student appeared for test \n");
	scanf("%d",&a);
	printf("enter the correct answers \n");
	for(i=0;i<10;i++)
	{
		scanf("%c",&key[i]);
	}
	scanf("%c",&key[i]);
	key[i]='\0';
	
	
	for(k=1;k<=a;k++)
	{
		score=0;
		printf("enter response of student %d \n",k);		
		for(i=0;i<10;i++)
		{
			scanf("%c",&response[i]);
		}
		scanf("%c",&response[i]);
		response[i]='\0';
		for( i=0;i<10;i++)
			correct[i]=0;
		for( i=0;i<10;i++)
			{
				if(response[i]==key[i])
					{
						score=score+1;
						correct[i]=1;
					}
			
			}
			printf("student %d \n",i);
			printf("score is  %d  out of %d \n",score,b);
			printf("wrong responses are:\n");
			x=0;
			for(i=0;i<10;i++)
			{
				if(correct[i]==0)
				{
					printf("%d ",i+1);
					x=x+1;
				}
			}
				printf("\n");
				if(x==0)
				{
					printf("no wrong answers \n");
				}
			
	}
	return 0;
}