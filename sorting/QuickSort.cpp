#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6+7;
int n, a[maxN];

void QuickSort(int a[], int l, int r)
{
    if(l >= r) return;
    int pivot = a[(l+r)/2];
    int i = l;
    int j = r;
    while(i<j){
        while(a[i] < pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    QuickSort(a,l,j);
    QuickSort(a,i,r);
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
    QuickSort(a,1,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}

//

//O(n log n)