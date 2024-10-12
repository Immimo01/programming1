//Program to calculate simple interest
/*Author:Mbue Immaculate Wairimu
Reg No.:CT101/G/23716/24
Date:26/9/2024*/
//preprocessor directive
#include <stdio.h> //scanf(),printf()
#include <math.h>
int main(){
    /*p=principle amount
    r=rate of interest
    t=time the money is invested/borrowed(years)
    n=number of times the interest is compounded per year
    A=final amount including interest*/
    int n;
    float A , p , r , t ,interest;
     printf("Enter p:");
    scanf("%f",&p);
    printf("Enter r:");
    scanf("%f",&r);
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter t:");
    scanf("%f",&t);
    A= p*pow((1+(r/(100*n))),n*t);
    printf("\nA=%.2f",A);
    interest=A-p;
    printf("\nCompound interest=%.2f",interest);
    return 0;
}




