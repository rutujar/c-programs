#include<stdio.h>

#define ONE 1
#define TWO 2
#define FOUR 4

int main(int argc, char const *argv[])
{
    //Variables
    int i,j,k,flag =1,x=0,y=0,z=0;
    int a[10];
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
        //Code of calculation
        total = a[i];
        if(flag)
        {
            remain = a[i];
            if(total >= ONE)
            {
                x = total - ONE;
            }

            if(total >= TWO)
            {
                y = total - TWO;
            }

            if(total >= FOUR)
            {
                z = total - FOUR;
            }
        }else
        {
            ;
        }
        j=0;
        flag = 0;

        while(remain != 0)
        {
            if(FOUR <= remain)
            {
                remain = total - FOUR;
                if((j%2) ==0)
                {
                    person = 1;
                }
                else
                {
                    person = 2;
                }
                j++;
            }else if(TWO <= remain)
            {
                remain = total - TWO;
                if((j%2) ==0)
                {
                    person = 1;
                }
                else
                {
                    person = 2;
                }
                j++;
            }else if(ONE <= remain)
            {
                remain = total - ONE;
                if((j%2) ==0)
                {
                    person = 1;
                }
                else
                {
                    person = 2;
                }
                j++;
            }else
            {
                ;
            }
        }

        if(person == 1)
        {
            printf("\nJelly");
        }else
        {
            printf("\nJack");
        }
    }


    return 0;
}
