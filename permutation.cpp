#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> letras;
    string a;
    while(cin>>a){
        if(a == "#") break;
        int t = a.size();

        if(next_permutation(a.begin() , a.end())){
            cout<<a<<endl;
            }
        else cout<<"No Successor"<<endl;
    }    
	return 0;
}
