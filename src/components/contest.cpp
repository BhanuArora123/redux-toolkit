#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;
	cin>>t;
	while(t>0){
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll sum = 0;
	    ll one = 0;
	    ll two = 0;
	    for(ll i = 0;i<n;i++){
	        cin>>a[i];
	        sum += a[i];
	        if(a[i] % 3 == 1){
	            one ++;
	        }
	        else if(a[i]%3 == 2){
	            two++;
	        }
	    }
	    if(sum% 3 != 0){
	        cout<<-1<<endl;
	    }
	    else{
	        ll minOps = min(two,one);
	        two -= minOps;
	        one -= minOps;
	        if(two){
	            minOps += two - 1;
	        }
	        if(one){
	            minOps += one - 1;
	        }
	        cout<<minOps<<endl;
	    }
	    t--;
	}
	return 0;
}
