#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<5;i++){
        for(int k=0;k<N;k++){
            if(i%2==0){
                for(int j=0;j<5*N;j++) printf("@");
            }else{
                for(int j=0;j<N;j++) printf("@");
            }
            printf("\n");
        }
    }
    return 0;
}