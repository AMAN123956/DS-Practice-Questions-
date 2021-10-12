// Nth Node From End(Two Pointer)
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;
// Array is in descending order
int bsearch(int arr[],int l,int h,int pivot){
    int mid=0;
// cout<<l<<h<<k<<"\n";

   while(l<=h){
       mid=l+(h-l)/2;
    //  cout<<mid<<arr[mid];
       if(arr[mid]==pivot) {
        //   cout<<"here";
           return mid;
           break;
       }
       else if(arr[mid]>pivot){
          l=mid+1;
          continue;
          
       }
       else{
           h=mid-1;
           continue;
       }
   }
   
   return -1;
   
}
// Linked List Node
class Node{
    public:
    int data;
    Node *next;
};

void printList(Node *head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}

int nthNodeFromEnd(Node* head,int pos){
   Node* fast=head;
   Node* slow=head;
   
   for(int i=0;i<pos;i++) fast=fast->next;
   
   while(fast!=NULL){
       fast=fast->next;
       slow=slow->next;
   }
   return slow->data;
   
}
