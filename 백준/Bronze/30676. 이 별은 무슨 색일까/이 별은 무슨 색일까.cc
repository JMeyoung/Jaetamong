#include <stdio.h>

int main() {
    int color;
    scanf("%d", &color);

    if (color >= 620 && color <= 780)
        printf("Red\n");
    else if (color >= 590 && color < 620)
        printf("Orange\n");
    else if (color >= 570 && color < 590)
        printf("Yellow\n");
    else if (color >= 495 && color < 570)
        printf("Green\n");
    else if (color >= 450 && color < 495)
        printf("Blue\n");
    else if (color >= 425 && color < 450)
        printf("Indigo\n");
    else if (color >= 380 && color < 425)
        printf("Violet\n");
    
    return 0;
}