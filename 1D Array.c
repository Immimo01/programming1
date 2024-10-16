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
    int a;
    float marks[7]={50.1,60.2,70.5,88.9,90.93,85.66,66.80};
  for(a=0;a<7;a++)
    {
        printf("marks[%d]=%.2f\n",a,marks[a]);
    }
    return 0;
}
