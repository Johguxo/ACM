#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    vector < pair < float , pair<int,int> > > arr;
    
    while(cin>>n>>k){
        
    for(int den = 1; den <= n; den++){
     for(int num = 1; num <= den; num++){
         if(__gcd(num,den) == 1)
         arr.push_back( make_pair( 1.0*num/den, make_pair(num,den) ) );
     }
    }
    
    sort(arr.begin(),arr.end());
    
   /* for(int i = 0; i < arr.size(); i++)
        cout<<arr[i].second.first<<"/"<<arr[i].second.second<<"   ";
    
    cout << endl;*/
    cout<<arr[k-1].second.first<<"/"<<arr[k-1].second.second<<endl;
    arr.clear();
    
    }
    
	
	return 0;
}
