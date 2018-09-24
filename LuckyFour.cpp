#include <iostream>
using namespace std;

int main(){
	int T;
	string N;
	cin>>T;
	while(T--){
		cin>>N;
		long int i = 0,count = 0;
		while(N[i] != '\0'){
			if((N[i]-'0')==4)
				count++;
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}