//Basic of array and intialization 
#include<iostream>
using namespace std;

int main()
{
		int a [3];
	int b [3];
	int add[3];
	int sub[3];
	int mul[3];
	cout << "\n******************Arrays In C++******************" << endl;
	cout << "Enter 3 interger for A : " << endl;
	for(int i=0; i<3; i++){
		cin >> a[i];
	}
	cout << "Enter 3 interger For B : " << endl;
	for(int i=0; i<3; i++){
		cin >> b[i];
	}
	
	cout << "Addition of A And B is : " << endl;
	for(int i=0; i<3; i++){
	    add[i]=a[i]+b[i];
	    cout << add[i] << " "  << endl;
	}
	//Subraction
		cout << "Subtraction of A And B is : "  << endl ;
	for(int i=0; i<3; i++){
		sub[i] = a[i]-b[i];
		cout << sub[i]<< " "  << endl;
	}
	//MUltiplication
   	cout << "Multiplication of A And B is : " << endl;
	for(int i=0; i<3; i++){
		 mul[i]=a[i]*b[i];
		 cout << mul[i] << " " << endl;
	}

}
		

