#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define length 10



int fwarun=0;
int mymat0[10][10];
int  copymat [10][10] ;
 
void initialize()
 {
    for(int i=0;i<length;i++)
    {
     for(int j=0;j<length;j++)
     {
      scanf("%d",&mymat0[i][j]);
      copymat[i][j]=mymat0[i][j];
     }
    }
  
 }

 
 void FWA()
{ 

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
 
 
 int havePath(int i,int j)
 {
   if(fwarun!=1)
   {
    FWA();
   }
    if(i==j)
    {
     // printf("False");
      return 0;
    }
      if (copymat[i][j] > 0)
    {
     //printf("True");
      return 1;
    }
    //printf("False");
    return 0;
 }

 int shortestPath(int i,int j)
 {
  if(fwarun!=1)
   {
    FWA();
   }

    if(copymat[i][j])
    {
      return copymat[i][j];
    }

    return -1;
 }
