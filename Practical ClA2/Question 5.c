#include <stdio.h>

int main()
{
    int n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        count++;
    }
    printf("No of even number in array is %d\n",count);
    printf("No of odd number in array is %d\n",n-count);
    return 0;
}
