#include<stdio.h>

int main()
{
int i;
  int U[5]={1,2,3,4,5};
  int A[5]={1,0,0,1,1};
  int B[5]={0,1,1,1,0};
  int uni[5],ints[5],diffB[5],diffA[5],compA[5],compB[5];
  
  //universal set
  printf("\n UNIVERSAL SET IS {");
  for(i=0;i<5;i++){
    printf("%d ",U[i]);
  }
  printf("} \n"); 

  //set a
  printf("\n SET A {");
  for(i=0;i<5;i++){
    if(A[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n"); 
  
  //set b
  printf("\n SET B {");
  for(i=0;i<5;i++){
    if(B[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n"); 
  
  //union
  for(i=0;i<5;i++){
    uni[i]=A[i]|B[i];
    printf("%d",uni[i]);
  }
  printf("\n UNION {");
  for(i=0;i<5;i++){
    if(uni[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 
 //inter section
 for(i=0;i<5;i++){
    ints[i]=A[i]&B[i];
    printf("%d",ints[i]);
  }
  printf("\n INTERSECTION {");
  for(i=0;i<5;i++){
    if(ints[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 

 // a comp
 for(i=0;i<5;i++){
    compA[i]=1-A[i];
    printf("%d",compA[i]);
  }
  printf("\n A COMPLIMENT {");
  for(i=0;i<5;i++){
    if(compA[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 

 //b comp
  for(i=0;i<5;i++){
    compB[i]=1-B[i];
    printf("%d",compA[i]);
  }
  printf("\n B COMPLIMENT {");
  for(i=0;i<5;i++){
    if(compB[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 
 
 //A-B
  for(i=0;i<5;i++){
    diffA[i]=A[i]&compB[i];
    printf("%d",compA[i]);
  }
  printf("\n A-B {");
  for(i=0;i<5;i++){
    if(diffA[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 
 
 //B-A
 for(i=0;i<5;i++){
    diffB[i]=B[i]&compA[i];
    printf("%d",compB[i]);
  }
  printf("\n B-A {");
  for(i=0;i<5;i++){
    if(diffB[i]==1){
      printf("%d ",U[i]);
    } 
  }
  printf("} \n");
 
 
return 0;
}
