#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class linkedList{
    node* head;
public:
    linkedList(){
        head = new node;
        head->data = 0;
        head->next = nullptr;
    }

void addFirst (int val){
    node* temp = new node;
    temp->data = val;
    if (head == nullptr){
        temp->next = nullptr;
        head = temp;
    } else{
        temp->next = head;
        head = temp;
    }
}
void display(){
    while (head != nullptr) {
    cout << head->data << endl;
    head = head->next;
        
    }
}
};


int main(){
    linkedList list1;
    list1.addFirst(40);
    list1.addFirst(40);
    list1.addFirst(40);
    list1.addFirst(40);
    list1.addFirst(40);
    list1.display();
return 0;
}
