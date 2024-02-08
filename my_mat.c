#include <stdio.h>
#include <math.h>
#define length 10



static int fwarun=0;
int mymat0[10][10];
int  copymat [10][10] ;
 
void initialize()
 {  fwarun=0;
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
            
             if(copymat[i][k]!=0 && copymat[k][j]!=0 && (copymat[i][k]+copymat[k][j]<copymat[i][j] || copymat[i][j]==0))
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
     
      return 0;
    }
   else if (copymat[i][j] > 0)
    {
     
      return 1;
    }
    else{
    
    return 0;
    }
 }

 int shortestPath(int m,int l)
 {
  if(fwarun!=1)
   {
    FWA();
   }

    if(copymat[m][l])
    {
      return copymat[m][l];
    }

    return -1;
 }
