//
// Created by ritno on 2025/11/21.
//
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    long long a,b,sum;
    while (scanf("%llX%llX",&a,&b)!=EOF) {
        sum=a+b;
        if (sum<0) {
            printf("-");
            printf("%llX\n",labs(sum));
        }else {
            printf("%llX\n",sum);
        }

    }
    return 0;
}