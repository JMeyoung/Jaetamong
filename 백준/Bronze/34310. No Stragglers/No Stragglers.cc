#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int stu = 0, fac = 0, vis = 0;
    char type[10], dir[10];
    int num;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %d", type, dir, &num);

        int *target = NULL;

        if (strcmp(type, "STU") == 0) target = &stu;
        else if (strcmp(type, "FAC") == 0) target = &fac;
        else if (strcmp(type, "VIS") == 0) target = &vis;

        if (strcmp(dir, "IN") == 0) {
            *target += num;
        } else { 
            *target -= num;
        }
    }

    int total = stu + fac + vis;

    if (total == 0) {
        printf("NO STRAGGLERS\n");
    } else {
        printf("%d\n", total);
    }

    return 0;
}
