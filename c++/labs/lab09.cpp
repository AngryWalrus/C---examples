#include<string>
#include<iostream>

using namespace std;

//linked list class
//there are nodes, which have some data, and a pointer to the next node
//the end is when the pointer at teh end of a node points to null(theres nothing after it)
//each node is an object
//contains a pointer and some data
//do the delete method last
//add things to the beginning of the list
//is empty first, and adddata
//then toString

struct Node{
    int element_count;
    string element_name;
    Node* next;
};

class LinkedList{
    private:
        Node* first;
        Node* last;
    public:
        LinkedList();
        ~LinkedList();
        void AddData(string name,int count);
        bool isEmpty();

};

LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
}

LinkedList::~LinkedList(){}
void LinkedList::AddData(string name,int count){}
bool LinkedList::isEmpty(){}

int main(){
    LinkedList* ll = new LinkedList();
    ll->AddData("name",67);
}
