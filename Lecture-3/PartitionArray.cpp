#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a[100];
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}

	int lmax = a[0];
	int cmax = a[0];

	int l = 0;

	for(int i = 1; i < n-1; i++){
		cmax = max(a[i],cmax);
		if(a[i]<lmax){
			l = i;
			lmax = cmax;
		}
	}

	cout<<l+1;
	cout<<endl;
	return 0;
}