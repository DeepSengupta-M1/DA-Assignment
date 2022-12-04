#include <stdio.h>
#include <string.h>

int StringMatching(char *t, char *p, int m, int n)
{
    int i, j;
    for(i=0; i<n-m; i++){
        j=0;
        while(j<m && p[j]==t[i+j])
            j++;
        if(j==m)
            return i;
    }
    return -1;
}
void main()
{
    char t[50], p[15];
    int m, n;
    printf("Enter text: ");
    gets(t);
    n=strlen(t);
    printf("Enter Pattern: ");
    gets(p);
    m=strlen(p);
    int pos=StringMatching(t, p, m, n);
    if(pos==-1)
        printf("Pattern not found");
    else
        printf("Pattern found at position %d", pos+1);
}