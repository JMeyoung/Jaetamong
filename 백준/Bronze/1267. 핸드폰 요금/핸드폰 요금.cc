#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int times[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &times[i]);
    }

    int y_cost = 0, m_cost = 0;

    for (int i = 0; i < N; i++) {
        y_cost += (times[i] / 30 + 1) * 10;
        m_cost += (times[i] / 60 + 1) * 15;
    }

    if (y_cost < m_cost)
        printf("Y %d\n", y_cost);
    else if (m_cost < y_cost)
        printf("M %d\n", m_cost);
    else
        printf("Y M %d\n", y_cost);

    return 0;
}