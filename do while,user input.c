//do while loop
/*do while loop to accept users input
Author:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:11/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main()
{
int i;//start
printf("Enter i:");
scanf("%d",&i);
do
{
    printf("\n%d",i);
    i++;//step
}
while(i<=50);//stop
return 0;
}
