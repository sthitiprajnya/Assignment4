#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *str = str1;
    char *rev = revstr;
    int i=0; 	
    printf("input a string : ");
    scanf("%s",str1);
    while(*str)
    {
     str++;
     i++;
    }
    
    while(i>=0)
    {
     str--;
     *rev = *str;
     rev++;
     i--;
    }
    
    printf(" reverse of the string is : %s\n\n",revstr);
    return 0;
}
