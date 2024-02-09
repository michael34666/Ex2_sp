
#include <stdio.h>
#define W 20
#define size 5
#include <string.h>
char items[size];
int mat[size+1][W+1];
int knapSack(int[], int[], int[]);
int max(int,int);
int main()
{ 
    int value[size];
    int weights[size];
    int selected_bool[size];
    for(int i=0;i<size;i++)
    {
        scanf("%s %d %d",&items[i], &value[i], &weights[i]);
       
        selected_bool[i]=0;
    }
    knapSack(weights,value,selected_bool);
     printf("Maximun profit: %d", mat[size][W]);
     printf("\nSelected items:"); 
    for(int i=0;i<size;i++)
    {
    if(selected_bool[i]==1)
    {   
         printf(" %c", items[i]);
        
    }
    
    }
    return 0;
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}


 int knapSack (int weights[], int values[], int selected_bool[])
  {
    
    for(int i=0;i<=size;i++){
         for(int j=0;j<=W;j++){
            if(i==0|| j==0){
               mat[i][j]=0;
            }
            else if(weights[i-1]<=j){
                mat[i][j]=max(values[i-1]+mat[i-1][j-weights[i-1]],mat[i-1][j]);
            }
            else{
                mat[i][j]=mat[i-1][j];
                
            }
    }
  }
    int j=size;
    int w2=W;
    while(j>0 && w2>0){
        if(mat[j][w2]!=mat[j-1][w2]){
           selected_bool[j-1]=1 ;
           w2=w2-weights[j-1];
        }
        j--;
    }
   
  return 0;
  }

    
