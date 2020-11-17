// Conditionals
#include <iostream>
using namespace std;

int main(){
	char rain;
	// rain = 'Y';
	cin>>rain;

	if(rain == 'Y'){
		// work
		cout<<"Take an umbrealla"<<endl;
	}
	else if(rain == 'N'){
		cout<<"Don't take an umbrealla"<<endl;
	}
	else{
		// optional
		cout<<"Wrong character input"<<endl;
	}



	cout<<endl;
	return 0;
}