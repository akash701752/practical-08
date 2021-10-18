// Task 5 : To use Recursion
#include<iostream>
using namespace std ;
long fact(int n);
int main()
{ 
int num  ;
cout<<"Enter a Number : ";
cin>>num;
long ans = fact(num) ;
cout<<ans << endl ;
return 0 ;
}
long fact(int n)
{
  if(n==0||n==1)
  {
    return 1 ;
  }
  else
  {
    return n*fact(n-1) ;
  }
}
