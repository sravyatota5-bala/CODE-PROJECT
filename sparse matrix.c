#include<stdio.h> 
int main() 
{ 
int a[10][10],r,c,i,j,count=0; 
printf("\nEnter no.of rows:"); 
scanf("%d",&r); 
printf("\nEnter no.of columns:"); 
scanf("%d",&c); 
printf("\nEnter %d Elements:",(r*c)); 
//reading the elements 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
   scanf("%d",&a[i][j]); 
  } 
 } 
 //printing the elements 
 printf("\n The given matrix is.....\n"); 
 for(i=0;i<r;i++) 
 { 
  for(j=0;j<c;j++) 
  { 
   printf("\t%d",a[i][j]); 
  } 
  printf("\n"); 
 } 
 for(i=0;i<r;i++) 
 { 
  for(j=0;j<c;j++) 
  { 
   if(a[i][j]==0) 
   { 
    count++; 
   } 
  } 
 } 
 if (count>(r*c)/2) 
{ 
printf("\nThe Matrix is a Sparse Matrix"); 
} 
else 
{ 
printf("\nThe Mtrix is not a Sparse Matrix");
}
return 0; 
} 
