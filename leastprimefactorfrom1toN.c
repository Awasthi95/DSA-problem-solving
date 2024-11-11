#include<stdio.h>
void main(){
    int N,i;
    printf("enter the value of N");
    scanf("%d",&N);
    {
        if(N==0)
        printf("least prime factor is 0");
        else if(N%2==0)
        printf("least prime factor is 2");
        else {
           for (i = 3; i <= N*N; i += 2) {
            if (N % i == 0) {
            printf("Least prime factor of %d is %d\n", N, i);}

    }
}}}