#include <stdio.h>
#include <stdlib.h>
void check(int *arr,int *n) {
    int *arr2 = (int *)malloc(sizeof(int)*(*n));
    int temp=0;
    for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
            if(arr[i]==arr[j]){
                arr2[temp]=arr[i];
                temp++;
            }
        }
    }
    if (temp>0) {
        int max=0;
        for(int i=0;i<temp;i++) {
            if(arr2[i]>max) {
                max=arr2[i];
            }
        }
        printf("%d\n",max);
    }else {
        printf("mang khong co phan tu trung lap");
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