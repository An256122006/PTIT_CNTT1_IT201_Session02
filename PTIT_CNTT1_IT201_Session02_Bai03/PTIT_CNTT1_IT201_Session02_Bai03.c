#include <stdio.h>
void daonguoc(int *arr,int *n) {
    for(int i=0;i<*n/2;i++) {
        int temp=arr[i];
        arr[i]=arr[*n-1-i];
        arr[*n-1-i]=temp;
    }
    for(int i=0;i<*n;i++) {
        printf("%d ",arr[i]);
    }
}
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n<0 && n>100) {
        printf("Number must be greater than or equal to 100\n");
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("moi ban nhap so vao mang");
        scanf("%d", &arr[i]);
    }
    daonguoc(arr,&n);
    return 0;
}