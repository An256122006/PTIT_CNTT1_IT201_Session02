#include <stdio.h>
void check(int *arr,int *n,int *number) {
int count=0;
   for(int i=0;i<*n;i++) {
    if(*number==arr[i]) {
     count++;
    }
  }
   printf("so lan xuat hien cua %d:%d\n", *number,count);
}
int main() {
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
    int checknumber;
    printf("moi ban nhap so can trung: ");
    scanf("%d",&checknumber);
    check(arr,&n,&checknumber);
    return 0;
}