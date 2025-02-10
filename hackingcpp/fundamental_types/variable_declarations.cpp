#include<iostream>
int main()
{
	// declare & initialize 'i';
	int i=1;
	// print i's value;
	
	std::cout << i << '\n';

	int j{5};
	std::cout << j << '\n';

}

// char c = 18; 
// here:
// 
// Variable: named object 
//
// Object: [0|0|0|1|0|1] : piece of memory that holds a value of some type
//
// Value: 18(dec) : 00010010(bin) :  set of bits interpreted according to a type
//
// Type : -128 ... 127 
//      : + * - / % : possible values & operations
//
// 
// Varibles of fundamental types are not initialized by default!
// 
// int k;  here k is not initialzed
// cout << k << '\n'; value might be anything
// Because in C++ "you only pay for what you use" (initialization of large memory blocks can be quite expensive)
