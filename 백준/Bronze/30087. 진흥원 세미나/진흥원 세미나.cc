#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char seminar[7][25] = {
        "Algorithm",
        "DataAnalysis",
        "ArtificialIntelligence",
        "CyberSecurity",
        "Network",
        "Startup",
        "TestStrategy"
    };
    char classroom[7][6] = {
        "204",
        "207",
        "302",
        "B101",
        "303",
        "501",
        "105"
    };

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char selected_seminar[25];
        scanf("%s", selected_seminar);

        for (int j = 0; j < 7; j++) {
            if (strcmp(selected_seminar, seminar[j]) == 0) {
                printf("%s\n", classroom[j]);
                break;
            }
        }
    }

    return 0;
}