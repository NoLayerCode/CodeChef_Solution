#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int T,N,K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		// long int A[N]; 
		int i = 0,ip;
		while(i < N){
			cin>>ip;
			if(ip<=K){
				K-=ip;
				cout<<1;
			}else
				cout<<0;
			i++;
		}
		cout<<endl;
	}
	return 0;
}