#include <bits/stdc++.h> 
using namespace std;


void upheapify(vector<int>&arr,int index)
{
    int parent=(index-1)/2;
    if(index==0)
    return;
    
    if(arr[parent]<arr[index])
    {swap(arr[parent],arr[index]);upheapify(arr,parent);}
    else
    return;
    
}
void downheapify(vector<int>&arr,int index)
{
    int c1=2*index+1,c2=2*index+2;
    if(c1>=arr.size() && c2>=arr.size())
    return;
    
    if(c1>=arr.size())
    {
        if(arr[c2]>arr[index])
        {swap(arr[c2],arr[index]);downheapify(arr,c2);}
        
    }
    if(c2>=arr.size())
    {
        if(arr[c1]>arr[index])
        {swap(arr[c1],arr[index]);downheapify(arr,c1);}
        
    }
    
    
    if(arr[index]>=arr[c1] && arr[index]>=arr[c2])
    return ;
    
    if(arr[c1]>arr[c2])
    {swap(arr[index],arr[c1]);downheapify(arr,c1);}
    else
     {swap(arr[index],arr[c2]);downheapify(arr,c2);}
    
}

void insert(vector<int>&arr,int num)
{
    arr.push_back(num);
    upheapify(arr,arr.size()-1);
    
}
void deletetop(vector<int> &arr)
{
    swap(arr[0],arr[arr.size()-1]);
    arr.erase(arr.end()-1);
    downheapify(arr,0);
    
}
void deleteany(vector<int>&arr,int index)
{
    arr[index]=INT_MAX;
    upheapify(arr,index);
    deletetop(arr);
}
void constructHeap(vector<int>&arr)
{
    for(int i=arr.size()-1;i>=0;i--)
    {
        downheapify(arr,i);
        
    }
    
}
int main() {
 int i,j,k,n,m,t;
 
    vector<int>arr;
    cin>>n;
    for(i=0;i<n;i++)
    {cin>>k;arr.push_back(k);}
    
   int index=9,number=7;

    constructHeap(arr);
   for(i=0;i<arr.size();i++)
   cout<<arr[i]<<" ";
 
  
}
