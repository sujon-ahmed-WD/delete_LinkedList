 #include<bits/stdc++.h>
 using namespace std ;
 class Node{
    public:
    int val=val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
 };
 void add_tail(Node*&head,Node*&tail,int val)
 {
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
 }
 void delete_any_pos(Node*&head,int idx)
 {
    Node* temp=head;
    for(int i=1; i<idx;i++)  // o tahaka soro 
    {
        temp=temp->next;
    
    }
    Node* deletenode=temp->next;
    //  temp->next=deletenode->next;
    temp->next=temp->next->next;
     delete deletenode;


 }
 void print (Node*head)
 {
    Node*tmp=head;
    while(tmp!=NULL)
    {
        // cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
 }
 int main()
 {
    Node*head=NULL;
    Node*tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        add_tail(head,tail,val);
    }
    delete_any_pos(head,2);
    print(head);
    return 0;
 }