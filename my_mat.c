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
 
 int FWA(int** mat,int length, int i, int j)
{ 
   int  copymat [10][10] ;

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
            if(copymat[i][k]+copymat[k][j]<copymat[i][j])
            {
             copymat[i][j]=copymat[i][k]+copymat[k][j];
            }
         }
         
      }
   }
   return copymat[i][j];
   
}
 
 
 int havePath(int** mat,int length,int i,int j)
 {
   int num= FWA(mat,length,i,j);
    if(num!=0&&num<INFINITY)
    {
      return 1;
    }

    return 0;
 }

 int shortestPath(int** mat,int length,int i,int j)
 {
    int num=FWA(mat,length,i,j);
    if(num &&num!=INFINITY)
    {
      return num;
    }

    return -1;
 }


 



  

 



 



  

 
 











