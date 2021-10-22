// Task 7 : Version 3 Program to Call by Referece and Swapping With Pointer 
#include <iostream>
 
using namespace std ;
void swap(int *a, int *b) ;
int main()
{
    int a , b ;
    cout<<"Enter two Values to be Swapped : " ;
    cin>>a>>b ;
    cout<<"Values before Swapping A = "<<a<<" and B = "<<b<<endl ;
    swap(&a,&b) ;
    cout<<"Values After  Swapping A = "<<a<<" and B = "<<b<<endl ;
    return 0;
}
void swap(int *a, int *b)
{
    int temp ;
    temp = *a ;
    *a = *b    ;
    *b = temp ;
}
/*
 The Values will  Swapped because here we call the function
 by Address so the address of values will be passed to the
 function the swapping Performed in Function will  Reflect 
 in main() . Actual change in Value is Occur Here .
*/
