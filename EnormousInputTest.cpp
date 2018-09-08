#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;
int main(){
	long int n,k,ip,count=0;
	cin>>n>>k;
	while(n--){
		cin>>ip;
		if(ip%k == 0){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}