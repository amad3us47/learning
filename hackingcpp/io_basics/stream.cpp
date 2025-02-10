/* std::cin --> reads from buffer
 * std::cout --> writes to buffer first, output to console when buffer iis full 
 * std::clog --> writes to buffer first, output to console when buffer is full
 * std::cerr --> immediately writes to console
 *
 * >> --> "get from"
 * << --> "put to"
 *
 * */
#include<iostream>
int main()
{
	int i;
	std::cin >> i;
	std::cout << i << '\n';
	int i =0;
	doouble d=0.0;
	std::cin >> i >> d; // read 2 different inputs
}
