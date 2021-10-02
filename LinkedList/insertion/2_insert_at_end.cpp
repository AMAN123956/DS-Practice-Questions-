// Insert at Front Linked List
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
// Insert at First
void pushAtFront(Node **head,int new_data){
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}
//Insert at End
void pushAtEnd(Node **head,int new_data){
    // Allocate a new Node
    Node *new_node= new Node();
    // Temp Pointing or referring to head
    Node *temp = *head;
    // If the head is null make new node as head node
    if(*head==NULL){
        *head=new_node;
    }
    else{
        new_node->next=NULL;
        new_node->data=new_data;
        // traverse the list through End
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void printList(Node *head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
void solve(){
  Node *head=NULL;
  cout<<"Inserting new node at head"<<"\n";
  pushAtFront(&head,2);
  printList(head);
  cout<<"\n";
  cout<<"Inserting new node at head"<<"\n";
  pushAtFront(&head,4);
  printList(head);
  cout<<"\n";
  cout<<"Inserting new node at End"<<"\n";
  pushAtEnd(&head,6);
  printList(head);
}
  
int main()
{ 
// ll t;
// cin>>t;
// while(t--)
solve();
  return 0;
}
