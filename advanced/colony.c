#include <stdio.h>
#include <malloc.h>
void printState(int *a)
{
	printf("[");
	for(int i=0;i<8;i++)
		printf("%d ", *(a+i));
	printf("]\n");
}

int* schedule(int *cells,int days)
{
	int *ans;
	ans=(int*)calloc(10,sizeof(int));
	for(int t=0;t<days;t++)
	{
		for(int j=1;j<9;j++)
				ans[j]=cells[j-1];
		for(int i=1;i<9;i++)
		{
			if(ans[i-1]==ans[i+1])
				cells[i-1]=0;
			else
				cells[i-1]=1;
		}
	}
	return cells;
}

int main(int argc, char const *argv[])
{
	int days,*colony;
	printf("Enter the days\n");
	scanf("%d",&days);
	colony=(int*)malloc(8*sizeof(int));
	printf("Enter colony status\n");
	for(int i=0;i<8;i++)
		scanf("%d",colony+i);
	printf("Status\n");
	printState(colony);
	colony=schedule(colony,days);
	printf("After status\n");
	printState(colony);
	return 0;
}
