#include <stdio.h>

int **turn90(int n, int **a) {
 int i,j,b;
 for (i=0;i<n/2;i++)
 for (j=i;j<n-1-i;j++) {
  b=a[i][j];
  a[i][j]=a[j][n-1-i];
  a[j][n-1-i]=a[n-1-i][n-1-j];
  a[n-1-i][n-1-j]=a[n-1-j][i];
  a[n-1-j][i]=b;
 }
 return a;
}
void out (char *s, int n, int **a) {
 int i,j;
 printf ("\n%s",s);
 for (i=0; i<n; i++) {
  printf ("\n");
  for (j=0; j<n; j++) printf ("%d ",a[i][j]);
 }
}
int main () {
 const int n;
 cout<<"n="<<endl;
 int **a;
 int i,j,k=1;
 a = new int * [n];
 for (i=0; i<n; i++) a[i]= new int [n];
 for (i=0; i<n; i++)
 for (j=0; j<n; j++) a[i][j]=k++;
 out ("Before",n,a);
 a=turn90(n,a);
 out ("After turn90",n,a);
 getchar();
 return 0;
}
