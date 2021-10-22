# practical-08
It Contains Practical of LAB 8 

TASK 1 :
It contains Program to check Error when a pointer variable p initialized as *p ={10,20,30} 
It will give an Error because Pointer variable use to store adrress of single another variable
here we initialised pointer with many values ,so it will give Error .

TASK 2 :
VERSION 1 
Program to check  Pointer to an Array  .
Example - if we initialize a pointer to array it will store base address so Pointer  
int arr[] = {10,20,30} 
int *p = arr ;
cout<<*p ;
It will print 10 because pointer to array with store base address so base address contains value 10 

VERSION 2 
Program to check a pointer variable initialize with p = &arr where arr is an Array .
This will give an Error because by default when we pass an Array to Pointer the base
address is Passed , so when we pass &arr to pointer so basically we are passing 
address of address to a pointer which gives Error .

TASK 3 :
Program to initialize a Double Pointer and perform a Operation using Double Pointer 

TASK 4 :
Program to Print Factorial of a Number using a Function .

TASK 5 :
Program to Print Factorial of a Number using a Recursion .

TASK 6 :
Program to Print a (n*n+n) series Using Recursion .

TASK 7 :

VERSION 1 
Program to Call a Swapping Function by Value .
The Values will Not Swapped because here we call the functionby Value so the copy of 
values will be passed to the function the swapping Performed in Function will not 
Reflect in main()

VERSION 2 
Program to Call a Swapping function by Referece and Swap Values without Pointer 
The Values will  Swapped because here we call the functionby Address so the
address of values will be passed to the function the swapping Performed in Function
will  Reflect in main() . Change shows because of change in Reference .

VERSION 3 
Program to Call a Swapping function by Referece and Swap Values with Pointer 
The Values will  Swapped because here we call the functionby Address so the address
of values will be passed to the function the swapping Performed in Function will 
Reflect in main() . Actual change in Value is Occur Here .

