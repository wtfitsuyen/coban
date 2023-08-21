#include<bits/stdc++.h>
using namespace std;

const int maxN=1e6+7;
int n,a[maxN];

void InsertionSort(int a[],int n)
{
    for(int i=1;i<=n;i++){
        int index = i; // ktra phần tử thứ i có thể chèn vào danh sách đã sx phía trước hay không
        int value = a[i]; // lấy gtri cần chèn ra và để vtri i rỗng(xem là vậy) để đẩy số phía trước lên nếu cần
        while(index > 1 && a[index-1] > value){
            a[index] = a[index-1]; // đẩy lên để chừa chỗ chèn gtri cần chèn vào
            index--; // trừ ra để tiếp tục chạy for ktra cái phía trước lớn hay bé hơn gtri cần chèn
        }
        a[index] = value; // chèn vào (hoặc là giữ nguyên nếu nó lớn hơn danh sách ĐÃ SẮP XẾP phía trước)
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    InsertionSort(a,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}


// SẮP XẾP CHÈN (chèn 1 phần tử vào 1 danh sách đã được sắp xếp (dù chỉ có 1 phần tử thì cũng được xem là danh sách))

//O(n^2)