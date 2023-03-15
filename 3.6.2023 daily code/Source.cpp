#include<iostream>
using namespace std;
int Numbers(int a, int b);
int main(){
	int input1;
	int input2;
	cout << "type two numbers" << endl;
	cin >> input1 >> input2;
	Numbers(input1, input2);
	cout << endl;
}

int Numbers(int a, int b) {
	//sum
	cout << "the sum of " << a << " and " << b << " is " << a + b << endl;
	//difference
	cout << "the difference of " << a << " and " << b << " is " << a - b << endl;
	//product
	cout << "the product of " << a << " and " << b << " is " << a * b << endl;
	//quotient
	cout << "the quotient of " << a << " and " << b << " is " << a / b << endl;
	//average
	cout << "the average of " << a << " and " << b << " is " << (a + b) / 2 << endl;
}