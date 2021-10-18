// Task 2 Part 2 : to check a pointer variable initialize with p = &arr
#include<iostream>
using namespace std ;
int main()
{ 
int arr[] = {10,20,30} ;
int *p ;
p = &arr ;
cout<<*p <<endl;
p++ ;
cout<<*p <<endl;
return 0 ;
}
