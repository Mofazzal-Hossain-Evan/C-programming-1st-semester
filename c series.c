#include<stdio.h>
//11111111
// 1+2+3+4+5+....+n
int main() {
    // int i,n, sum= 0;
    // scanf("%d", &n);
    // for( i = 1; i<=n; i++) {
    //     sum = sum+i;
    // }
    // printf("%d", sum);


//2222
//1+3+5+7+9...
//    int i,n,sum=0;
//    scanf("%d",&n);
//    for(i=1; i<=n; i=i+2) {
//     sum=sum+i;
//    }
//    printf("\n%d", sum);


//33333
//2+4+6+8+10..
//    int i,n,sum=0;
//    scanf("%d", &n);
//    for(i=2; i<=n; i=i+2) {
//     sum = sum+i;
//    }

//    printf("\n%d", sum);

//4444444
//1*2*3*4
// int i,n, sum = 1;
// scanf("%d", &n);
// for(i = 2; i<=n; i=i+1) {
//   sum=sum*i;
// }
// printf("\n%d", sum);


//55555
//2*4*6*8
int i, n, sum =1;
scanf("%d", &n);
for(i=2; i<=n; i=i+2) {
    sum=sum*i;
}

printf("\n%d", sum);
}