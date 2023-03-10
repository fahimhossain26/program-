
#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
