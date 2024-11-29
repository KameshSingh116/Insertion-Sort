#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
int i;
for(i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    /*We can also use 
    while(j>=0 && arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        j-- }
        */
    
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=key;

}

}

int main(){

    int n;
    int arr[100];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }

    insertion_sort(arr,n);

    cout<<"The sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    return 0;
    
}