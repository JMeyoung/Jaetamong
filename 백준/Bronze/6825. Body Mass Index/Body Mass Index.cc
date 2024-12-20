#include <stdio.h>

int main() {
    float weight, height, BMI;
    scanf("%f %f", &weight, &height);

    BMI = weight / (height * height);

    if (BMI > 25) {
        printf("Overweight\n");
    } else if (BMI >= 18.5) {
        printf("Normal weight\n");
    } else {
        printf("Underweight\n");
    }

    return 0;
}
