#include<stdio.h>
void main()
{
  int a[50],b[50],c[100],m,n,q,i,j,k;
  
  //array 1
   printf("\n Enter the size of the first array");
   scanf("%d",&m);
   
   printf("\n Enter the Elemnts of first array");
   for(i=0;i<m;i++) {
     printf("\n Enter the %d th element",i);
     scanf("%d",&a[i]);
   }
   
   //array 2
   printf("\n Enter the size of the second array");
   scanf("%d",&n);
   
   printf("\n Enter the Elemnts of second  array");
   for(i=0;i<n;i++)
   {
     printf("\n Entyer the %d th element",i);
     scanf("%d",&b[i]);
   }
  
  //array 1
  printf("\n first array = ");
  for(i=0;i<m;i++)
   {
   printf("%d ,",a[i]);
    
   }
   
  // array 2 
  printf("\n second array = ");
  for(i=0;i<n;i++)
   {
   printf("%d ,",b[i]);
    
   }
   
   i=0;
   j=0; 
   k=0;
   
  //comparing both 
   while(i < m && j < n){
     if(a[i]< b[j]) {
       c[k]=a[i];
       k++;
       i++;
     }
     else{
       c[k]=b[j];
       k++;
       j++;
     }
   }
   
   //left over 1
   while(i<m){
    c[k]=a[i];
    i++;
    k++;
   }
   
   //left over 2
   while(j<n){
    c[k]=b[j];
    k++;
    j++;
   }
   
   //output 
   printf("\n Merged array = ");
   for(i=0;i<m+n;i++) {
   printf("%d ,",c[i]);
    
   }
  
}
