#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number:";
	cin >> num;
	for (int i=1;i<=num;i++)
	{
		int rem = num%i;
		if(rem == 0){
		cout << i << endl;
		
		}
		
		
	}
	
}
