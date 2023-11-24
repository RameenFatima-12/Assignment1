#include <iostream>
using namespace std;

int main(){
	int num;
	bool result;
	cout << "Enter your number:";
	cin >> num;
	if (num>10 && num<=20){
		result = true;
	}
	else {
		result = false;
	}
	cout << result;
	
}
