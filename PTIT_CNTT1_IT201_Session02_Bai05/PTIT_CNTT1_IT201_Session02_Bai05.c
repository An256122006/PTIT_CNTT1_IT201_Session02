#include <stdio.h>
#include <stdlib.h>
void xoa(int *arr,int *n) {
    int poi;
    printf("moi ban nhap vi tri:");
    scanf("%d",&poi);
    poi--;
    if (poi<0 && poi>*n-1) {
        printf("Vi tri khong hop le");
        return;
    }
    for (int i=poi;i<*n-1;i++) {
        arr[i]=arr[i+1];
    }
    (*n)--;;
    arr=(int*)realloc(arr,(*n)*sizeof(int));
    for (int i=0;i<*n;i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
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
    xoa(arr,&n);
}