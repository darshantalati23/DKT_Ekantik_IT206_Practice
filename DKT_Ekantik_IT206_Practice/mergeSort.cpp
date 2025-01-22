#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> mrgSrt(vector<ll> v, int low, int high) {
    vector<ll> f, s;
    int mid;
    if(low<high) {
        mid=(low+high)/2;
        f=mrgSrt(v, 0, mid);
        s=mrgSrt(v, mid+1, high);
    }
    int p1=0, p2=mid+1;
    for (int i=0; i<=high; i++) {
        if (p1>mid+1) {
            v[i]=s[p2];
            p2++;
        }
        else if (p2>high) {
            v[i]=f[p1];
            p1++;
        }
        else if (f[p1]<=s[p2-(mid+1)]) {
            v[i]=f[p1];
            p1++;
        }
        else {
            v[i]=s[p2-(mid+1)];
            p2++;
        }
    }
    return v;
}

int main() {
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<ll> net=mrgSrt(v, 0, n-1);
    for (int i=0; i<n; i++) cout << v[i] << " ";
}