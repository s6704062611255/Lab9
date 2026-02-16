#include<stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int *a, int *b, int size);
void PrintArr(int *a ,int size);
int main(){
    int a = 1, b = 2, c = 3;
    printf("Before swap function : a = % d, b = % d, c = % d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function : a = % d, b = % d, c = % d\n", a, b, c);
    printf("\n");
    // calling swapArray()
    int A[] = {1, 2} , B[] = {3, 4};
    int size = sizeof(A)/sizeof(A[0]);
    printf("Before swapArray function : \n");
    printf("A[%d] = ", size);
    PrintArr(A, size);
    printf("\n");
    printf("B[%d] = ", size);
    PrintArr(B, size);
    swapArray(A,B,size);
    printf("\n");
    printf("After swapArray function : \n");
    printf("A[%d] = ", size);
    PrintArr(A, size);
    printf("\n");
    printf("B[%d] = ", size);
    PrintArr(B, size);
}
void swapValue(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapArray(int *a, int *b, int size){
    for(int i=0 ;i<size;i++){
        int temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;
    }
}
void PrintArr(int *a, int size){
    for(int i=0 ;i<size;i++){
        printf("%d ",*(a+i));
    }
}
