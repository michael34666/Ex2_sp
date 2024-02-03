#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
 int **mymat0=(int**)malloc(10*sizeof(int*));
 for(int i=0;i<10;i++)
 {
    mymat0[i]=(int *)malloc(10*sizeof(int));
 }
 char choose;
 int i=0;
 int j=0;
 
 do{

 scanf("%c",&choose);

 switch (choose)
 {
  case 'A':
  {
   initialize(mymat0,10);
   break; 
  }
  case 'B':
  {
    scanf("%d%d",&i,&j);
    //char ans= havePath(mymat0,10,i,j);
    printf(" %s\n", havePath(mymat0,10,i,j)? "True":"False");

    break; 
  }
  case 'C':
  {
    scanf("%d%d",&i,&j);
    int value=shortestPath(mymat0,10,i,j);
    printf(" %d\n", value);
    break; 
  }
 default:
    break;
  

 }

 }

 while(choose != 'D');
 

return 0;
}
