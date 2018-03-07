#include<bits/stdc++.h>
using namespace std;
vector <int> numbers;
string n,p,repet;
int cont;

int main(){
	while(cin>>p>>i>>j){
	if(p == 0 && i==0 && j == 0) break;
		numbers.push_back(p);
		for(int h = 1; h <= 1010;h++){
			t = p.size();
			while(t >= 0){
				cont = 1;
				repet = p[t-1];
				while(p[t-1] == p[t-2]){
					cont++;
					t--;
				}
				t--;
				p = repet + to_string(cont);
			}	
			numbers.push_back(p);					
		}
	n  = to_string(numbers[i-1]);
	cout<<n[j-1]<<endl;
	numbers.clear();
	}
	return 0;
}

