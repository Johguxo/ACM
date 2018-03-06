#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int cases, a , m , n;        
    vector < bool > mask, aux;
    cin >> cases;
    while( cases -- ){

        cin >> n >> m;
        mask.resize( 1 << n );
        fill( mask.begin(), mask.end(), true);
        
        while( m -- ){
            cin >> a;
            mask[ a - 1 ] = false;
        }
        int sum = 0;
        while( n > 0 ){
            
            aux.clear();
            for( int i = 0 ; i< ( 1 << n ) ; i += 2 ){
                if( mask[ i ] && mask[ i + 1 ] ) aux.push_back( true );
                else if( mask[ i ] || mask [ i + 1 ] ) {
                    
                    aux.push_back( true ); 
                    sum ++;
                    
                }
                else aux.push_back( false );
            }
            
            mask = aux;
            n--;
        }
        cout << sum << endl;
    }
    
    return 0;
}

