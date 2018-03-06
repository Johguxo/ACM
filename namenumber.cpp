#include <bits/stdc++.h>
using namespace std;

int divisiones[14] = {2,3,5,7,9,10,12,14,16,17,19,21,23,24};
string palabras[4] = {" shata", " hajar"," lakh"," kuti"};

int main(){
    long long n;
    int cont = 0;
    int t;
    while(cin>>n){
        cont++;
        printf( "%4d.",cont );
        t = to_string(n).size();
        if(!n) cout<<" " <<n;
        for(int i = 13; i >= 0 ; i-- ){
            if( divisiones[i] < t ){
                long long k = n/pow(10,divisiones[i]);  
                if( k ){
                    cout << " " << k;
                    cout << palabras[i%4];
                    n = n-k*pow(10,divisiones[i]);
                }
                else if( i%4 == 3 ) cout << palabras[i%4];
                
            }
        }
        if(n)
        cout << " " << n;
        cout << endl;
    }
	return 0;
}
