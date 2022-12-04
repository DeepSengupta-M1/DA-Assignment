#include <stdio.h>

int main()
{
    int ar[20], n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Array elements are: \n");
    for(int i=0; i<n; i++)
    {
        printf("Elements at index [%d]: ", i);
        scanf("%d", &ar[i]);
    }
    printf("Given array looks like: \n");
    for(int i=0; i<n; i++)
        printf("%d\t", ar[i]);
    printf("\n");
    printf("Given array in reversed order looks like: \n");
    for(int i=n-1; i>=0; i--)
        printf("%d\t", ar[i]);

    return 0;
}