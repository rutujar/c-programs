#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char str[20];
  int i;
  printf("Enter the String (Enter First Name) : ");
  scanf("%s",str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  printf("\nThe String in Uppercase = %s",str);
  getch();
}
