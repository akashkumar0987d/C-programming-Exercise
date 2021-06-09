#include <stdio.h>

int main()
{
    float centimeter,meter,killometer;
    printf("Enter the length in centimeter:  ");
    scanf("%f",&centimeter);
    meter=centimeter/100;
    killometer=centimeter/100000;
    printf("Length is %f meter\n",meter);
    printf("Length is %f killometer\n",killometer);

    return 0;
}
