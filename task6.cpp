#include<iostream>
using namespace std;

int main(){
	int dividend = 342, divisor = 6,quotient;
	cout << dividend;
	while(dividend >divisor){
		dividend = dividend - divisor;
		quotient++;
	}
	cout << "/"<< divisor<< " = "<< quotient;
}
