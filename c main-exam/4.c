#include <stdio.h>

void cubeElements(int *a, int size) 
{
    printf("Cubes of array elements: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", (*(a + i)) * (*(a + i)) * (*(a + i)));
    }
    printf("\n");
}

int main() 
{
    int a[] = {6, 3, 8, 1, 2};
    int size = sizeof(a) / sizeof(a[0]);

    cubeElements(a, size);

    return 0;
}
