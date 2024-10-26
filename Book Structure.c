//Program defining a book structure
/*Program introducing structures
Author:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:26/10/2024
*/
//preprocessor directive
#include <stdio.h>
#include <string.h> //strcpy()

struct book
{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
}book;
int main()
{
    //intitialization
strcpy(book.title,"Introduction to C Progamming");
strcpy(book.author,"John Smith");
book.publication_year=2022;
strcpy(book.ISBN,"9780131103627");
book.price=49.99;
    //printing values
printf("Title:%s\n",book.title);
printf("Author:%s\n",book.author);
printf("Publication Year:%d\n",book.publication_year);
printf("ISBN:%s\n",book.ISBN);
printf("Price:%f\n",book.price);
return 0;
}
