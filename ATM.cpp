#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;
int main(){
	float bal;
	int wd;
	cin>>wd>>bal;
	// cout<<(wd/5 == 0 && bal > wd)<<endl;
	// cout<<(wd%5 == 0 && bal-1 >= wd)<<endl;
	if(wd%5 == 0 && bal-1 >= wd){
		bal = bal-wd-0.50;
		cout<<fixed<<setprecision(2)<<bal;
	}else{
		cout<<fixed<<setprecision(2)<<bal<<endl;
	}
	return 0;
}