#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //Variables
    int i,j,k,x,max = 0,flag =0;
    int T,N;
    int t[10],c[30];

    for(i=0;i<30;i++)
    {
        c[i] = 0;
    }

    scanf("%d",&T);

    scanf("%d",&N);

    while(T)
    {

        for(i=0;i<N;i++)
        {
            scanf("%d",&t[i]);
        }

        printf("\n");
        for(i=0;i<N-1;i++)
        {
            if(t[i]>t[i+1])
            {
                max = t[i];
            }else
            {
                max = t[i+1];
            }
        }

        //printf("%d",max);

        for(i=0;i<N;i++)
        {
            x = t[i];
            ++c[x];
        }

        printf("%d",c[0]);
        
        for(i=0;i<6;i++)
        { 
            if((c[i]%2) != 0 && flag == 1)
            {
                printf("\n%d",i);
            }
            else
            {
                flag = 1;
            }
        }
        T--;
    }

    return 0;
}
