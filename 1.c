#include <stdio.h>

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    if ((n & 1) == 0)
    { // 左辺を括弧でくくることで正しく条件が判定される
        printf("%d は偶数です\n", n);
    }
    else
    {
        printf("%d は奇数です\n", n);
    }
    return 0;
}