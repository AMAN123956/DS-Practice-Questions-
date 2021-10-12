// Detect loop in Linked List and Find the First Node of Loop(Floyd's Cycle Algorithm)
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

Node* firstNodeOfCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    int count=0;
    int loopExists=0;
    while(slow && fast && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow->data==fast->data){
            loopExists=1;
            break;
        }
    }
    if(loopExists==1){
        fast=head
        while(slow->data!=fast->data){
            fast=fast->next;
            
        }
        return fast;
    }
    else{
        return NULL;
    }
    
}
