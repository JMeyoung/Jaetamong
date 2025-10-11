#include <stdio.h>
#include <math.h>

int main() {
    double D, H, W;
    scanf("%lf %lf %lf", &D, &H, &W);
    
    double ratio = sqrt(H * H + W * W);
    double height = D * H / ratio;
    double width = D * W / ratio;
    
    printf("%d %d\n", (int)height, (int)width);
    return 0;
}
