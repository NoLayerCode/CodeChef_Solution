#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#ifndef max
#define max 1000000
#endif

int main(){
	int a[max]={0},i,t;
	cin>>t;
	while(t--){
		cin>>i;
		a[i]++;
	}
	i = 0;
	cout<<endl;
	while(i<max){
		while(a[i]){
			cout<<i<<endl;
			a[i]--;
		}
		i++;
	}
	return 0;
}