//Using FUNCTIONS to calculate and display electricity bills
/*Program to calculate and display electricity bills using functions
Author:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:11/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main()
{
    char customername;
    int customerid,unitconsumed;    //function prototype
    float chargeperunit,totalbill;   //function prototype
        //function calling(user inputs)
      printf("Enter Customer Id:");
    scanf("%d",&customerid);
    printf("\nEnter Customer Name:");
    scanf("%s",&customername);
    printf("\nEnter Unit Consumed:");
    scanf("%d",&unitconsumed);
     if(unitconsumed<=199)
     {
         chargeperunit=1.20;

     }
      else if(unitconsumed<=399)
      {
          chargeperunit=1.50;
      }
      else if(unitconsumed<=599)
      {
          chargeperunit=1.80;
      }
      else if(unitconsumed>=600)
      {
          chargeperunit=2.00;
      }
      else if(unitconsumed=0)
      {
          chargeperunit=0;
      }
      printf("\nThe charge per unit is %.2f",chargeperunit);
            //function definition
      float multiplication(int unitconsumed,float chargeperunit);
     {
     float totalbill;
      totalbill=unitconsumed*chargeperunit;
     }
       if(totalbill>400)
      {
          totalbill=totalbill+15/100*totalbill;
      }
     else if(totalbill<100)
      {
          printf("\nMimimum bill not reached");
      }
      else if(totalbill>=400)
       {
        printf("\nThe total bill is %.2f",totalbill);
       }
       return 0;
}
