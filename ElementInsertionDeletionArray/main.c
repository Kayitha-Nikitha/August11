#include<stdio.h>

int insertElement(int arr[], int elements, int keyToBeInserted, int size)
{
    if (elements >= size)
    return elements;
    arr[elements] = keyToBeInserted;
    return (elements + 1);
}

int deleteElement(int array[], int size, int keyToBeDeleted)
{
    int pos = findElement(array, size, keyToBeDeleted);
    if (pos == - 1)
    {
        printf("Element not found");
        return size;
    }
    int i;
    for (i = pos; i < size - 1; i++)
    array[i] = array[i + 1];
    return size - 1;
}
int findElement(int array[], int size, int keyToBeDeleted)
{
    int i;
    for (i = 0; i < size; i++)
    if (array[i] == keyToBeDeleted)
    return i;
    return - 1;
}

int main()
{
    int array[20] = { 31, 27, 3, 54, 67, 31 };
    int size = sizeof(array) / sizeof(array[0]);
    int elements = 6;
    int i, keyToBeInserted = 32, keyToBeDeleted = 67;
    printf("\n Array elements: ");
    for (i = 0; i < elements; i++)
    printf("%d  ", array[i]);
    elements = insertElement(array, elements, keyToBeInserted, size);
    printf("\n After Insertion: ");
    for (i = 0; i < elements; i++)
    printf("%d  ",array[i]);
    size = deleteElement(array, size, keyToBeDeleted);
    printf("\n After Deletion: ");
    for (i = 0; i < elements-1; i++)
    printf("%d  ",array[i]);
    return 0;
}
