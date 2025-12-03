#include <stdio.h>
#include <string.h>

int main() {
    char question[10];
    
    while (1) {
        scanf("%s", question);
        
        if (strcmp(question, "end") == 0) {
            break;
        }
        
        if (strcmp(question, "animal") == 0) {
            printf("Panthera tigris\n");
        } else if (strcmp(question, "tree") == 0) {
            printf("Pinus densiflora\n");
        } else if (strcmp(question, "flower") == 0) {
            printf("Forsythia koreana\n");
        }
    }
    
    return 0;
}
