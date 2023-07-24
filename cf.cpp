#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define N 5000000
vector<int>graph[N];
vector<bool> vis(N);
int phi[N+2];
unsigned ll phisum[N+2];
void PHI()
{
	for(int i=1; i<=N; i++) phi[i]=i;
	for(int i=2; i<=N; i++)
	{
		if(i==phi[i])
		{
			for(int j=i; j<=N; j+=i)
			{
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
}
int main()
{
	PHI();
    //in sha Allah I have to do it
    fastio
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
	phisum[1]=0;
	for(int i=2; i<=N; i++) 
	{
		phisum[i]=(unsigned ll)phi[i]*(unsigned ll)phi[i]+phisum[i-1];
	}
	int t;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		int l,r;
		cin>>l>>r;
		ll ans=phisum[r]-phisum[l-1];
		cout<<"Case "<<i<<": "<<ans<<endl;
	}

	//Hey i love you
}
