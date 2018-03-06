#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,n ,y = -1 ,o = 0;
    cin>>c;
    for(int con=1 ; con<=c;con++){	
    	cin>>a>>b;
        y = -1 ;
        o = 0;
        n = log(b-a)/log(2);
    	a = a>>n;
        b = b>>n;
        for(a; a <= b ; a++){
            o = o | a;
            y = y & a;
        }
        
        y = y << n;
        o = (o << n) | (( 1LL << n ) -1 );
        
		cout<<"Case "<<con<<": " << o << " " << y << endl; 
	}
	return 0;
}
