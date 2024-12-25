#include <stdio.h>

int main() {
    int people_in_train = 0, max_people = 0;
    int out, in;

    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &out, &in);
        people_in_train = people_in_train - out + in;
        if (people_in_train > max_people) {
            max_people = people_in_train;
        }
    }

    printf("%d\n", max_people);

    return 0;
}
