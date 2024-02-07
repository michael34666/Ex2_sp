#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
  int i=0;
  int j=0;
 char choose;

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
    printf("%s\n", havePath(i,j)? "True":"False");
    break; 
  }
  case 'C':
  {
    
    scanf("%d%d",&i,&j);
    
    printf("%d\n",shortestPath(i,j));
    
    break; 
  }

 default:
    break;
  

 }

 }

 while(choose != 'D'||choose != EOF);
 
  
return 0;
}

