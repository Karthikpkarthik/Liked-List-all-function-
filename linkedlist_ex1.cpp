#include<iostream>

using namespace std;

class node {
    public:
    int value;
    node* next;
    node(int value)
    {
        this->value=value;
        next=nullptr;
    }
};
class linkedlist{
    private:
   
    node* head;
    node* tail;
    int length;
    public:
     
    linkedlist(int value)
    {
        node* newnode=new node(value);
        head=newnode;
        tail=newnode;
        length=1;
    }
    ~linkedlist()
    {
        node*temp=head;
        while(temp!=nullptr)
        {
            head=head->next;
            delete temp;
            temp=head;
        }
    }
    void append(int value)//func used to append the node to last of the linkedlist 
    { node* newnode =new node(value);
      node*temp=head;
      if (length==0)
      {
        head=newnode;
        tail=newnode;
      }
      else
      {
        tail->next=newnode;
        tail=newnode;
      }
      
       length++; 
    }
    void print_list()//print the linked-list
    {
        node* temp=head;
        while(temp!=nullptr)
        {
         cout<<temp->value<<endl;
         temp=temp->next;
        }
    }
    void preappend(int value)//append the node to first  
    {  node* newnode=new node (value);

       if (length==0){
        head=newnode;
        tail=newnode;
       }
       else {
        newnode->next=head;
        head=newnode;
       }
       length++;
    }
    void deleteFirst()//delete the first node of linked list
    {  node* temp=head;
        if (length==0){return;}
        else if (length==1){
          head=nullptr;
          tail=nullptr;  
        }
        else{
            head=temp->next;
            temp->next=nullptr;
        }
        delete temp;
        length--;
    }
    void deletlast()//delete the last node of the linkedlist 
    {
        node * pre =head;
        node * temp=head;
        if (length==0)return;
        else{
            while(temp->next)
            {
                pre=temp;
                temp=temp->next;
            }
            tail=pre;
            tail->next=nullptr;
            length--;
        }
        if (length==0)
        {
        tail=nullptr;
        head=nullptr;
        }
        delete temp;
        

    }
    bool insert(int index,int value)
    {
        node*temp=head;
        node*pre=temp;
        if (index>=0 || index<length)
        {
            if (index==0)
            {
                preappend(value);
                return true;
            }
            else{
                node *newnode=new node(value);
                for (int i=0;i<index;i++)
                {
                    pre=temp;
                    temp=temp->next;
                    if (i==index-1)
                    {
                        pre->next=newnode;
                        newnode->next=temp;
                        return true;
                    }
                }
            }
        }
        else return false;
    }
    node*get(int index)
    {if (index>=0 || index<length){
        node*temp=head;
        for (int i =0;i<index;i++)
        {
            temp=temp->next;
        }
        return temp;
    }
    return nullptr;
    }
    bool set(int index,int value)
    {
        node*temp=get(index);
        if(temp)
        {
            temp->value=value;
            return true;
        }
        return false;
    
    }
    void deleteNode(int index)
    {if (index>=0 || index<=length){
      if (index==0)
      {
       return deleteFirst();
      }
      else if (index==length)
      {
        return deletlast();
      }
      else{
       node* temp=get(index-1);
       node*pre=temp;
       temp=temp->next;
       pre->next=temp->next;
       delete temp;
       length--;
      }
    }
    }
    void revrse ()
    {
        node *temp=head;
        head=tail;
        tail=temp;
        node*after =temp->next;
        node*before=nullptr;
        for (int i=0; i<length;i++)
        {   after =temp->next;
            temp->next=before;
            before=temp;
            temp=after;
        }
    }
    void get_length(void)
    {
        cout<<length<<"\n";
    }
    node* get_head()
    { return head;}
    node* get_tail()
    {return tail;}
};

int main()
{
 linkedlist *mylinkedlist=new linkedlist(11);
  mylinkedlist->append(12);
 // mylinkedlist->print_list();
  mylinkedlist->set(1,45);
  mylinkedlist->insert(2,66);
    mylinkedlist->append(23);
     mylinkedlist->append(34);
  mylinkedlist->print_list();
//   mylinkedlist->deleteNode(0);
//   cout<<"after the delete node function"<<endl;
//    mylinkedlist->print_list();
   cout <<"after the reverse of the linked list"<<endl;
   mylinkedlist->revrse();
   mylinkedlist->print_list();
   //cout<<mylinkedlist->get_head()->value;
}