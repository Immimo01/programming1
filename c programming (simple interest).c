//program to calculate simple interest
/*program to calculate simple interest
Author:Mbue Immaculate Wairimu
Date:29\10\2024
Reg No:CT101/G/23716/24*/
//preprocessor directive
#include <stdio.h> //scanf(),printf()
int main(){
float  principle , time , rate ,interest;
    printf("Enter the principle amount:");
    scanf("%f",&principle);
    printf("Enter the time:");
    scanf("%f",&time);
    printf("Enter the rate:");
    scanf("%f",&rate);
    interest=(principle*rate*time)/100;
    printf("\nSimple interest=%f",interest);
    return 0;
}









