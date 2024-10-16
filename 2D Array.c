//Arrays in c
/*1D Array in c
Name:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:12/10/2024
*/
//pereprocessor directive
#include <stdio.h>
int main()
{
    int a,b;
    float numbers[2][2]={{50.1,60.2},{85.66,66.80}};
  for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            printf("numbers[%d][%d]=%.2f%\n",a,b,numbers[a][b]);
        }
        return 0;
    }

  }

