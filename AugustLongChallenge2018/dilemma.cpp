#include <iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T>0){
        string S;
        cin>>S;
        int len = S.length();
        int first = (S[0] - '0');
        for(int i=1; i<len; i++){
            first = first ^ (S[i] - '0');
        }
        if(first == 0)
            cout<<"LOSE"<<endl;
        else if(first == 1)
            cout<<"WIN"<<endl;
        T--;
    }
}