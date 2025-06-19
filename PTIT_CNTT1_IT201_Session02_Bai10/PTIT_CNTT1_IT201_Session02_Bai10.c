#include <stdio.h>
#include <stdlib.h>
void check(int *arr,int *length) {
    int vallue[100]={0};
    for(int i=0;i<*length;i++){
        if(vallue[arr[i]]==1) {
            continue;
        }
        int temp=0;
        for(int j=0;j<*length;j++){
            if(arr[i]==arr[j]){
                temp++;
                vallue[arr[i]]=1;
            }
        }
        printf("%d: %d\n",arr[i], temp);
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