#include<stdio.h>

#define ONE 1
#define TWO 2
#define FOUR 4

int main(int argc, char const *argv[])
{
    //Variables
    int i,j,k,flag =1,x=0,y=0,z=0;
    int a[10],bal=0;
    int remain,total;
    int sample[10];
    int person = 1;

    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        a[i] = 0;
    }

    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }

    flag = 1;
    
    for(i=0;i<k;i++)
    {
        remain = a[i];
        total = a[i];

        while(remain > 0)
        {
            // if(total > 4)
            // {
            //     bal = total % 4;
            //     remain = bal;
            // }
            // else{
                
            //     bal = total;
            //     //
            //     if(bal == 0)
            //         {
            //             printf("\nGive me some distance");
            //         }
            //         else if(bal == 1)
            //         {
            //             printf("\nJelly");
            //         }else if(bal == 2)
            //         {
            //             printf("\nJelly");
            //         }else if(bal == 3)
            //         {
            //             printf("\nJack");
            //         }else if(bal == 4)
            //         {
            //             printf("\nJelly");
            //         }         
            //     //

            //     return 0;
            // }

            // if(bal == 0)
            // {
            //     printf("\nJack 0");
            //     remain = 0;
            // }
            // else if(bal == 1)
            // {
            //     printf("\nJelly 2");
            //     remain = 0;
            // }else if(bal == 2)
            // {
            //     printf("\nJack 2");
            //     remain = 0;
            // }else if(bal == 3)
            // {
            //     printf("\nJelly 3");
            //     remain = 0;
            // }                   

            

        }




    }

    return 0;
}    
