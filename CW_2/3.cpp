#include <iostream>
using namespace std;
 
char Delete(char s[50],int n,int l)
{
 for (int i=n-1;i<strlen(s)-1;i++)
  s[i]=s[i+l];
 return *s;
}
 
int main(void)
{
 char s[50];
 int n,l;
 cout<<"string: ";
 cin>>s;
 cout<<"delete: ";
 cin>>n>>l;
 Delete(s,n,l); 
 cout<<"the result of the operation: "<<s<<endl;
 system("pause");
}
