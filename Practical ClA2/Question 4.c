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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Second Largest number in an array is :-  ");
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]!=a[n-1])
        {
        printf("%d",a[i]);
        break;
        }
    }
    return 0;
}
