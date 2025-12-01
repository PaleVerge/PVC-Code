//
// Created by rint on 2025/12/1.
//
#include <stdio.h>
#define N 5
void bubbleSort(int nums[N]) {
    int i,j,tmp;
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}
int main(void) {
    int a[5];
    sort
    for (int i = 0; i < 5; i++) {
        scanf("%d",&a[i]);
    }
    bubbleSort(a);
    for (int i = 0; i < 5; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}