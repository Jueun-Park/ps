// 붕어빵 판매하기
#include <stdio.h>
#include <stdlib.h>
#define max(a, b) (a > b) ? a : b

int main() {
    int n;
    scanf("%d", &n);
    int* price = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &price[i]);
    }

    int* maximum_price = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i < n + 1; i++) {
        maximum_price[i] = price[i];
        for (int j = 1; j < i; j++) {
            maximum_price[i] = max(maximum_price[i], maximum_price[i - j] + maximum_price[j]);
        }
    }
    
    printf("%d", maximum_price[n]);
    free(price);
    free(maximum_price);
    return 0;
}
