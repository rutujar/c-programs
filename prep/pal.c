#include<stdio.h>
#include<stdlib.h>

int pal(int a)
{
    int c = 0,d = 0,x,r =0;
    x =a;

    while(a > 0)
    {
        d = a % 10;
        a = a/10;
        r = (r * 10) + d;

    }

    if( r == x)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    //Varibales
    int i,j,k;
    int T;
    
    //Scanning in Test cases
    scanf("%d",&T);
    
    int a[T];

    //Taking inputs
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
    }

    j =0;
    while(T)
    {
        int num = a[j]+1;
        for(i=0;;i++)
        {
            if(pal(num))
            {
                printf("\n%d",num);
                break;
            }else
            {
                num = num + 1;
            }
        }

        j++;
        T--;
    }

    //printf("%d",pal(123));


 
    return 0;
}
