#include <bits/stdc++.h>
using namespace std;
string suma(string a, string b){
	string menor, mayor,res="";
	if(a.size() >= b.size()){
		menor = b;
		mayor = a;
	}
	else{
		menor = a;
		mayor = b;
	}
	int i=mayor.size()-1;
	int j=menor.size()-1;
	int sum = 0,carry = 0 ,aux;
	
	while(i>=0){
		if(j<0) aux = 0;
		else aux = menor[j]-'0';
		sum =  mayor[i] - '0' + aux + carry;
		res = to_string(sum%10) + res;
		carry = sum/10;
		i--;
		j--;
	}
	
	if(carry) res= to_string(carry)+res ;
	return res;	
}
string producto(string a, string b){
	string menor, mayor,res="";
    if(a == "0" || b == "0") return "0";
	if(a.size() >= b.size()){
		menor = b;
		mayor = a;
	}
	else{
		menor = a;
		mayor = b;
	}
	
	int i=mayor.size()-1;
	int j=menor.size()-1;
	
	int pro = 0,carry = 0,auxi,auxj,sum;

	while(j >= 0){
		auxi = i;
		auxj = j;
		
		pro = carry;
		while(auxi < mayor.size() && auxj >= 0 ){
			
			pro += (mayor[auxi]-'0')*(menor[auxj]-'0');
			auxi++;
			auxj--;
			
		}
		carry = pro/10;
        res = to_string(pro%10) + res;
	
		if(i == 0) j--;
		else i--;
    }
	if(carry) res = to_string(carry) + res ;	
	return res;
}
int main(){
    
    string sum[23][160],pro;
    int n,a;
		
		for(int j = 1 ; j <= 20 ;j++){
            sum[j][0] = '0';
            pro= '1';
			for(int i = 1 ; i <= 155 ; i++){
				pro = producto( pro , to_string(j));
				sum[j][i] = suma( sum[j][i-1] , producto(pro,to_string(i)) ) ;
				
			}
        }
		while(cin>>n){
        cin>>a;
        if(a == 0) cout<<"0"<<endl;
        else
		cout<<sum[a][n]<<endl;	
        }
	return 0;
}
