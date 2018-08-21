#include<stdio.h>

int main(int argc, char const *argv[])
{
    //Variables
    int i,j;
    int a,b,c;
    int count = 0;

    printf("\nEnter 3 numbers => ");
    scanf("%d%d%d",&a,&b,&c);

    // if(a-b)
    // {
    //     if(a-c)
    //     {
    //         printf("Largest is %d",&c);
    //     }
    //     else
    //     {
    //         printf(" is")
    //     }
    // }

    while(a && b && c)
    {
        a--;
        b--;
        c--;
        count++;
    }

    printf("\nSmallest is %d\n",count);



    return 0;
}
