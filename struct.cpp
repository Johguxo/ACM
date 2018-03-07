#include <bits/stdc++.h>
using namespace std;


struct alumno{

    int edad,tama;
    string codigo;
    void imprimir(){   cout<<edad<<" "<<tama<<" "<<codigo<<endl; }
    void make_alumno( int Edad , int Tama , string Codigo ){
        
        edad = Edad; tama = Tama ; codigo = Codigo;
        
    }
    alumno(){}
};

bool operator<( const alumno &a1 , const alumno &a2){
    
    if( a1.edad < a2.edad ) return true;
    if( a1.edad == a2.edad && a1.tama > a2.tama ) return true;
    return false;
}

bool operator==( const alumno &a1 , const alumno &a2){
    
    if( a1.codigo == a2.codigo ) return true;
    return false;
}

alumno operator*( const alumno &a1 , const alumno &a2){
    
    alumno res;
    res.make_alumno( a1.edad + a2.edad , a1.tama * a2.tama , a1.codigo + a2.codigo );
    return res;
}

vector <alumno> alumVec;


int main(){
    int edad,tama;
    string codigo;
    alumno vir;
    while( cin >> vir.edad >> vir.tama >> vir.codigo ){
        
        alumVec.push_back( vir );
        
    }
    
    sort( alumVec.begin(), alumVec.end() );
    
    for( int i = 0 ; i< alumVec.size() ; i++ ){
        
        alumVec[i].imprimir();
        
    }

    if( alumVec[0] == alumVec[ 1 ] ) {
        cout << "Repetido" <<endl;
        alumVec[1].imprimir();
        
    }
    cout << "Producto" << endl << "-----------" << endl;
    ( alumVec[ 2 ]*alumVec[ 3 ] ).imprimir();

    return 0;
}
