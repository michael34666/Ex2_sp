#include <stdio.h>
#include <stdbool.h>
#include <math.h>



int fwarun=0;
int  copymat [10][10] ;
 
void initialize(int** mat,int length)
 {
    for(int i=0;i<length;i++)
    {
     for(int j=0;j<length;j++)
     {
      scanf("%d",&mat[i][j]);
    
     }
    }
  
 }
 
 void FWA(int** mat,int length)
{ 
   

   for(int i=0;i<length;i++)
   {
      for(int j=0;j<length;j++)
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
            
             if((copymat[i][k]!=0 && copymat[k][j]!=0 && copymat[i][k]+copymat[k][j]<copymat[i][j])|| copymat[i][j]==0)
             {
               if(i!=j)
               {
              copymat[i][j]=copymat[i][k]+copymat[k][j];
               }
             }
            
         }
         
      }
   }
   
   fwarun=1;

}
 
 
 int havePath(int** mat,int length,int i,int j)
 {
   if(fwarun!=1)
   {
    FWA(mat,length);
   }
    if(i==j)
    {
      return 0;
    }
      if (copymat[i][j] > 0)
    {
        return 1;
    }
    return 0;
 }

 int shortestPath(int** mat,int length,int i,int j)
 {
  if(fwarun!=1)
   {
    FWA(mat,length);
   }
   
    if(copymat[i][j])
    {
      return copymat[i][j];
    }

    return -1;
 }
