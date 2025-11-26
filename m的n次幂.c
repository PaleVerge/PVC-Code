//
// Created by rint on 2025/11/26.
//
#include <stdio.h>
int powmn(int m,int n) {
    int i=0,res=1;
    while(i++<n) {
        res*=m;
    }
    return res;
}
int main(void) {
    int m,n;
    while (scanf("%d%d",&m,&n)!=EOF){
        printf("%d\n",powmn(m,n));
    }
    return 0;
}