#include<iostream>
using namespace std;
int main(){
	long int n;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		while(n){
			sum += (n%10);
			n /= 10;
		}
		cout<<sum<<endl;
	}	
	return 0;
}