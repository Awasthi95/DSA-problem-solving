#include<stdio.h>
void main(){
int n,i,j,temp,a[20];
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the element number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
printf("the sorted array is");
for(i=0;i<=n-1;i++)
{
    printf("%d",a[i]);
}
}