#include<iostream>
using namespace std;
void xoakitu(int arr[],int &n,int k);
int main(){
    int arr[100] ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j)
            {
                if(arr[i]==arr[j]){
                xoakitu(arr,n,j);
                dem++;
                }
            }
        }
    }
    cout<<dem<<endl;
    return 0;
}
void xoakitu(int arr[],int &n,int k)
{
    for(int i=k;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}