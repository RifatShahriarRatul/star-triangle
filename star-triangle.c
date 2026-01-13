#include<stdio.h>
int main()
{
    int i,j,k, n;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);
    for(i=0 ; i<n; i++)
    {
        for(k=i; k<n ; k++)
        {
            printf(" ");
        }
        for(j=0; j<=2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
