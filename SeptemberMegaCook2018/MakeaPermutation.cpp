#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <iterator>
#include<algorithm>
using namespace std;
int main(){
	map <long int, int> seq;
	int T,N;
	long int ip;
	cin>>T;
	while(T--){
		cin>>N;
		int i = 0,count=0;
		while(i<N){
			cin>>ip;
			// cout<<"took ip"<<endl;
			if(seq.find(ip)!=seq.end()){
				seq.find(ip)->second++;
			}else if(ip>N){
				seq.insert(pair <long int ,int>(ip,1));
			}
			else {
				seq.insert(pair <long int ,int>(ip,0));
			}
			i++;
		}
		map<long int, int>::iterator it;
		it = seq.begin();
		while(it!=seq.end()){
			count += it->second;
			it++;
		}
		cout<<count<<endl;
		seq.clear();
	}
	return 0;
}