#include<stdio.h>

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }else
    {
        return n * fact(n-1);
    }
}

int comb(int r, int n)
{
    return (fact(r)/(fact(r-n)*fact(n)));
}

int main(int argc, char const *argv[])
{
    //Variables
    int i,j,h,space;
    int num = 1;

    printf("\nEnter the height of triangle => ");
    scanf("%d",&h);

    for(i=0;i<h;i++)
    {

        for(space = 1;space<h-i;space++)
        {
            printf(" ");
         
        }
            
        for(j=0; j <= i; j++)
                {
                    // if (j==0 || i==0)
                    //     num = 1;
                    // else
                    //     num = num*(i-j+1)/j;

                    // printf("%d ", num);

                    num = comb(i,j);
                    printf("%d ",num);
                }

        

        printf("\n");    

    }

    return 0;
}
