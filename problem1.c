#include <stdio.h>
#include <stdlib.h>
void createSecondArray(int size)
{
    char arr[10];

    for (int i = 0; i < size; ++i)
    {
        arr[i] = i;
    }

    printf("Second array\n");

    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


}

int main()
{   
    int i;
    printf("%d\n", i);
    char main_array[10] = {0};
    createSecondArray(20);
    printf("Main array\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", main_array[i]);
    }
    printf("\n");
    return 0;
}
