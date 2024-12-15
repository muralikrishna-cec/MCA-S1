#include<stdio.h>
void main()
{
  int i,n,array[50],sum=0;
  
  printf("Enter the size of the array");
  scanf("%d",&n);
  
  printf("\n Enter the the Elemnts of the array");
  for(i=0;i<n; i++){ 
     printf("\n Enter the %d th Element",i);
     scanf("%d",&array[i]);
  }
  
  for(i=0;i<n;i++) {
    sum+=array[i];
  }
  
  for(i=0;i<n; i++){ 
     printf("%d ,",array[i]); 
  }
  
  printf("\n sum of the array = %d",sum);
}
