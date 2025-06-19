#include <stdio.h>
#include <stdlib.h>
void maxnumber(int *arr,int *n) {
    int max=0;
    for(int i=0;i<*n;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("so lon nhat: %d",max);
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
    maxnumber(arr,&n);
    return 0;
}