#include<stdio.h>

//TJIS PROGRAM IS NOT COMPLETE

void push(int a,int b)
{
    
}

int main(int argc, char const *argv[])
{
    int a[4][4],j,i;
    int stack[20][20];
    int ii,jj;

    printf("\nEnter the maze => ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(a[0][0] == 0)
    {
        printf("\n0 => No Route");
        return 0;
    }else
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                one:if(a[i][j] == 1 && j<4 && i<4)
                {
                    j=j+1;
                    if(a[i][j] == 1 && j<4 && i<4) 
                        {
                            
                        }
                        else
                        {
                            
                        }
                }
            }
        }
    }

    return 0;
}
