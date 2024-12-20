#include <stdio.h>
#include <string.h>

int main() {
    const char *abbreviation[] = {
        "CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", 
        "TA", "CCC", "CUZ", "TY", "YW", "TTYL"
    };
    const char *translation[] = {
        "see you", "I’m happy", "I’m unhappy", "wink", 
        "stick out my tongue", "sleepy", "totally awesome", 
        "Canadian Computing Competition", "because", 
        "thank-you", "you’re welcome", "talk to you later"
    };

    char input[20];

    while (1) {
        scanf("%s", input);

        int found = 0; 
        for (int i = 0; i < 12; i++) {
            if (strcmp(input, abbreviation[i]) == 0) {
                printf("%s\n", translation[i]);
                found = 1;
                if (strcmp(input, "TTYL") == 0) {
                    return 0;
                }
                break;
            }
        }

        if (!found) {
            printf("%s\n", input);
        }
    }

    return 0;
}