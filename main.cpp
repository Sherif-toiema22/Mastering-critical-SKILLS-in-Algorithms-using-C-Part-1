#include <iostream>
using namespace std;
//int idx=0;
//int bin_Srch(int arr[],int k,int sz,int idx){
//    if(idx==sz){
//        return -1;
//    }
//    if(arr[idx]==k){
//        return idx+1;
//    }
//    else
//    {
//        bin_Srch(arr,k,sz,idx++);
//    }
//}
int fib(int n)
{

    if(n==1)
        return 1;
    if (n==2)
        return 2;
    else
        return fib(n-1)+ fib(n-2);
}
int main() {
    int x;
    cin>>x;
    cout<<fib(x);


//    string s="abcdef",d="abc";
//    cout<<Is_Prefix(s,d,0);
//    int arr[7]={1,2,5,3,5,2,1};
//    cout<<Palind(arr,0,7);
//    cout<<Suffix_Sum(arr,7,3);

    return 0;
}

//
////this example is very important!!!!!
//bool f=false;
//bool Is_Prefix(string s,string d,int n )
//{
//    if(n==d.size()){
//        f= true;
//    }
//    else{
//        if(s[n]!=d[n]){
//            return false;
//        }
//        Is_Prefix(s,d,n+1);
//    }
//    return f;
//}

//
//
//bool Palind(int arr[],int idx,int sz)
//{
//    if(idx==sz/2)
//    {
//        return false;//note that if you type return true , it will success----------> branch one
//    }
//    else{
//        if(arr[sz-1]!=arr[idx])
//            return false;
//        Palind(arr,idx+1,sz-1);
//    }
//    return true;// what is the difference between it and in the branch one
//
//
//}


//int sum=0;
//int Suffix_Sum(int arr[],int sz,int n)
//{
//    if(n==0)
//    {
//        return 0;
//    }
//    else{
//        sum+=arr[sz-1];
//        Suffix_Sum(arr,sz-1,n-1);
//    }
//    return sum;
//}

//
//int mx=0,k=0;
//void Left_Max(int arr[],int i,int sz)
//{
//    if(i==sz)
//        return;
//    else{
//        if(mx<=arr[i]){
//            mx=arr[i];
//        }
//        arr[i]=mx;
//        Left_Max(arr,i+1,sz);
//        cout<<arr[k++]<<' ';
//
//    }
//
//}

//int i=0;
//void Arr_Acc(int arr[],int len,int idx)
//{
//    if(idx==len)
//        return;
//    else
//    {
//        arr[idx]+=arr[idx-1];
//        Arr_Acc(arr,len,idx+1);
//    }
//    cout<<arr[i++]<<' ';
//
//}


//int arr_sum(int arr[],int len)
//{
//    if(len==0)
//    {
//        return 0;
//    }
//    if(len>=0){
//        arr_sum(arr,len-1);
//    }
//    sum+=arr[len-1];
//    return sum;
//}
//
//
//int i=0;
//void arr_inc(int arr[],int len)
//{
//
//    if(len==0)
//    {
//        return ;
//    }
//    if(len>=0){
//        arr_inc(arr,len-1);
//    }
//    arr[len-1]+=i++;
//
//}