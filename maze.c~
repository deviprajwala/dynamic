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
    matrix[rowmin][j]=value(rowmin,j);

  
   }
   rowmin++;
  
  for(i=rowmin;i<=rowmax;i++)
   {
    
    printf("%d ",a[i][colmax]);
    matrix[i][colmax]=value(i,colmax);
    
   }
  colmax--;

if(rowmin<rowmax)
{
  for(j=colmax;j>=colmin;j--)
   {
    
    printf("%d ",a[rowmax][j]);
    matrix[rowmax][j]=value(rowmax,j);
   
   }
   rowmax--;
}
if(colmin<colmax)
{ 
  for(i=rowmax;i>=rowmin;i--)
   {
    
    printf("%d ",a[i][colmin]);
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
 int val;
 if(x==0||x==n-1||y==0||y==n-1)
 {
  return 1;
 }
 else
{
 val=min((1+matrix[x+1][y]),(1+matrix[x-1][y]),(1+matrix[x][y+1]),(1+matrix[x][y-1]));
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
    matrix[i][j]=999;
  }
 }
}

void main()
{
 int a[50][50],i,j,count=1,rowmin=0,rowmax=n-1,colmax=n-1,colmin=0,continuee=0,continuee1,xindex,yindex;
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
  printf("Least distance is %d\n",matrix[xindex][yindex]);
  printf("Enter 0 to continue 1 to exit\n");
  scanf("%d",&continuee1);
  continuee=continuee1;
  }
}
