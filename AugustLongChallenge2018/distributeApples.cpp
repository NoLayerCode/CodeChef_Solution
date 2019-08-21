#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0){
	    unsigned long long n,k;
	    cin>>n>>k;
	    if((n/k)%k == 0)
	        cout<<"NO"<<endl;
	    else// if(number%k !=0)
	        cout<<"YES"<<endl;
	    T--;
	}
	return 0;
}