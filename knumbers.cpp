#include<bits/stdc++.h>
using namespace std;

vector <int> knumbers;

void numbers(){
	int k,n,t;
	string numero;
	for(int i = 1;i <= 40010 ;i++){
		numero = to_string(i);
		t = numero.size()/2;
		k = pow(i,2)/pow(10,t);
		n = i-k*pow(10,t);
		if(n + k == i){
			knumbers.push_back(i);
		}
	}
	for(int i = 0; i < knumbers.size() ;i++){
		cout<<knumbers[i];
	}
}

int main(){
	numbers();
	return 0;
}
