#include<iostream>
using namespace std;

void merge_Sort(int *arr,int si,int ei){
    
    if(si>=ei)
        return;
    
    
    int mid=(si+ei)/2;
    
    // Calling recursion on two half
    merge_Sort(arr, si, mid);
    merge_Sort(arr, mid+1, ei);
    
    int merge[ei-si+1];//new array to add two sorted array
    
    int ind1=si,ind2=mid+1;
    int ind3=0;// index for answer array
    while(ind1<=mid && ind2<=ei){
        
        if(arr[ind1]>arr[ind2]){
            merge[ind3]=arr[ind2];
            ind2++;
            ind3++;
        }
        else{
            merge[ind3]=arr[ind1];
            ind1++;
            ind3++;
        }
        
        
    }
    //if array 1 is not empty
    if(ind1!=mid+1){
        while(ind1<=mid){
            merge[ind3]=arr[ind1];
            ind1++;
            ind3++;
            
            
        }
    }
    // if array 2 is not empty
    if(ind2!=ei+1){
        while(ind2<=ei){
            merge[ind3]=arr[ind2];
            ind2++;
            ind3++;
            
            
        }
    }
    // copying elements back to orginal array
    ind3=0;
    for(int i=si;i<=ei;i++){
        arr[i]=merge[ind3];
        ind3++;
    }
    return;
    
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        merge_Sort(arr, 0, n-1);
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        
        
        
    }
    
    
    return 0;
}
