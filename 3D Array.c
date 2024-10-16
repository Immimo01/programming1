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
    int a,b,c;
    float marks[3][2][3]={{{50.1,60.2,70.5},{70.3,86.5,50.2}},{{60.5,90.2,50.8},{40.7,48.4,60.3}},{{70.3,78.6,90.3},{40.8,57.9,66.5}}};
  for(a=0;a<3;a++)

      {
          for(b=0;b<2;b++)

    for(c=0;c<3;c++)
    {
        printf("The marks[%d][%d][%d]=%.2f\n",a,b,c,marks[a][b][c]);
    }

      }
  return 0;
}
