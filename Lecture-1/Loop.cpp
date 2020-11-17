// Loop
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>>n;

	int counter = 0; // initialization
	
	int number = 1;

	while(counter<=n-1){ // condition check
		// cout<<"Hello"<<endl;
		// cout<<counter+1<<endl;
		cout<<number<<endl;
		number = number + 1;

		counter = counter + 1;// Updation
	}


	// cout<<endl;
	return 0;
}