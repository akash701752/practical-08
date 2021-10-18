// Task 6 : To print Series (n*n+n) using Recursion
#include<iostream>
using namespace std ;
int series(int n);
int main()
{ 
int num  ;
cout<<"Enter a Number : ";
cin>>num;
//long ans = fact(num) ;
cout<<series(num) << endl ;
return 0 ;
}
int series(int n)
{
  if(n==1)
  {
    return 2 ;
  }
  else
  {
     int c = (n*n+n ) ;
     cout<<c << " " ;
     return series(n-1) ;
  }
}
