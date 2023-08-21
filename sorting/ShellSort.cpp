#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6+7;
int n,a[maxN];

void ShellSort(int a[],int n)
{
    for(int k = n/2 ; k>0 ; k/=2){
        for(int i = 1; i <= n; i += k){
            int index = i;
            for(int j = i+k; j <= n; j += k){
                if(a[j] < a[index]){
                    index = j;
                }
            }
            if( i != index) swap(a[i],a[index]);
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ShellSort(a,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}

//

// O(n)