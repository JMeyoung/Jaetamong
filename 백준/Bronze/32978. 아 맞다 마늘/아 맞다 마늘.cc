#include <stdio.h>
#include <string.h>

int main() {
    int N; scanf("%d",&N);
    char a[1000][21], b[21];
    int m[1000]={0};
    for(int i=0;i<N;i++) scanf("%20s",a[i]);
    for(int i=0;i<N-1;i++){
        scanf("%20s",b);
        for(int j=0;j<N;j++) if(!m[j] && strcmp(a[j],b)==0){ m[j]=1; break; }
    }
    for(int i=0;i<N;i++) if(!m[i]){ puts(a[i]); break; }
    return 0;
}