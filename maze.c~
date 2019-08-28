#include<stdio.h>
void spiral(int a[50][50],int rowmin,int rowmax,int colmin,int colmax,int n);
int min(int a,int b,int c,int d);
int value(int x,int y);
void print_matrix(int matrix1[50][50]);
void initialise();
int n=10,matrix[50][50];


void spiral(int a[50][50],int rowmin,int rowmax,int colmin,int colmax,int n)
{
  int i,j;
 while(colmin<colmax && rowmin<rowmax)
{  
 for(j=colmin;j<=colmax;j++)
   {
    
    printf("%d ",a[rowmin][j]);
    if(matrix[rowmin][j]==999)
    {
         continue;
    }
    matrix[rowmin][j]=value(rowmin,j);

  
   }
   rowmin++;
  
  for(i=rowmin;i<=rowmax;i++)
   {
    
    printf("%d ",a[i][colmax]);
    if(matrix[i][colmax]==999)
    {
         continue;
    }
    matrix[i][colmax]=value(i,colmax);
    
   }
  colmax--;

if(rowmin<rowmax)
{
  for(j=colmax;j>=colmin;j--)
   {
    
    printf("%d ",a[rowmax][j]);
    if(matrix[rowmax][j]==999)
    {
         continue;
    }
    matrix[rowmax][j]=value(rowmax,j);
   
   }
   rowmax--;
}
if(colmin<colmax)
{ 
  for(i=rowmax;i>=rowmin;i--)
   {
    
    printf("%d ",a[i][colmin]);
    if(matrix[i][colmin]==999)
    {
         continue;
    }
    matrix[i][colmin]=value(i,colmin);
    
   }
   colmin++;
}
}

if(n%2!=0)
{
 int x;
 x=n/2;
 printf("%d\n",a[x][x]);
 matrix[x][x]=value(x,x);
}
else
{
 int y;
 y=n/2;
 printf("%d\n",a[y][y-1]);
 matrix[y][y-1]=value(y,y-1);
}
}

int value(int x,int y)
{
 int val,r,s,t,u;
 if(x==0||x==n-1||y==0||y==n-1)
 {
  return 1;
 }
 else
{
 if(matrix[x+1][y]==999)
 {
  r=999;
 }
 else
 {
 r=(1+matrix[x+1][y]);
 }
 if(matrix[x-1][y]==999)
 {
  s=999;
 }
 else
 {
 s=(1+matrix[x-1][y]);
 }
 if(matrix[x][y+1]==999)
 {
  t=999;
 }
 else
 {
 t=(1+matrix[x][y+1]);
 }
 if(matrix[x][y-1]==999)
 {
  u=999;
 }
 else
 {
 u=(1+matrix[x][y-1]);
 }
 
 val=min(r,s,t,u);
 
 return val;
}
}

int min(int a,int b,int c,int d)
{
 if(a<=b&&a<=c&&a<=d)
 {
  return a;
 }
 else if(b<=a&&b<=c&&b<=d)
 {
  return b;
 }
 else if(c<=b&&c<=a&&c<=d)
 {
  return c;
 }
 else
 {
  return d;
 }
}
void print_matrix(int matrix1[50][50])
{
int i,j;
for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    
    printf("%d   ",matrix1[i][j]);
   
   }
   printf("\n");
  }
}

void initialise()
{
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
    matrix[i][j]=99;
  }
 }
 matrix[0][1]=999;
 matrix[1][2]=999; //intialising the explosives as 999
 matrix[2][3]=999;
 matrix[3][4]=999;
 matrix[4][5]=999;
 matrix[5][6]=999;
 matrix[6][7]=999;
 matrix[7][8]=999;
 matrix[8][9]=999;

}

void main()
{
 int a[50][50],i,j,count=1,rowmin=0,rowmax=n-1,colmax=n-1,colmin=0,continuee=0,continuee1,xindex,yindex,dist;
 printf("The matrix is\n");
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
  initialise();
  
  printf("The spiral traversal is\n");
  spiral(a,rowmin,rowmax,colmin,colmax,n);
  printf("The position with 999 is explosive\n");
  printf("The weighted distance matrix is\n");
  print_matrix(matrix);
  while(continuee==0)
 {
  printf("Enter the position in x and y\n");
  scanf("%d %d",&xindex,&yindex);
  if(xindex>=n-1 || yindex>=n-1)
  {
   printf("Enter valid position\n");
   break;
  }
  dist=matrix[xindex][yindex];
  if(dist==999)
  {
  printf("There is an explosive in the given position\n");
  }
  else if(matrix[xindex+1][yindex]==999&&matrix[xindex-1][yindex]==999&&matrix[xindex][yindex+1]==999&&matrix[xindex][yindex-1]==999)
  {
   printf("No possible moves\n");
  }
  else
  {
  printf("Least distance is %d\n",dist);
  }
  printf("Enter 0 to continue 1 to exit\n");
  scanf("%d",&continuee1);
  continuee=continuee1;
  }
}
