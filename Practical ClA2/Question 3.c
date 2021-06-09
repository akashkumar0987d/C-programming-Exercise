#include <stdio.h>
int main()
{
    float Centigrade, Farenheit;
    printf("Enter temperature in Centigrade:  ");
    scanf("%f",&Centigrade);
    Farenheit= 1.8*Centigrade+32;
    printf("temperature in Farenheit is %f", Farenheit);
    return 0;
}
