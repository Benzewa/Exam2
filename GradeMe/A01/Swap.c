void Swap(int *A, int *B)
{
    int Temp = 0;

    Temp = *A;
    *A = *B;
    *B = Temp;
}
#include <stdio.h>
int main()
{
    int A = 5;
    int B = 8;

    int *PtrA = &A;
    int *PtrB = &B;
    Swap(&A, &B);
    Swap(&A, &B);
    printf("\n");
    printf("%d", A);
    printf("%d", B);
}