#include <stdio.h>

void printReverseArray(int a[], int size) 
{
    printf("Array elements in reverse order: ");
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
}

int sumOfArray(int a[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += a[i];
    }
    return sum;
}

int main() 
{
    int a[] = {12, 23, 34, 45, 56};
    int size = sizeof(a) / sizeof(a[0]);

    printReverseArray(a, size);

    int sum = sumOfArray(a, size);
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
