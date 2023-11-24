#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Enter the length of your strings:";
	cin>> n;
	char a[n],b[n];
	cout << "Enter the first string:"<<endl;
	for(int i=0;i<=n-1;i++){
	cin>> a[i];
}
	cout << "Enter the second string:"<<endl;
	for(int i=0;i<=n-1;i++){
	cin>> b[i];
}
for(int i=0;i<=n-1;i++)	{
	if(a[i]!=b[i]){
	cout << "The strings are not equal";
	break;
	}
	else if (i == n-1){
	for(int j=n-1;j>=0;j--){
		b[(n-1)-j] = a[j];
	}
	cout << "Your new strings are:"<<endl;
	for(int j = 0;j<=n-1;j++){
		cout << b[j];
	}
	cout << endl;
    for(int j = 0;j<=n-1;j++){
		cout << a[j];
	}
	for(int i=0;i<=n-1;i++)	{
	if(a[i]!=b[i]){
	cout <<endl<< "The strings are not equal";
	break;
	}
}
	}
	
}
	

	
	
}
