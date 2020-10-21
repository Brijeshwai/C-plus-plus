Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@Brijeshwai 
ret2jazzy
/
Hackerrank-30-days-of-Code-Cpp
0
36
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Hackerrank-30-days-of-Code-Cpp/Solutions/Day-15.cpp

drigg3r Create Day-15.cpp
Latest commit 0f30565 on Sep 26, 2016
 History
 0 contributors
60 lines (55 sloc)  1.14 KB
  
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
    
//------------------------------------------------------------

      Node* insert(Node *head,int data)
      {
          if(head == NULL){
              head = new Node(data);
              return head;
          }
          else if(head->next == NULL){
              Node *temp = new Node(data);
              head->next = temp;
              return head;
          }
          else{
              insert(head->next, data);
          }
          return head;
      }
      
//--------------------------------------------------------------

      void display(Node *head)
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
	mylist.display(head);
		
}
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
