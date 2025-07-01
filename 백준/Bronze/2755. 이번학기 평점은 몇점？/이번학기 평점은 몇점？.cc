#include <stdio.h>
#include <string.h>
#include <math.h>

double get_score(char *grade) {
    if (strcmp(grade, "A+") == 0) return 4.3;
    else if (strcmp(grade, "A0") == 0) return 4.0;
    else if (strcmp(grade, "A-") == 0) return 3.7;
    else if (strcmp(grade, "B+") == 0) return 3.3;
    else if (strcmp(grade, "B0") == 0) return 3.0;
    else if (strcmp(grade, "B-") == 0) return 2.7;
    else if (strcmp(grade, "C+") == 0) return 2.3;
    else if (strcmp(grade, "C0") == 0) return 2.0;
    else if (strcmp(grade, "C-") == 0) return 1.7;
    else if (strcmp(grade, "D+") == 0) return 1.3;
    else if (strcmp(grade, "D0") == 0) return 1.0;
    else if (strcmp(grade, "D-") == 0) return 0.7;
    else if (strcmp(grade, "F") == 0) return 0.0;
    else return 0.0;
}

int main() {
    int N;
    char Subject_Name[101];
    int Subject_Score;
    char Subject_Grade[3];

    double total_score = 0.0, total_credit = 0.0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s %d %s", Subject_Name, &Subject_Score, Subject_Grade);
        double score = get_score(Subject_Grade);
        total_score += Subject_Score * score;
        total_credit += Subject_Score;
    }

    double result = total_score / total_credit;
    result = round(result * 100) / 100.0;
    printf("%.2lf\n", result);

    return 0;
}
