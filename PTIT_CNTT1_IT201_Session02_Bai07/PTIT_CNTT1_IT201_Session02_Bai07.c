#include <stdio.h>
#include <stdlib.h>
void check(int *arr, int *n) {
    int poi1;
    int poi2;
    int value;
    int checkpoi=0;
    printf("moi ban nhap ket qua kiem tra");
    scanf("%d", &value);
    for (int i = 0; i < (*n)/2; i++) {
        for (int j = i+1; j < (*n); j++) {
            if (arr[i]+arr[j] == value) {
                checkpoi++;
                poi1 = arr[i];
                poi2 = arr[j];
                printf("%d %d",poi1 ,poi2);
                return;
            }
        }
    }
    if (checkpoi == 0) {
        printf("khong co");
    }
}
int main(void) {
    int n;
    printf("moi ban nhap so luong phan tu tu 0<x<=100:\n");
    scanf("%d", &n);
    while (n<0 && n>100) {
        printf("moi ban nhap lai so luong phan tu:\n");
        scanf("%d", &n);
    }
    int *arr=(int*)malloc(n*sizeof(int));
    printf("moi nhap phan tu vao mang:\n");
    for (int i = 0; i <n; i++) {
        scanf("%d",&arr[i]);
    }
    check(arr,&n);
    return 0;
}