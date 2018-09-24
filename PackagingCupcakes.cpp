#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int T;
	long int N;
	cin>>T;
	while(T--){
		cin>>N;
		if (N%2!=0){
			cout<<(N+1)/2<<endl;
		}else{
			cout<<(N/2)+1<<endl;
		}
	}
	return 0;
}