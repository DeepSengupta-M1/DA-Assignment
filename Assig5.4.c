#include <stdio.h>

int main()
{
    int ar1[10], ar2[20], ar[30], m, n, i, j, k;
    printf("Enter size of the First array: ");
    scanf("%d", &m);
    printf("Enter size of the Second array: ");
    scanf("%d", &n);
    printf("Enter size of the First array: \n");
    for(int i=0; i<m; i++)
        scanf("%d", &ar1[i]);
    printf("Enter size of the Second array: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &ar2[i]);
    int p=m+n;
    i=0;
    j=0;
    k=0;
    while(k<p)
    {
        while(i<m)
        {
            ar[k]=ar1[i];
            i++;
            k++;
        }
        while(i<n)
        {
            ar[k]=ar1[j];
            j++;
            k++;
        }
    }
    printf("First array looks like: \n");
    for(i=0; i<m; i++)
        printf("%d\t", ar[i]);
    printf("\nSecond array looks like: \n");
    for(i=0; i<n; i++)
        printf("%d\t", ar[i]);
    printf("\nMerged array looks like: \n");
    for(i=0; i<p; i++)
        printf("%d\t", ar[i]);

    return 0;
}