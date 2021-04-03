#include <stdio.h>
#include <string.h>
struct Book
{
    char book[20];
    char author[10];
} ;
    
int main()
{
   struct Book a;
   printf("enter the name of favourite book:");
   gets(a.book);
     printf("\nenter the name of author :");
   gets(a.author);
   
   printf("Book: ");
   puts(a.book);
    
   printf("Author: ");
   puts(a.author);
	
		return 0;	
}