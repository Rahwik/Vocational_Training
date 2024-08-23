#include<iostream>
using namespace std;

class listnode
{
    public:
    int val;
    listnode* next;
    listnode(int x):val(x),next(NULL){}
};

listnode* swappairs(listnode* head){
    if(!head||!head->next)return head;

    listnode* newhead =  head->next;
    listnode* prev = NULL;
    while(head&&head->next)
    {
        listnode* first = head;
        listnode* second = head->next;

        //swap
        first->next = second->next;
        second->next=first;
        if(prev){
            prev->next = second;
        } else {
            newhead = second;
        }
        //move to the next pair
        prev = first;
        head=first->next;
    }
    return newhead;
}

//helper code for linked list
void printlist(listnode* head)
{
    while(head != NULL)
    {
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    listnode* head= new listnode(1);
    head->next = new listnode(2);
    head->next->next = new listnode(3);
    head->next->next->next = new listnode(4);
    head->next->next->next->next = new listnode(5);


    cout << "Original list: ";
    printlist(head);

    head = swappairs(head);

    cout << "List after swapping pairs: ";
    printlist(head);

    return 0;
}