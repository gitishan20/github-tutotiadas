#include<stdio.h>
int main()
{
    float celsius_884,fahrenheit_884;
    printf("\nEntr temperature in Fahrenheit: %f\n", celsius_884);
    scanf("%f",&fahrenheit_884);
    celsius_884=(fahrenheit_884 - 32)*5/9;
    printf("\nCelsius = %.3f",celsius_884);
return 0;
}
