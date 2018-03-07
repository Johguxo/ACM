#include <bits/stdc++.h>
using namespace std;
vector <int> hn;

int main(){
	string car;
	int n;
	
	int cont = 0;
	
	hn.push_back(1);
	for(int i = 1;i < 10; i++){
		nuevo = 2*pow(3,i);
		hn.push_back(nuevo);
		nuevo = 2*pow(5,i);
		hn.push_back(nuevo);
		nuevo = 2*pow(7,i);
		hn.push_back(nuevo);
		nuevo = 3*pow(5,i);
		hn.push_back(nuevo);
		nuevo = 3*pow(7,i);
		hn.push_back(nuevo);
		nuevo = 5*pow(7,i);
		hn.push_back(nuevo);
		for(int j = 1;j< = 10;j++){
			nuevo = 2*pow(3,j)*pow(5,i);
			hn.push_back(nuevo);
			nuevo = 3*pow(2,j)*pow(5,i);
			hn.push_back(nuevo);
			nuevo = 5*pow(2,j)*pow(2,i);
			hn.push_back(nuevo);
			
			nuevo = 3*pow(2,j)*pow(7,i);
			hn.push_back(nuevo);
			nuevo = 2*pow(3,j)*pow(7,i);
			hn.push_back(nuevo);
			nuevo = 7*pow(3,j)*pow(2,i);
			hn.push_back(nuevo);
			
			nuevo = 3*pow(5,j)*pow(7,i);
			hn.push_back(nuevo);
			nuevo = 5*pow(3,j)*pow(7,i);
			hn.push_back(nuevo);
			nuevo = 7*pow(3,j)*pow(5,i);
			hn.push_back(nuevo);
			for(int k = 1;k < = 10; k++){
				nuevo = 2*pow(5,k)*pow(3,j)*pow(7,i);
				hn.push_back(nuevo);
				nuevo = 5*pow(2,k)*pow(3,j)*pow(7,i);
				hn.push_back(nuevo);
				nuevo = 3*pow(5,k)*pow(2,j)*pow(7,i);
				hn.push_back(nuevo);
				nuevo = 7*pow(5,k)*pow(3,j)*pow(2,i);
				hn.push_back(nuevo);
			}
		}
		
	}
	sort(hn.begin(), hn.end());
	for(int i = 0; i < hn.size();i++)
		cout<<hn[i]<<"-";	
	}
	while(cin>>n){
		if(!n) break;
		else if(n%10 == 1) car = "st";
		else if(n%10 == 2) car = "nd";
		else if(n%10 == 3) car = "rd";
		else car = "th";
		cout<<"The "<<n<<car<<" humble number is "<<hn[n-1]<<"."<<endl;
	}
	return 0;
}
