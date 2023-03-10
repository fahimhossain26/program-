//**Take an integer N as input and write a for loop that prints all values from 1 to N that are divided by 2 and 7.**//

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
