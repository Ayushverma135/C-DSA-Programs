#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    printf("enter number of element:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("Enter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d\n",i);
    else
        printf("Element not found\n");
    printf("Submitted by ayush verma\nCS-AI-2A\n2101641520040");
    return 0;
}
