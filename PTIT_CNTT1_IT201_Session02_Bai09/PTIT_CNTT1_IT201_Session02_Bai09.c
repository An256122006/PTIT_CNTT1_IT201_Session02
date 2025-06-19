#include <stdio.h>
#include <stdlib.h>
void check(int *arr,int *n) {
    int arr2[100]={0};
    for(int i=0;i<*n;i++) {
        arr2[arr[i]]++;
    }
    for(int i=0;i<*n;i++) {
        for(int j=0;j<*n-i-1;j++) {
            if (arr[j]<arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int max_count = 0;
    int max_value = -1;

    for (int i = 0; i < 100; i++) {
        if (arr2[i] > max_count || (arr2[i] == max_count && i > max_value)) {
            max_count = arr2[i];
            max_value = i;
        }
    }
    printf("max=%d\n",max_value);
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