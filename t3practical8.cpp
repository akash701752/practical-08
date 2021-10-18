// Task 3 : to check double pointer
#include<iostream>
using namespace std ;
int main()
{ 
int a = 10 ;
int *p ;
p = &a ;
int **q ; //Double Pointer
q = &p ;
cout<<"Before :'"<<**q << endl ;
**q = 30 ;
cout<<"After :"<<**q << endl ;

return 0 ;
}
