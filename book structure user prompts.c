//Program defining a book structure using user prompts
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
int main(){
    //Initialization
    printf("Enter the book title:");
    scanf("%s",&book.title);
    printf("Enter the author:");
    scanf("%s",&book.author);
    printf("Enter the Publication Year:");
    scanf("%d",&book.publication_year);
    printf("Enter the ISBN:");
    scanf("%s",&book.ISBN);
    printf("Enter the book PRICE:");
    scanf("%f",&book.price);
    return 0;
}
