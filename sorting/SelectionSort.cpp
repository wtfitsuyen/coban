#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6+7;
int n,a[maxN];

void SelectionSort(int a[], int n)
{
    for(int i=1;i<=n;i++){
        int minIndex=i;
        for(int j=i+1;j<=n;j++){
            if(a[minIndex] > a[j]){
                minIndex=j;
            }
        }
        if(minIndex != i) swap(a[minIndex], a[i]);
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    SelectionSort(a,n);
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
}


// SẮP XẾP CHỌN (chọn một phần tử và cho nó vào vtri nó sẽ đứng trong danh sách đã sx cuối cùng)
                // vd chọn số nhỏ nhất và cho nó vào ô thứ 1(hoặc 0), chọn số nhỏ thứ 2 và cho nó vào ô 2(hoặc 1)

// O(n^2)
