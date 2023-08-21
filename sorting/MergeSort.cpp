#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6+7;
int n,a[maxN];

void Merge(int a[],int l, int m, int r) // dồn 2 mảng vào 1 
{
    int n1 = m - l + 1;
//bắt buộc vừa đủ số phần tử để ko duyệt dư (gtri null / 0) 
//(có thể cộng thêm 1 để bắt đầu duyệt từ 1 thay vì 0 nhưng phải sửa đôi chút gtri bắt đầu phía dưới (phía sau thì ko cần sửa vì tràn bộ nhớ))
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++){
        L[i] = a[l+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = a[m+1+i];
    }
    int i=0, j=0, k=l;  // k=l vì bắt đầu duyệt từ l, i=j=0 vì phía trên lấy 0(duyệt từ đầu)
    while(i<n1 && j<n2){ // lấy số <= để vào trước
        if(L[i] < R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){ // bởi vì m=(l+r)/2 nên chênh lệch nhiều nhất là 1 -> chỉ còn nhiều nhất 1 tập là chưa duyệt hết
        a[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int a[], int l, int r) //chia để sort
{
    int m = (l+r)/2;
    if(l<r){
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
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

    MergeSort(a,1,n);

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}


//SẮP XẾP TRỘN (chia mảng cần xếp thành 2 nửa, sắp xếp từng nửa, ghép lại )

// độ phức tạp xấu nhất O(n log n)
// dựa theo giải thuật "chia để trị"
// có thể kết hợp vs các giải thuật sắp xếp khác để đạt kq tốt hơn (nhưng mệt duma)