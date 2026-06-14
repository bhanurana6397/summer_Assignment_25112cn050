#include<stdio.h>
int main () {
    int n,i,x,m,l,key;   
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    x=0 ;
    l=n-1;
  while(x<=l){
       m=(x+l)/2;
     if(arr[m]==key){
        printf("found in the array at %d index\n",m);
        return 0;
      }
     if(arr[m]<key){
      x=m+1;
        }
        else{
            l=m-1;
         }
    }
    printf("not found\n");
    return 0;
}