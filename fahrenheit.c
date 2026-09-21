#include <stdio.h>

int main() {

    // INPUT
    float fahrenheit;
    float celsius;

    printf("Write the fahrenheit value:");
    scanf("%f", &fahrenheit);

    // PROCESS
    celsius = (fahrenheit - 32) * 5 / 9;

    // OUTPUT
    printf("Fahrenheit = %.2f\n", fahrenheit);
    printf("Celsius = %.2f\n", celsius);

    return 0;
}