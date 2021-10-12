// Merge Two Sorted Linked List
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

Node* mergeTwoSortedList(Node* L1,Node* L2){
    if(L1==NULL) return L2;
    if(L2==NULL) return L1;
    
    Node* c1=L1;
    Node* c2=L2;
    Node* res=new Node(-1);
    Node* prev=res;
    
    while(c1 && c2){
        if(c1->data < c2->data){
            p->next=c1;
            c1=c1->next;
        }
        else{
            p->next=c2;
            c2=c2->next;
        }
        prev=prev->next;
    }
    
    if(c1!=NULL) prev->next=c1;
    else prev->next=c2;
}
