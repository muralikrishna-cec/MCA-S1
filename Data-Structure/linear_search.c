#include<stdio.h>
void main(){
int n,array[50],i,key,flag=0;

printf("Enter th size of the array");
scanf("%d",&n);

printf("Enter the elemnts of the array");
for(i=0;i<n;i++){
  printf("\n Enter the %d Element",i);
  scanf("%d",&array[i]);
}

printf("\n Enter the value to be searched");
 scanf("%d",&key);
 
 for(i=0;i<n;i++){
    if(array[i]==key)
    {
      printf("\n element found at %d th index",i);
      flag++;
    } 
 } 
 
 if(flag==0){
  printf("\n value not found");
 }
 else{
   printf(" \n Element found %d times ",flag);
 }

}
