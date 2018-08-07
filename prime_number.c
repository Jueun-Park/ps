#include <stdio.h>
#include <stdlib.h>
// 500000번째 소수를 2초 안에 구하는 것이 만점 기준
// 아래 코드로는 그렇게는 안 됨...

int main () {
    int k;
    scanf("%d", &k);
    unsigned long long int* prime_number;
    prime_number = (unsigned long long int*)malloc(sizeof(unsigned long long int) * (k + 1));
    prime_number[1] = 2;

    for (int i = 2; i < k + 1; i++) {
        unsigned long long int n = prime_number[i - 1] + 1;
        for (int j = 1; j < i; j++) {
            unsigned long long int check = prime_number[j];
            if (n % check == 0) {
                n++;
                j = 0;
            }
        }
        prime_number[i] = n;
    }
    printf("%d", prime_number[k]);
    free(prime_number);
    return 0;
}