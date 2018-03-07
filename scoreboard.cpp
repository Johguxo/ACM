#include <bits/stdc++.h>
#include "cstdio"
using namespace std;


struct tres{
    int jugador,cant,penalty;
    tres(){}
};

bool operator<(const tres &p1 , const tres &p2){
    
    if( p1.cant > p2.cant ) return true;
    if( p1.cant == p2.cant && p1.penalty < p2.penalty ) return true;
    if( p1.cant == p2.cant && p1.penalty == p2.penalty && p1.jugador < p2.jugador ) return true;
    return false;
}


bool asistio[105];
pair < int, bool > score[105][11];

vector <tres > scor;


void limpiar(){
    
    scor.clear();
    memset( asistio , false , sizeof asistio );
    for( int i = 0 ; i < 105 ; i++   )
        for(int j = 0 ; j < 11 ; j++)
            score[i][j] = make_pair(0,false);
    
}

void imprimir(){
    
    for( int i = 1 ; i < 105 ; i++   ){
        
        if( asistio[ i ] ){
            int cont = 0;
            int penalty = 0;
            for( int j = 1 ; j < 10 ; j++ ){
                
                if( score[ i ][ j ].second ) {
                    penalty += score[ i ][ j ].first;
                    cont ++;
                }
            }
            tres a; a.jugador = i; a.cant = cont; a.penalty = penalty;
            scor.push_back( a );    
        } 
        
    }
    
    sort( scor.begin() , scor.end() );
    for( int i = 0 ; i < scor.size() ; i++  ){
        
        cout << scor[ i ].jugador<< " " << scor[ i ].cant << " " << scor[ i ].penalty << endl;
        
    }

    limpiar();
    
    
}

int main(){
    int jugador, problem, time;
    char caso;
    string ar;
    limpiar();
    cin >> jugador;
    getline(cin,ar);
    getline(cin,ar);
    while(getline(cin,ar)){
        
            if(ar[0]=='\0') {imprimir(),cout<<endl;continue;}
            stringstream in(ar);
            in >> jugador >> problem >> time >> caso;
            asistio[ jugador ] = true;
            if(!score[ jugador ][ problem ].second){
            
            if( caso == 'C'){
                score[ jugador ][ problem ].second = true;
                score[ jugador ][ problem ].first += time;
            }
            else if( caso == 'I' )
                score[ jugador ][ problem ].first += 20;
            
        }
        
    }
    imprimir();
    return 0;
}
