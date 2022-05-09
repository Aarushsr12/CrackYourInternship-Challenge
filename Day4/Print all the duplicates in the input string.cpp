/**
 *   author: orz_max    
**/
#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define vll vector<ll>
#define vi vector<int> 
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define MOD 1000000007
#define endl '\n'
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "<< x << endl;
#else
#define debug(x) 
#endif 
#define orzmax ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------*/
ll power(ll a,ll b){  if (b == 0) return 1; ll res = power(a, b / 2);if (b % 2)return res * res * a;else return res * res;}
ll powermod(ll a,ll b){ll ans=1;while (b>0){if (b&1){ans = (ans * a)%MOD;}a = (a * a)%MOD;b >>=1;} return ans;}
int popcount(int x){return __builtin_popcount(x);}
ll gcd(ll a,ll b){ if(b == 0){ return a; } return gcd(b, a%b);} 
bool prfSq(int n){ if(ceil(double(sqrt(n)) == floor(double(sqrt(n))))){ return 1; }else{ return 0;}}
bool isPrime(ll n){ if(n == 1){return false;}for(int i=2; i*i<=n; ++i){if(n%i == 0){return false;}}return true;}
ll divisorcnt(ll n){ll count=0;for(ll i=1; i * i<=n; ++i){if(n%i == 0){count+=1;if(n/i != i){count+=1;}}}return count;}
ll nxt_prime(ll n){ll temp=0;while(1){ll t=0;for(ll i=2; i*i<=n; ++i){if(n%i == 0){t=1;break;}}if(t==0){break;}else{n++;}}return n;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/*--------------------------------------------------------------------------------------------------------------------------*/

void test_case()
{
 	string str;
 	cin>>str;

 	unordered_map<char,int> m;
 	for(int i=0; i<str.size(); ++i){
 		m[str[i]]++;
 	}	
 	for(auto it : m){
 		if(it.ss > 1){
 			cout<<it.ff<<" "<<it.ss<<endl;
 		}
 	}
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    orzmax;

    ll tt;
    cin >>tt;
    for(ll i=0; i<tt; ++i)
        test_case();
   
   return 0;
}
