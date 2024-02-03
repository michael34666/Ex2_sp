#include <stdio.h>
#include <stdbool.h>
#include <math.h>



 
int initialize(int** mat,int length)
 {
    for(int i=0;i<length;i++)
    {
     for(int j=0;j<length;j++)
     {
      scanf("%d",&mat[i][j]);
    
     }
    }
    return 0;
 }
 
 int** FWA(int** mat,int length)
{ 
   int  ** copymat=NULL ;

   for(int i=0;i<10;i++)
   {
      for(int j=0;j<10;j++)
     {
         copymat[i][j]=mat[i][j];

      }
   }

   for(int k=0;k<10;k++)
   {
      for(int i=0;i<10;i++)
      {
         for (int j= 0; j <10; j++)
         {
            if(mat[i][k]+mat[k][j]<mat[i][j])
            {
             mat[i][j]=mat[i][k]+mat[k][j];
            }
         }
         
      }
    
   }
   
  return copymat;
}
 
 
 int havePath(int** mat,int length,int i,int j)
 {
    int** newmat=FWA(mat,length);
    if(newmat[i][j]!=0&&newmat[i][j]<INFINITY)
    {
      return 1;
    }

    return 0;
 }

 int shortestPath(int** mat,int length,int i,int j)
 {
    int** newmat=FWA(mat,length);
    if(newmat[i][j] &&newmat[i][j]!=INFINITY)
    {
      return newmat[i][j];
    }

    return -1;
 }

















