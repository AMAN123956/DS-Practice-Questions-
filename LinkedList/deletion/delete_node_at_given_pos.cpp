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
    new_node->next=NULL;
    new_node->data=new_data;
    // Temp Pointing or referring to head
    Node *temp = *head;
    // If the head is null make new node as head node
    if(*head==NULL){
        *head=new_node;
    }
    else{
        // traverse the list through End
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
// Insert at a Given Position
void pushAtIndex(Node **head,int new_data,int pos){
    // Allocate a new Node
    Node *new_node=new Node();
    // Temp pointing to head
    Node *temp=*head;
    if(pos==0){
        pushAtFront(head,new_data);
        return;
    }
    else{
        // If i starts from 0 then take i < pos-1
        // else if i starts from 1 then take i < pos 
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        new_node->next=temp->next;
        new_node->data=new_data;
        temp->next=new_node;
        return;
    }
    
}
// Deletion with Key given
void deleteNodeWithKey(Node **head,int key){
    // Allocate head Node
    Node *temp=*head;
    Node *prev=NULL;
    if(temp!=NULL && temp->data==key){
        *head=temp->next;
        delete temp;
        return;
    }
    else{
        while(temp!=NULL && temp->data!=key){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL) return;
        prev->next=temp->next;
        delete temp;
        return;
    }
}
// Delete Node At a given Position
void deleteNodeAtGivenPos(Node** head,int pos){
    // List empty
    if(*head == NULL) return;
    //  Allocate temp Node
    Node *temp=*head;
    Node *next=NULL;
    //Head needs to be removed
    if(pos==0){
        *head=temp->next;
        delete(temp);
        return;
    }
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    next=temp->next->next;
    delete(temp->next);
    temp->next=next;
    return;
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
  cout<<"\n";
  cout<<"Insert at a given Position(node,data,index)"<<"\n";
  pushAtIndex(&head,5,2);
  printList(head);
  cout<<"\n";
  cout<<"Delete a node with key"<<"\n";
  deleteNodeWithKey(&head,2);
  printList(head);
  cout<<"\n";
  cout<<"Delete node at a given position"<<"\n";
  deleteNodeAtGivenPos(&head,1);
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
