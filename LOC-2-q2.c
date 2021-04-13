#include <stdio.h> 
int main()
{
    int even,i,n;
    even=0;
    int ar[50];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&ar[i]);
    }
    
    for (int j = 0; j < n; j++) 
    { 
        
        if (j%2 == 0 && ar[j]%2==0) 
            even = even+ar[j];

    }
    printf("total sum is:%d",even);

}