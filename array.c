#include<stdio.h>

int main() {
    int l;
    scanf("%d", &l);
    int a[l];
    int i, sum = 0;

    for (i = 0; i < l; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
