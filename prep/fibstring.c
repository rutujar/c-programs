#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    
    //Variables
    int i,j,k=0,test,c=0,t=0,temp=0,flag = 0,h = 0;
    char a[20];
    int count[50],count2[50];

    printf("\nTest cases? ");
    scanf("%d",&test);

    while(h<test){
        printf("\nEnter the string => ");
        scanf("%s",a);
        //clearing the array
        for(i=0;i<26;i++)
        {
        count[i] = 0;
        count2[i] = 0;
        }

        //Counting the variables
        for(i=0; a[i] != '\0';i++)
        {
            k = a[i] - 'a';
            count[k]++;
        }


        // //Printing count array
        // for(i=0;i<26;i++)
        // {
        //     printf("%c => %d \n",i+'a',count[i]);
        // }


        //Moving count to count2
        for(i=0;i<26;i++)
        {
            if(count[i] != 0)
            {
                count2[c] = count[i];
                c++;
                t++;
            }
        }


        // //Printing count2 array
        // for(i=0;i<t;i++)
        // {
        //     printf("%d ",count2[i]);
        // }


        //Sorting the array count2
        for(i=0;i<t;i++)
        {
            for(j=0;j<t-i-1;j++)
            {
                if(count2[j] > count2[j+1])
                {
                    temp = count2[j];
                    count2[j] = count2[j+1];
                    count2[j+1] = temp;
                }
            }
        }

        // //Printing count2 array
        // for(i=0;i<t;i++)
        // {
        //     printf("\n%d ",count2[i]);
        // }

        //Checking if in fib series
        for(i=0;i<t-2;i++)
        {
            if((count2[i]+count2[i+1]) != count2[i+2])
            {
                printf("\nNot\n");
                return 0;
            }else
            {
                flag = 1;
            }
        }

        if(flag == 1)
        {
            printf("\nDynamic\n");
        }

        h++;
    }

    return 0;
}
