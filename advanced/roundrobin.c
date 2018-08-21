#include <stdio.h>
#include <malloc.h>

int isDone(int *a,int n)
{
	for(int i=0;i<n;i++)
		if(*(a+i)!=0)
			return 1;
	return 0;
}

int* getstatus(int *arrival,int *status,int n,int iteration)
{
	for(int i=0;i<n;i++)
		if(iteration>=arrival[i])
			status[i]=1;
	return status;
}

int* incWait(int *arrival,int *wait,int *status,int n,int ptr,int iteration,int *burst)
{
	for(int i=0;i<n;i++)
	{
		if((ptr==i)||(status[i]==0)||(burst[i]==0))
			continue;
		wait[i]++;
	}
	return wait;
}

int incPtr(int ptr,int n)
{
	if(ptr==n-1)
		return 0;
	else
		return (++ptr);
}

float calcAvgWait(int *wait,int n)
{
	float a;
	for(int i=0;i<n;i++)
		a+=wait[i];
	a/=n;
	return a;
}

void printWaitTime(int *wait,int n)
{
	printf("Wait time is \n");
	for(int i=0;i<n;i++)
		printf("P%d - %d\n",i,wait[i]);
}

float roundRobin(int *arrival,int *burst,int n,int q)
{
	int *wait,*status,ptr,iteration=0;
	wait=(int*)calloc(n,sizeof(int));
	status=(int*)calloc(n,sizeof(int));
	ptr=0;
	while(isDone(burst,n))
	{
		status=getstatus(arrival,status,n,iteration);
		if((burst[ptr]==0)||(status[ptr]==0))
		{

			ptr=incPtr(ptr,n);
			continue;
		}
		for(int i=0;(i<q)&&(burst[ptr]);i++)
		{
			burst[ptr]--;
			status=getstatus(arrival,status,n,iteration);
			wait=incWait(arrival,wait,status,n,ptr,iteration,burst);
			iteration++;
		}
		ptr=incPtr(ptr,n);
	}
	printWaitTime(wait,n);
	return calcAvgWait(wait,n);
}

int main(int argc, char const *argv[])
{
	int *arrival,*burst,n,q;
	n=q=3;
	arrival=(int*)calloc(n,sizeof(int));
	burst=(int*)calloc(n,sizeof(int));
	arrival[0]=0;
	arrival[1]=1;
	arrival[2]=4;
	burst[0]=5;
	burst[1]=2;
	burst[2]=3;
	printf("%f\n",roundRobin(arrival,burst,n,q));
	return 0;
}
