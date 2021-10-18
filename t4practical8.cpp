// Task 4 : To use Function 
#include<iostream>
using namespace std ;
long fact(int n);
int main()
{ 
int num  ;
cout<<"Enter a Number : ";
cin>>num;
cout<<fact(num) <<endl ;
return 0 ;
}
long fact(int n)
{
 long f = 1 ;
 while(n>=1)
 {
   f = f*n ;
   n-- ;
 }
return f ;
}
