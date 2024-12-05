#include<stdio.h>
void main()
{
  int n,i,j,array[50],temp;
  
  printf("enter the size of the array");
  scanf("%d",&n);
  
  printf("\n Enter the elements of the array");
   for(i=0;i<n;i++){
     printf("\n enter the %d Element",i);
     scanf("%d",&array[i]);
   }
   
   printf("given Array ,");
    
   for(i=0;i<n;i++)
   {
     printf("%d ,",array[i]);
   }
   
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
     {
       if(array[j]>array[j+1])
       {
         temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
       }
     }
   }
   
   
   printf("\n sorted array ," );
   for(i=0;i<n;i++)
   {
     printf("%d ,",array[i]);
   }
}
