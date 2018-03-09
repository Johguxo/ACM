#include<bits/stdc++.h>
using namespace std;
vector <string> numbers;
string n,repet,p;
int cont,i,j;

int main(){
	while(cin>>p>>i>>j){
		if(p == "0" && i==0 && j == 0) break;
		numbers.push_back(p);
		for(int h = 1; h <= i+10;h++){
			
			int t = p.size();
			string aux="";
			int cifras = 0;
			while(t > 0 && cifras<=10000){
				cont = 1;
				repet = p[t-1];
				
				while(p[t-1] == p[t-2]){
					cont++;
					cifras++;
					t--;
				}
				t--;
				cifras ++;
				aux = to_string(cont) + repet + aux ;
			}	
			numbers.push_back(aux);
			cout << numbers[h-1] << endl;
			p = aux;					
		}
		n  = numbers[i-1];
		cout<<n[numbers[i-1].size()-j-1]<<endl;
		numbers.clear();
	}
	return 0;
}
