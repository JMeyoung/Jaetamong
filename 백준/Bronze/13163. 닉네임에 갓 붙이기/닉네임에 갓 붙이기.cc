#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++) {
        char line[105];
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        char *p = strchr(line, ' ');
        printf("god");
        if (p) {
            for (; *p; p++) if (*p != ' ') putchar(*p);
        }
        printf("\n");
    }
    return 0;
}
