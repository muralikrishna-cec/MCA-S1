#include <stdio.h>
void main()
{
 int i,j,m,n;
 printf(" enter the number of rows");
 scanf("%d",&m);
 printf(" enter the number of columns");
 scanf("%d",&n);

 for(i=0;i<m;i++){
   for(j=0;j<n;j++){
      printf("*");
    }
   printf("\n");
  }

}
