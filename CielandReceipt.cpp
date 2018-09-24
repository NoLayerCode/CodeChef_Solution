#include <iostream>

using namespace std;

int main(){
	int menus[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
	int T,p;
	cin>>T;
	while(T--){
		cin>>p;
		int count = 0;
		do{
			if(menus[11]<=p){
				p-=menus[11];
				count++;
				continue;
			}
			for (int i = 0; i < 11; ++i){
				if(menus[i]<=p && menus[i+1]>p){
					p-=menus[i];
					count++;
					break;
				}
			}
		}while(p!=0);
		cout<<count<<endl;
	}
	return 0;
}