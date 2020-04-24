#include <iostream>
int main()
{
  int n;
  cout<<"n="<<endl;
  cin>>n;
  int*arr=new int[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<endl;
  }
  avg = 0;
  i = 0;
  while (i<n)
{
    avg += arr[i];
    i++;
}
  avg = avg / n;  // обчислення середнього арифметичного

}
