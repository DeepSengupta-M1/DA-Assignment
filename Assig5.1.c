#include <stdio.h>

void SelectionSort(int *a, int size)
{
    int max, temp;
    for(int i=0; i<size; i++)
    {
        max=i;
        for(int j=i+1; j<size; j++)
            if(a[j] > a[max])
                max=j;
        if(max!=i)
        {
            temp=a[i];
            a[i]=a[max];
            a[max]=temp;
        }
    }
    printf("Array after Selection sort: ");
    for(int i=0; i<size; i++)
        printf("%d\t", *(a+i));
}
void BubbleSort(int *ar, int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(ar[j] < ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    printf("Array after Bubble sort: ");
    for(int i=0; i<n; i++)
        printf("%d", ar[i]);
}
int main(){
    int ar[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter array elements [%d]: ", i+1);
        scanf("%d", &ar[i]);
    }
    printf("Array before sorting: ");
    for(int i=0; i<n; i++)
        printf("%d", ar[i]);
    BubbleSort(ar, n);
    SelectionSort(ar, n);

    return 0;
}