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

	// iterating in the vector
        for (vector<int>::iterator it = v.begin(); it!=v.end();i++)
	{
		cout << *(iy) << "";
	}

	for (auto it = v.begin(); it !=v.end(); it++){
                cout << *(it) << "";
	}
	for (auto it : v)
	{
		cout << it << "";
	}

	// deleting 
	// {10,19,20,13}
	v.erase(v.begin() +1); // {10,20,13}
        
        // {10,20,12,23,35}
	v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} {start,end}
        
        // Insert function
	vector<int>v(2,100); // {100,100}
        v.insert(v.begin(),300);  // {300,100,100} 
	v.insert(v.begin()+1,2,100); // {300,100,100} 

	vector<int> copy(2,50); // {50,50} 
	v.insert(v.begin(),copy.begin(),copy.end(); // {50,50,300,10,10,100,100} 
        

        // {10,20} 
	cout << v.size(); // 2

	// {10,20}
	v.pop_back(); // {10} pops the last element 

	// v1 -> {10,20}
	// v2 -> {30,40}
	v1.swap(v2); // v1 -> {30,40}  v2 -> {10,20} 

	v.clear(); //erase the entire vector

	cout << v.empty(); // does your vector has an element (True if yes and False if no) 

        // List
	void explainList(){
	list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2,4} 

	ls.push_front(5); // {5,2,4} 
	ls.emplace_front(); // {2,4} 

	// rest functions same as vector
	// begin, end , rbegin , rend, clear , insert , size ,swap
	
	// Deque
	deque<int>dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1,2} 
	dq.push_front(4); // {4,1,2} 
	dq.emplace_front(3); // {3,4,1,2}

	dq.pop_back(); // {3,4,1}
	dq.pop_front(); // {4,1} 

	dq.back();
	dq.front();
         
        // rest functions same as vector
	// begin,end,rbegin,rend,clear,insert,size,swap
	
	// Stack (LIFO)
	void explainStack(){
        stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2,1}
	st.push(3); // {3,2,1}
	st.push(3); // {3,3,2,1}
	st.emplace(5); // {5,3,3,2,1} 

	cout << st.top(); // 5 
	st.pop(); // {3,3,2,1}
	cout << st.top(); // 3 
	cout << st.top(); // 4 

	cout << st.empty(); // False
        stack<int>st1,st2;
	st1.swap(st2);
	}
        // Queue 
	// FIFO
	void explainQueue(){ 
	queue<int> q;
	q.push(1); // {1} 
	q.push(2); // {1,2}
	q.emplace(4); // {1,2,4}
	q.back() +=5;

	cout << q.back(); // print 9

	// 0 is {1,2,9} 
	cout << q.front(); // prints 1
	q.pop(); // {2,9} 

	cout << q.front(); // prints 1 
	}


	// Priority queue
	void explainPQ()
	{
	pq.push(5);     // {5}
	pq.push(2);     // {5,2}                       
	pq.push(8);     // {8,5,2}              
	pq.emplace(10); // {10,8,5,2}            
      
        cout << pq.top(); //  prints 10                  maximum heap

	pq.top(); 
	// {8,5,2} 
	cout << pq.top(); // prints 8 
	// size swap empty function same as other
	

	priority_queue<int ,vector<int>,greater<int>>pq;
        pq.push(5);     // {5}
	pq.push(2);     // {2,5}
	pq.push(8);     // {2,5,8}                       minimum heap
	pq.emplace(10); // {2,5,8,10}

	cout << pq.top();  // prints 2
	}

	// Set 
	// Inserts in sorted fashion
	void explainSet()
	{
        set<int>st;
	st.insert(1); // {1}
	st.insert(2); // {1,2}
	st.insert(2); // {1,2}
	st.insert(4); // {1,2,4}
	st.insert(3); // {1,2,3,4}

	// {1,2,3,4,5{
	auto it =st.find(3);  // iterator points to the 3

	// {1,2,3,4,5}
	auto it = st.find(6);  // if the element not exist then it returns the last element 

	// {1,4,5}
	st.erase(); // erases 5 // takes logarithmic time

	int cnt = st.count(1);

	auto it = st.find(3);
	st.erase(it); 

	auto it1=st.find(2);
	auto it2=st.find(4);
	st.erase(it1,it2);

	auto it = st.lower_bound(2);
	auto it = st.upper_bound(3);


	// Multi set
	void explainMutisSet()
	{
        multiset<int>ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1,1}
	ms.insert(1); // {1,1,1}

	ms.erase(1); all 1's erased
	int cnt = ms.count(1);
        
	// only a single one erased
        ms.erase(ms.find(1));

	ms.erase(ms.find(1), ms.find(1)+ 2); // {start,end}

	// rest all the functions are same as set 
	}

	// Unordered Set
        void explainUSet()
	{
	unordered_set<int> st;
	// lower_bound and 
	
	// Map
	// As key and value
	// Store unique keys in sorted order
	void explainMap(){
	map<int,int> mpp;
	map<int ,pair<int,int>> mpp;
	map< pair<int,int>,int> mpp;

	mpp[1]=2;                     /* {1,2}
	mpp.emplace({3,1});              {2,4}
	mpp.insert({2,4});               {3,1} */
	mpp[{2,3}] =10;
        {
	    {1,2}
	    {2,4}
	    {3,1}

	}
	for(auto it: mpp){
	cout << it.first << "" << it.second <<endl;
	}
        cout<<mpp[1]; // 2
	cout<<mpp[5], // 0 
	
	auto it=mpp.find(3);
	cout << *(it).second;

	auto it=mpp.find(5);  // points to mpp.end()

	auto it = mpp.lower_bound(2);
        auto it = mpp.upper_bound(3);
	}
	}

	// Multi Set
	// Can store duplicated key in sorted order
	void explainMultiMap()
	{
	// everything same as map,only it can store multiple keys
	// only mpp[key] cannot be used here
	}

	void explainUnorderedMap()
	{
	// same as set and unordered_set difference
	}

	// Extra Algorithms
	void explainExtra()
	{
	sort(a,a+n);
	sort(v.begin(),v.end()); // sort in ascending order
	sort(a+2,a+4);  // sort in ascending order from index 2 to index 4

	sort(a,a+n, greater<int>); // sort in descending order
	pair<int,int> a[]={1,2},{2,1},{4,1}};
        // sort can even sort string
	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending
	
	sort(a,a+n,comp);
	// {4,1} , {2,1} , {1,2};
	
	int num=7;
	int cnt= __builtin_popcount();

	long long sum= 11393123833;
	int cnt=__builtin_popcountll();

	string s="123";

	do{
		cout << s << endl;

	}
	while(next_permutation(s.begin(),s.end()));
        
	}
}



int main()
{
	explainPair();
	return 0;
}































