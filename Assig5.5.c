#include <stdio.h>

int main()
{
    int ar[10], n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter array elements [%d]", i+1);
        scanf("%d", ar+i);
    }
    printf("Even numbers are: ");
    for(int i=0; i<n; i++)
        if(ar[i]%2==0)
            printf("%d", ar[i]);

    printf("\nOdd numbers are: ");
    for(int i=0; i<n; i++)
        if(ar[i]%2!=0)
            printf("%d", ar[i]);

    return 0;
}