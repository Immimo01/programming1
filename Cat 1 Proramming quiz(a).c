//Program to determine whether one is eligible for a loan or not
/*Program to determine one's loan eligibility or not
Author:Mbue Immaculate Wairimu
REG No.:CT101/G/23716/24
Date:1/10/2024
*/
//preprocessor directive
#include <stdio.h> //scanf(),printf()
int main()
{
    int age;
    float annual_income;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your annual_income:");
    scanf("%f",&annual_income);
    if(age>=21)
    {
       if(annual_income>=21000)
       {
       printf("Congratulations you qualify for a loan");
       }
        else
       {
       printf("Unfortunately,we are unable to offer you a loan at this time");
       }
    }
    else
       {
        printf("Unfortunately,we are unable to offer you a loan at this time");
       }
    }

