#include <stdio.h>

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
    printf("moi ban nhap so vao mang:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int poi;
    printf("moi ban nhap noi ban muon sua: ");
    scanf("%d", &poi);
    poi--;
    int vallue;
    printf("moi ban nhap gia tri ban muon sua: ");
    scanf("%d", &vallue);
    arr[poi]=vallue;
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}