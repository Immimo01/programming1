//Program to calculate the fine for overdue library books
/*Program to calculate the fine for overdue library books
Author:Mbue Immaculate Wairimu
REG No.:CT101/G/23716/24
Date:1/10/2024
*/
//preprocessor directive
#include <stdio.h> //scanf(),printf()
#include <math.h>
int main()
{
    int book_id, due_date, return_date, days_overdue;
    float fine_rate, fine_amount;
    printf("Enter your Book ID:");
    scanf("%d",&book_id);
    printf("\nEnter your Due Date:");
    scanf("%d",&due_date);
    printf("\nEnter your Return Date:");
    scanf("%d",&return_date);
    days_overdue=(return_date-due_date);
    printf("\nDays Overdue=%d",days_overdue);
    if(days_overdue<=7)
    {
        fine_rate=20;
        printf("\nfine rate is ksh.=%.2f",fine_rate);
    }
   else if(days_overdue<=14)
   {
       fine_rate=50;
       printf("\nfine rate is ksh.=%.2f",fine_rate);
   }
   else if(days_overdue>=15)
   {
       fine_rate=100;
       printf("\nfine rate is ksh.=%.2f",fine_rate);
   }
   else if(days_overdue=0)
   {
       printf("\nNo fine charged");
   }
   scanf("fine_amount=%.2f",fine_amount);
   fine_amount=fine_rate*days_overdue;
   printf("\nThe Fine Amount is ksh.=%.2f",fine_amount);
}









