#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
 char choose;

 
 

 
 
 do{

 scanf("%c",&choose);

 switch (choose)
 {
  case 'A':
  {
   initialize();
   printf("\n");
   break; 
  }
  case 'B':
  {
    int i=0;
    int j=0;
    scanf("%d%d",&i,&j);
    //char ans= havePath(mymat0,10,i,j);
    havePath(i,j);
    printf("\n");
   // printf("%s\n", havePath(mymat0,10,i,j)? "True":"False");
    break; 
  }
  case 'C':
  {
    int m=0;
    int l=0;
    scanf("%d%d",&m,&l);
    //int value=shortestPath(mymat0,10,i,j);
    printf("%d",shortestPath(m,l));
    printf("\n");
    break; 
  }
 default:
    break;
  

 }

 }

 while(choose != 'D');
 
  
return 0;
}

