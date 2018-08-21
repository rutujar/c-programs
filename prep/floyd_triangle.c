#include<stdio.h>

int main(int argc, char const *argv[])
{
    //Variables
    int i,j,k=1,v=1,height = 1;

    printf("\nEnter the height of triangle => ");
    scanf("%d",&height);

    for(i=0;i<height;k++,i++)
    {
        if(k==1)
        {
            printf("%d",v);
            v++;

        }else
        {
            for(j=0;j<(k+(k-1));j++)
            {
                if((j%2) == 0){
                    printf("%d ",v);
                    v++;
                }else{
                    printf("* ");
                }
            }
        }

        printf("\n");
        
    }

    return 0;
}
