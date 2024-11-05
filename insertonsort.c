#include<stdio.h>
void main(){
    int n,a[20],i,j,temp;
    printf("enter the number of array element");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);}
    //sorting process 
       for(i=0;i<n;i++)
       {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;  }
    }
    printf("the array after sorting is");
    for(i=0;i<=n;i++)
    printf(" %d ",a[i]);

}