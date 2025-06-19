#include <stdio.h>
#include <stdlib.h>
void check(int *arr,int *n) {
    int max=0;
    int *arr2=(int *)malloc((*n)*sizeof(int));
    int cout=0;
    for(int i=*n-1;i>=0;i--) {
        if (arr[i]>max) {
            max=arr[i];
            arr2[cout]=arr[i];
            cout++;
        }
    }
    for (int i=cout-1; i >=0; i--) {
        printf("%d ",arr2[i]);
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