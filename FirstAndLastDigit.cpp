#include <iostream>
#include <string>
using namespace std;

int main(){
	int T;
	string N;
	cin>>T;
	while(T--){
		cin>>N;
		cout<<(N[0]-'0')+(N[N.length()-1]-'0')<<endl;
	}
	return 0;
}