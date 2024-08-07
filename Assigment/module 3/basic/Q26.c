// Convert temperature Fahrenheit to Celsius
#include<stdio.h>
#include<conio.h>
void main()
{
    float fahrenheit ,celsius;
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("Temperature in Celsius is %f",celsius);
    getch();
}