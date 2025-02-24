#include<bits/stdc++.h>

using namespace std;

void print(){

	cout << "raj";
}

int sum(int a,int b)
{
	cout << a+b;
	return (a+b);
}
/*

/// Pairs
/// it lies in the utility library

void explainPair()
{
  pair<int , int> p={1,3};
  cout << p.first << "" << p.second; // 1 , 3
  pair<int , pair<int, int>> p={1,{3,4}};
  cout << p.first << "" << p.second.second << "" p.second.first; // 1 ,  4 , 3
  pair<int,int> arr[] = {{1,2} , {2,5} , {5,1}};
  cout << arr[1].second;  // 5
}

*/

// Vectors
// It is dyanmic in nature with no fixed size
// Both push_back and emplace_back does the same thing

void explainVector() {

	vector<int> v;  // created emppty container
	v.push_back(1); // {1}
	v.emplace_back(2) ; // dynamically increases sizes and puts 2 {1,2{

	vector<pair<int,int> vec;
	v.push_back({1,2});
	v.emplace_back(1,2);

	vector<int> v(5,100); // {100,100,100,100,100}
        
        vector<int>  v(5);

	vector<int> v(5,100); // {100,100,100,100,100}
        
        vector<int> v1(5,20); // v1= {20,20,20,20,20}
        vector<int> v2(v1);   // v2= {20,20,20,20,20}
        
        // accessing the elements in a vector
	vector<int>::iterator it = v.begin(); //indexing in the memory (points to the memory not element)
 
        // [20,10,15,6,7]
	it++; // 20
	cout << *(it) << " "; // 10
	it = it+2; // 6
	cout << *(it) < "" ;  // 7
     
	// {10,20,30,40}
	vector<int>:: iterator it =v.end(); // after 40
	vector<int>:: iterator it = v.rend(); // before 10
	vector<int>:: iterator it= v.rbegin(); // 

}


int main()
{
	explainPair();
	return 0;
}
