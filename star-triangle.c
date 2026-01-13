#include<stdio.h>
int main()
{
    int i,j,k, n;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);
    for(k=0; k<=n ; k++)
        {
            printf(" ");
        }
        printf("*\n");
    for(i=1 ; i<=n; i++)
    {
        for(k=i; k<=n ; k++)
        {
            printf(" ");
        }
        printf("*");
        for(k=0; k<2*i-1; k++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(j=0; j<=2*n+2 ; j++)
        {
            printf("*");
        }
}
