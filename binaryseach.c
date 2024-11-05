#include<stdio.h>
void main(){
    int a[50],n,i,end,mid,beg,val;
    printf("enter the number of elements in the array");
    scanf("%d", &n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        
    printf("enter the value you wanted to search");
    scanf("%d",&val);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    
        while(val!=a[mid] && beg<=end)
    {
        if(a[mid]>val)
        end=mid-1;
        if(a[mid]<val)
        beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==val)
    printf("the value %d is found at %d position",val,mid+1);
    else 
    printf("unsuccessful search");

}