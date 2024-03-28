#include <iostream> 
using namespace std; 
class A { 
public: 
	int k = 1000; 
	float salary = 80000; 
}; 
class B : public A { 
public: 
	float bonus = 8000; 
	void ts() 
	{ 
		cout << "Total salary.." << (salary + bonus) 
			<< endl; 
	} 
}; 
int main() 
{ 
	B b1; 
	cout << "Salary:" << b1.salary << endl; 
	cout << "Bonus:" << b1.bonus << endl; 
	b1.ts(); 
	return 0; 
}

