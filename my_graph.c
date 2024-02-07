#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
 char choose;
 int i=0;
 int j=0;
 
 

 
 
 do{

 scanf("%c",&choose);

 switch (choose)
 {
  case 'A':
  {
   initialize();
   break; 
  }
  case 'B':
  {
    scanf("%d%d",&i,&j);
    //char ans= havePath(mymat0,10,i,j);
    havePath(i,j);
    printf("\n");
   // printf("%s\n", havePath(mymat0,10,i,j)? "True":"False");
    break; 
  }
  case 'C':
  {
    scanf("%d%d",&i,&j);
    //int value=shortestPath(mymat0,10,i,j);
    printf("%d\n",shortestPath(i,j));
    break; 
  }
 default:
    break;
  

 }

 }

 while(choose != 'D');
 
  
return 0;
}

