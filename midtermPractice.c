#include<stdio.h>
// int main(){
// //odd number in range

// int s,e;
// scanf("%d %d",&s, &e);
// for(int i=s; i<e; i++){
//     if (i%2!=0){
//         printf("%d is the result",i);
//     }
// } 


//  return 0;
// }


// int main(){
// //even number in range

// int s,e;
// scanf("%d %d",&s, &e);
// for(int i=s; i<e; i++){
//     if (i%2==0){
//         printf("%d is the result",i);
//     }
// } 


//  return 0;
// }

int main(){
//max/mini number in range

int a,b,c;
printf("Enter three numbers: ");
scanf("%d %d %d",&a, &b,&c);

//finding the max number

int max = a;
if(b > max) {
    max = b;
}
if (c > max) {
max = c;
}

//finding the minimum 
int min = a;
if (b < min) {
    min = b;
}
if (c < min) {
    min = c;
}

    printf("Max number is: %d\n", max);
    printf("Min number is: %d\n", min);

 return 0;
}
