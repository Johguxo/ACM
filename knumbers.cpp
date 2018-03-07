#include<bits/stdc++.h>
using namespace std;

vector <long long> knumbers;
long long potencia[8] = {1,10,100,1000,10000,100000,1000000,10000000};

int main(){
    int cant,sup,t,inf;
    long long k,n,n2,k2,k3,n3;
	string numero;
    knumbers.push_back(5292);
	for(int i = 4;i <= 40010 ;i++){
        
		numero = to_string(i*i);
		t = numero.size()/2;
        if(t%2 == 0){
            k = (i*i)/potencia[t];
            n = (i*i) % potencia[t];
            k2 = (i*i) / potencia[t+1];
            n2 = (i*i) % potencia[t+1];
            k3 = (i*i) / potencia[t-1];
            n3 = (i*i) % potencia[t-1];
            
            if(n!=0 && k!=0 && n + k == i){
                knumbers.push_back(i);
                //cout<<n<<" "<<k<<endl;
            }
            else if(n2!=0 && k2!=0 && n2 + k2 == i){
                //cout<<n2<<" "<<k2<<endl;
                knumbers.push_back(i);
           }
           else if(n3!=0 && k3!=0 && n3 + k3 == i){
                //cout<<n3<<" "<<k3<<endl;
                knumbers.push_back(i);
           }
        }
        else{
                k = (i*i) / potencia[t];
                n = (i*i) % potencia[t];
                k2 = (i*i) / potencia[t+1];
                n2 = (i*i) % potencia[t+1];
                k3 = (i*i) / potencia[t-1];
                n3 = (i*i) % potencia[t-1];
           
           if(n!=0 && k!=0 && n + k == i){
                knumbers.push_back(i);
                //cout<<n<<" "<<k<<endl;
           }
           else if(n2!=0 && k2!=0 && n2 + k2 == i){
                //cout<<n2<<" "<<k2<<endl;
                knumbers.push_back(i);
           }
           else if(n3!=0 && k3!=0 && n3 + k3 == i){
                //cout<<n3<<" "<<k3<<endl;
                knumbers.push_back(i);
           }
            
        }
		
	}
	//for(int i = 0; i < knumbers.size() ;i++)   cout<<knumbers[i]<<endl;
	cin>>cant;
    sort(knumbers.begin(),knumbers.end());
    for(int i = 1; i <= cant; i++){
        cin>>inf>>sup;
        cout<<"case #"<<i<<endl;
        int cont = 0;
        for(int i = 0; i < knumbers.size() ;i++){
            if(knumbers[i] <= sup && knumbers[i] >= inf )  {
                cout<<knumbers[i]<<endl;
                cont++;
            }
        }
        if(!cont) cout<<"no kaprekar numbers"<<endl;
        if(i != cant) cout<<endl;
    }    
	return 0;
}
