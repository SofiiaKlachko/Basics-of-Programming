#include <iostream>
using namespace std;
int sign(int a){
  if (a<0)  return -1;
  if (a>0)  return +1;
  return 0;
}
int main(){
    int n,sum=0;
    cout << "input n=";
    cin >> n;
    sum+=sign(n) + ( 1− (sign(n));
    cout<<"sum="<<sum;
}
