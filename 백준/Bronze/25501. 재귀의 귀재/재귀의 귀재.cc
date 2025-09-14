#include <stdio.h>
#include <string.h>

int cnt;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        char s[1001];
        scanf("%s", s);
        cnt = 0;
        int result = isPalindrome(s);
        printf("%d %d\n", result, cnt);
    }
    return 0;
}
