#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define ull unsigned ll
#define take(n) ll int n;cin>>n
#define mod 1000000007
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define pp pop_back()
#define array(n,name) ll int *name=new ll int[n]
#define takearray(n,name) rep(i,0,n) cin>>name[i];
#define Zubin ios::sync_with_stdio(false);
#define Shah cin.tie(NULL);cout.tie(0);
#define nl cout<<endl;
using namespace std;

int xcor[4]={-1,0,0,+1};
int ycor[4]={0,-1,1,0};

ull int power(ull n,int x){
    if(x==0) return 1;
    return n * power(n,x-1);
}
void assign(ll int num,ll int *indexes,ll int n){
    num = min(n,num);
    indexes[num]++;
}

int main(){

    Zubin Shah

    int N;
    cin>>N;
    rep(i,1,N+1){
        cout<<"Case #"<<i<<": ";
        take(n);
        array(n,numbers);
        takearray(n,numbers);
        array(n+1,indexes);
        rep(i,0,n+1) indexes[i]=0;
        int current=0;
        int count=0;
        rep(i,0,n){
            int num = min(n,numbers[i]);  // greater than last element is same as last element
            indexes[num]++;        // tracking the tenure 
            if(numbers[i]>current){  // if number greater than previous current
                count+=1;
                if(count>current){
                    current++;       // update the bar
                    count-=indexes[current];   //tenure over
                }
            }
            cout<<current<<" ";
        }
        nl;
    }
return 0;
}