#include <stdio.h>

float conversion( int fahr);

int main()
{
        int fahr;
        float celsius;
        printf("The conversion of 80 "); 
        printf("degrees Farenheit to C is \n");
        fahr = 80;
        celsius = conversion(fahr);
        printf("%4f\n",celsius);
}
float conversion(int fahr)
{
float celsius;
        celsius = (5.0/9.0) * (fahr - 32.0);
        return celsius;
}

