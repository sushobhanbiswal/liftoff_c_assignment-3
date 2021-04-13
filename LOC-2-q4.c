#include <stdio.h>
int main()
{
    int g,s,n;
    int ar[10];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the numbers in array:\n");
    for(int i;i<n;++i)
    {
        scanf("%d",&ar[i]);

    }
    s = ar[0];
    g = ar[0];

    for (int j = 1; j < n; j++)
    {
        if (ar[j] < s)
        {
            s = ar[j];
        }
        
        if (ar[j] > g)
        {
            g = ar[j];
        }
    }

    printf("\nLargest element is : %d", g);
    printf("\nSmallest element is : %d", s);
}