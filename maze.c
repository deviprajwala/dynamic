#include<stdio.h>
void spiral(int a[50][50],int rowmin,int rowmax,int colmin,int colmax,int n);

void spiral(int a[50][50],int rowmin,int rowmax,int colmin,int colmax,int n)
{
  int i,j,m=n*n;
  
  for(j=colmin;j<=colmax;j++)
   {
    
    printf("%d ",a[rowmin][j]);
    m--;
   }
   rowmin++;
  
  for(i=rowmin;i<=rowmax;i++)
   {
    
    printf("%d ",a[i][colmax]);
    m--;
   }
  colmax--;

  for(j=colmax;j>=colmin;j--)
   {
    
    printf("%d ",a[rowmax][j]);
    m--;
   }
   rowmax--;
  
  for(i=rowmax;i>=rowmin;i--)
   {
    
    printf("%d ",a[i][colmin]);
    m--;
   }
   colmin++;
if(n%3==0&&colmin==colmax==rowmin==rowmax)
{
 if(m>1)
 {
 printf("%d\n",a[rowmin][colmax]);
 }
 
}
else
{
spiral(a,rowmin,rowmax,colmin,colmax,n);
}
}


void main()
{
 int a[50][50],i,j,n=7,count=1,rowmin=0,rowmax=n-1,colmax=n-1,colmin=0;
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    a[i][j]=count;
    printf("%d   ",a[i][j]);
    count++;
   }
   printf("\n");
  }
  spiral(a,rowmin,rowmax,colmin,colmax,n);
}
