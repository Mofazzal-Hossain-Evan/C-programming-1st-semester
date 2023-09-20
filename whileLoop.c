/* 
Series print using While loop:
1) 1+2+3+4+5+......+n
2) 2+5+8+11+....+n 
*/


int main(){
    int n, sum = 0, i = 1;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        printf("%d + ", i, sum);

        i= i +1;
    }
}



#include <stdio.h>

int main(){
    int n, sum = 0, i = 2;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        printf("%d + ", i, sum);

        i= i+3;
    }
}

/* Print the sum of the series using while loop:
1) 2+4+6+8+10+.....+n
2) 2+4+8+16+32+....+n
*/

#include <stdio.h>

int main(){
    int n, sum = 0, i = 2;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        printf("%d + ", i, sum);

        i= i *2;
    }
}



#include <stdio.h>

int main(){
    int n, sum = 0, i = 2;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum * i;
        printf("%d + ", i, sum);

        i= i *2;
    }
}

