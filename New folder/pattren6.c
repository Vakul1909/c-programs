#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("*");
        }for(int j=1;j<=2*i;j++){
            printf(" ");
        }for(int j=1;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }for(int j=1;j<=2*(n-i);j++){
            printf(" ");
        }for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
return 0;
}