#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int* memo;
    memo = (int*)malloc(sizeof(int*) * (n+1));
    memo[0] = 0;
    memo[1] = 1;
    if (n != 0 && n != 1) {
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i-1] + memo[i-2];
        }
    }
    printf("%d\n", memo[n]);
    free(memo);
	return 0;

}
