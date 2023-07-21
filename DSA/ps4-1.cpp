//https://codeforces.com/group/7mxf4oQFY7/contest/457459/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define dbl double
#define nl ("\n")
#define all(x) x.begin(), x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector <ll> vec;
    for(int i=0;i<n;i++){
        ll d;cin>>d;
        vec.pb(d);
    }

    ll q;cin>>q;
    vector <ll> qvec;
    for(int i=0;i<q;i++){
        ll d;cin>>d;
        qvec.pb(d);
    }

    ll sum = 0;
    for(int i=0;i<n;i++){
        sum+=vec[i];
        vec[i]=sum;
    }
    
    for(int i=0;i<q;i++){
    int index = -1;
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(vec[mid]>qvec[i]){
            end = mid - 1;
        }else if(vec[mid]<qvec[i]){
            start = mid + 1;
        }else{
            index = mid;
            break;
        }
    }
    if(index == -1){
    index = start;
    }

    cout<<index+1<<nl;
    }
    return 0; 
}