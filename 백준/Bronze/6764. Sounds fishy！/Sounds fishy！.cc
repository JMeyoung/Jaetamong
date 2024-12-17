#include <stdio.h>

int main() {
    int depth1, depth2, depth3, depth4;
    scanf("%d %d %d %d", &depth1, &depth2, &depth3, &depth4);

    if (depth1 < depth2 && depth2 < depth3 && depth3 < depth4) {
        printf("Fish Rising\n");
    } else if (depth1 > depth2 && depth2 > depth3 && depth3 > depth4) {
        printf("Fish Diving\n");
    } else if (depth1 == depth2 && depth2 == depth3 && depth3 == depth4) {
        printf("Fish At Constant Depth\n");
    } else {
        printf("No Fish\n");
    }

    return 0;
}
