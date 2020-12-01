#include <stdio.h>

int main() {
    int T, i;
    long long int N;
    scanf("%d", &T);
    while(T--) {
        scanf("%lld", &N);
        printf("%d %d", 1, 1);
        for(i = 0; i < N/2; i++)
            printf("%d", 0);
        printf("\n");
    }
    return 0;
}
