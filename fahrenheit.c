#include <stdio.h>

int main() {
    // input: fahrenheit
    // declare variables
    float fahrenheit;
    float celsius;

    // input: fahrenheit
    printf("Write the fahrenheit value: ");
    scanf("%f", &fahrenheit);

    printf("Fahrenheit = %.2f\n", fahrenheit);

    // process
    celsius = (fahrenheit - 32) * 5 / 9;

    // output
    printf("Celsius = %.2f\n", celsius);

    return 0;
}