#include<stdio.h>

int main(int argc, char const *argv[])
{

    int a[3][3],b[3][3],i,j;

    printf("Enter the first matrix 3x3 => \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    

    printf("\nEnter the second matrix 3x3 => \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    //Check if both matrix are equal

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] != b[i][j])
            {
                printf("\nNot Equal\n");
                return 0;
            }
        }
    }

    printf("\nEqual\n");

    return 0;
}
