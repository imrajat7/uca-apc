#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
  int data;
  cin>>data;
  Node *head = NULL;
  Node *tail = NULL;
  while(data!=-1){
    Node *newNode = new Node(data);
    if(head==NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail->next = newNode;
      tail = newNode;
    }
    cin>>data;
  }
  return head;
}

Node* insertNode(Node *head,int i,int data){
  Node *newNode = new Node(data);
  int count = 0;
  Node *temp = head;
  if(i==0){
    newNode->next = head;
    head = newNode;
    return head;
  }
  while(temp!=NULL&&count<i-1){
    temp = temp->next;
    count++;
  }
  if(temp!=NULL){
    newNode->next = temp->next;
    temp->next = newNode;
  }
  return head;
}

int findLength(Node *head){
  Node *temp = head;
  int count = 0;
  while(temp!=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

void printIthNode(Node *head,int i){
  Node *temp=head;
  int length = 0;
  while(temp!=NULL){
    if(length == i)
    {
      cout<<temp->data<<endl;
      break;
    }
    length++;
    temp = temp->next;
  }
}

Node* deleteNode(Node *head,int i){
  Node *temp = head;
  int count = 0;
  if(i==0){
    Node *a = temp;
    if(temp->next!=NULL){
      head = temp->next;
    }else{
      head=NULL;
    }
    delete a;
    return head;
  }
  while(temp!=NULL&&count<i-1){
    temp = temp->next;
    count++;
  }
  while(temp!=NULL){
    Node *a = temp->next;
    if(temp->next==NULL)
    return head;
    else if(a->next!=NULL){
      Node *b = a->next;
      temp->next = b;
    }else{
      temp->next = NULL;
    }
  }
  return head;
}

void printNode(Node *head){
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
  Node *newHead = takeInput();
  printNode(newHead);

  int insertNum;
  cin>>insertNum;

  newHead = insertNode(newHead,0,insertNum);
  printNode(newHead);

  cout<<"The length of list is "<<findLength(newHead)<<endl;
  printIthNode(newHead,0);

  newHead = deleteNode(newHead,0);
  printNode(newHead);

  return 0;
}
