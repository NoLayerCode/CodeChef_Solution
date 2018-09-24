#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	int N,score_a=0,score_b=0,a,b,W,L=0;
	cin>>N;
	while(N--){
		cin>>a>>b;
		score_a+=a;
		score_b+=b;
		int max = (score_a>score_b) ? (score_a-score_b) : (score_b-score_a);
		if(L<max){
			L = max;
			W = (score_a>score_b) ? 1:2;
		}
	}
	cout<<W<<" "<<L;
	return 0;
}