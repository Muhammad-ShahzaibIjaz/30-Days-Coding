#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
        //Complete this method
        Node* new_node = new Node(data); 
        Node* last = head; 
        if (head == NULL)  
        {  
            head = new_node;  
            return head;  
        }   
        while (last->next != NULL)
        {
            last = last->next;  
        }
        last->next = new_node;
        return head;
      }

      void Display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.Display(head);
		
}