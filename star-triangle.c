#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);
    for(i=0 ; i<n; i++)
    {
        for (j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
