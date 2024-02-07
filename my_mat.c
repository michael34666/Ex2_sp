#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
 char choose;
 int i=0;
 int j=0;
 
 
    int mymat0[10][10];
 

 for(int i=0;i<10;i++)
    {
     for(int j=0;j<10;j++)
     {
      mymat0[i][j]=0;
     }
    }

 
 
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
    printf("%s\n", havePath(mymat0,10,i,j)? "True":"False");
    break; 
  }
  case 'C':
  {
    scanf("%d%d",&i,&j);
    //int value=shortestPath(mymat0,10,i,j);
    printf("%d\n",shortestPath(mymat0,10,i,j));
    break; 
  }
 default:
    break;
  

 }

 }

 while(choose != 'D'&&choose != EOF);
 
  
return 0;
}
