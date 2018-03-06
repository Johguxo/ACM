#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minimo = 1<<20,l,r,x,cont=0,maximo=-10,sol=0;
    vector <int> coins;
    int st = 0;
    cin>> n >> l >> r >> x ;
   
    while(cin >> n){
        coins.push_back(n);   
        
    }

    n = coins.size();
    
    for(int i = 0 ; i < (1<<n); i++){
        int sum = 0;
        cont = 0;
        minimo = 1<<20;
        maximo=-10;
        
        for(int j = 0; j < n ; j++ ){
            
            if(i & (1 << j)) {
                sum = sum + coins[j];
                cont++;
                maximo = max(coins[j],maximo);
                minimo = min(coins[j],minimo); 
            }
            
            
            
        }
        
        if(cont>=2 && sum>=l && sum<=r && (maximo-minimo) >= x )   sol++;
        
    }
    
    cout << sol << endl;
}
