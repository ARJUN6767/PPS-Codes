// Name:Arjun more PRN:24030331378012

#include <stdio.h>
int main() 
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements are:\n");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}