#include<bits/stdc++.h>
using namespace std;

const int maxN =1e6+7;
int m;
int b[maxN];

void BubbleSort(int a[], int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    BubbleSort(b,m);
    for(int i=1;i<=m;i++){
        cout<<b[i]<<" ";
    }
}

// SẮP XẾP NỔI BỌT

// O(n^2) -> áp dụng cho dữ kiệu nhỏ (nhưng đây là giải thuật CHẬM NHẤT)
// so sánh 2 phần tử liền kề và swap nếu chúng ko theo thứ tự
// đưa các số lớn nhất về cuối dãy