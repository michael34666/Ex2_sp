#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define infinite  2147483647



 
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
 
 void FWA(int** mat,int length)
{ 
   //int  copymat [length][length] ;

   //for(int i=0;i<length;i++)
   //{
   //   for(int j=0;j<length;j++)
    //  {
     //    copymat[i][j]=mat[i][j];

    //  }
  // }
for(int i=0;i<10;i++)
      {
         for (int j= 0; j <10; j++)
         {
            if(i!=j&& mat[i][j]==0)
            {
               mat[i][j]=infinite;
            }

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
   
   

}
 
 
 int havePath(int** mat,int length,int i,int j)
 {
    FWA(mat,length);
      if (mat[i][j] != 0&&mat[i][j]<infinite)
    {
        return 1;
    }
    return 0;
 }

 int shortestPath(int** mat,int length,int i,int j)
 {
   FWA(mat,length);
    if(mat[i][j]!=0&&mat[i][j]<infinite)
    {
      return mat[i][j];
    }

    return -1;
 }
