#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n; 

	double x;

	cout << "enter value of x: " ;
	cin >> x;

	cout << "enter the power n: ";
	cin >> n;

	double z = pow(x,n);

	cout << z << endl; 	

	return 0;
	
}
