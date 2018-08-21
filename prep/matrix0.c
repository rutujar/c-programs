#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,row;
    int a[3][3];
    int b[3]={0,0,0},res;

    printf("\nEnter the matrix => \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                b[i]++;

            }
        }

        if(b[i]>res)
                {
                    res = b[i];
                    row = i+1;
                }
    }

    printf("\nRow %d has max zeroes => %d",row,res);
    return 0;
}
