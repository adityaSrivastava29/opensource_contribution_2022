#include<iostream>
#include<stdlib.h>
using namespace std ;
struct node{       //create a user data type 
    int data ;
    node *next ;
};
void *insert_next(node *); //function to insert node in next position
struct node *insert_begin(node *); // function to insert node at beginning position
void display(node *); // function to show or dsiplay all the nodes
int count = 0 ;  // variable to store length of linkedlist 
int main()
{
    struct node *head = NULL , *neww ;
    neww = (struct node *)malloc(sizeof(struct node));
    count++ ;
    cout<<"enter the fisrt data for insertion :- ";
    cin>>neww->data;
    cout<<"\n";
    neww->next=0;
    head = neww ; // you created your first node 
     
    int choice ; //choice for insertion operations
    do{ 
        cout<<"\nenter 1. for insert next node \n 2. for insert node at begin \n 3. for display all nodes \n 0. for exits!!!"<<endl;
        cout<<"enter your choice :- ";
        cin>>choice ;
        cout<<"\n";
        switch(choice)
        {
            case 1:
               insert_next(head);
               break;
            case 2:
               insert_begin(head);
               break ;
            case 3:
               cout<<"\nall nodes are :- ";
               display(head);
               break ;
        }
    }while(choice!=0);

return 0 ;
}
void *insert_next(node *head)
{
    struct node *temp ;
    struct node *neww ;
    neww = (struct node *)malloc(sizeof(struct node));
    count++ ;
    cout<<"\nenter the next data :- ";
    cin>>neww->data ;
    cout<<"\n";
    neww->next = 0 ;
    temp = head ;
    while(temp->next !=0)
    {
        temp = temp->next ;
    }
       temp->next = neww ;
}
struct node *insert_begin(node *head)
{
  struct node *neww ;
  neww = (struct node *)malloc(sizeof(struct node));
    count++ ;
    cout<<"\nenter data for beginning :- ";
    cin>>neww->data;
    cout<<"\n";
    neww->next = head ;
    head = neww ;
    return head ;
}
void display(node *head)
{   
    struct node *temp ;
    temp = head ;
    while(temp !=0)
    {    
        cout<<temp->data<<" ";
        temp = temp->next ; 
    }
     cout<<"\n\n your total nodes are :- "<<count<<endl;
}