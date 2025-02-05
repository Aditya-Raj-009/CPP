#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
    ~Node(){
        delete this;
    }
};

class LinkedList {
    Node* head = nullptr;
    int s = 0;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList(){
        delete this;
    }
    void setData(int);
    void addFirst(int);
    void display();

    int size(){
        return s;
    }
    void toSingleDigitList(){

        Node* curr = head;
        int d = head->data;
        LinkedList* newList = new LinkedList();
        Node* ref = nullptr;
        if(d/10){
            head->data = d%10;
            d/=10;
            while(d){
                int r = d%10;
                newList->addFirst(r);
                if(ref==nullptr){
                    ref = newList->head;
                }
                d/=10;
            }
            
            ref->next = head;
            curr = head;
            head = newList->head;
        }
        while(curr->next!=nullptr){
            d = curr->next->data;
            ref = nullptr;
            if(d/10){
                curr->next->data = d%10;
                d/=10;
                if(d){
                    newList = new LinkedList();
                }
                
            }
            int flag = 0;
            while(d){
                flag = 1;
                int r = d%10;
                newList->addFirst(r);
                if(ref==nullptr){
                    ref = newList->head;
                }
                d/=10;
            }
            if(flag){
            ref->next = curr->next;
            curr->next = newList->head;
            curr = ref->next;
            }
            else{
                curr = curr->next;
            }
           
        }

    }
    void reverseList(){
        this->head = reverseList(this->head);
    }
    LinkedList* operator+(LinkedList& l2){
        int carry = 0;
        this->toSingleDigitList();
        l2.toSingleDigitList();

        l2.reverseList();
        this->reverseList();

        LinkedList* sumList = new LinkedList();
        Node* l2_curr = l2.head;
        Node* this_curr = this->head;

        while(this_curr!=nullptr && l2_curr!=nullptr)
        {
            int s = carry+l2_curr->data+this_curr->data;
            int sum = s%10;
            carry = s/10;
            sumList->setData(sum);
            l2_curr = l2_curr->next;
            this_curr = this_curr->next;
        }
        while (l2_curr!=nullptr)
        {
             int s = carry+l2_curr->data;
            int sum = s%10;
            carry = s/10;
            sumList->setData(sum);
            l2_curr = l2_curr->next;
        }

        while(this_curr!=nullptr)
        {
             int s = carry+this_curr->data;
            int sum = s%10;
            carry = s/10;
            sumList->setData(sum);
            this_curr = this_curr->next;
        }
        if(carry!=0){
            sumList->setData(carry);
        }
        this->reverseList();
        l2.reverseList();
        sumList->reverseList();

        return sumList;
    }

private:
     friend LinkedList* mergeList(const LinkedList&, const LinkedList&);

    Node* reverseList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* newHead = reverseList(head->next);

    head->next->next = head;
    head->next = nullptr;

    return newHead;
}

};

void LinkedList::setData(int data) {
    Node* node = new Node(data);
    if (head == nullptr) {
        head = node;
        s++;
        return;
    }
    Node* curr = head;

    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = node;
    s++;
}

void LinkedList::addFirst(int data){

    Node* newNode = new Node(data);
    if(head==nullptr){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void LinkedList::display() {
    if (head == nullptr) {
        cout << "null" << endl;
        return;
    }
    Node* curr = head;

    while (curr != nullptr) {
        cout << curr->data << "-->";
        curr = curr->next;
    }
    cout << "null" << endl;
}

LinkedList* mergeList(const LinkedList& l1, const LinkedList& l2) {

    if (l1.head == nullptr && l2.head == nullptr) {
        return nullptr;
    }

    Node* curr1 = l1.head;
    Node* curr2 = l2.head;
    LinkedList* newList = new LinkedList();

    while (curr1 != nullptr && curr2 != nullptr) {
        if (curr1->data == curr2->data) {
            newList->setData(curr1->data);
            newList->setData(curr2->data);
            curr1 = curr1->next;
            curr2 = curr2->next;
        } else if (curr1->data < curr2->data) {
            newList->setData(curr1->data);
            curr1 = curr1->next;
        } else {
            newList->setData(curr2->data);
            curr2 = curr2->next;
        }
        
    }

    while (curr1 != nullptr) {
        newList->setData(curr1->data);
        curr1 = curr1->next;
    }

    while (curr2 != nullptr) {
        newList->setData(curr2->data);
        curr2 = curr2->next;
    }

    return newList;
}

int main(int argc, char const* argv[]) {
    LinkedList l1;

    l1.setData(81);
    l1.setData(52);
    l1.setData(33);
    l1.setData(46);

    // l1.toSingleDigitList();

    cout<<"List 1: "<<endl;
    l1.display();

    LinkedList l2;
    l2.setData(12);
    l2.setData(64);
    l2.setData(84);
    l2.setData(96);

    cout<<"List 2: "<<endl;
    // l2.toSingleDigitList();

    l2.display();

    LinkedList* sumList = l1 + l2;

    cout<<"List 1: "<<endl;
    l1.display();
    

    cout<<"List 2: "<<endl;
    l2.display();


    cout<<"Sum: "<<endl;
    sumList->display();


    

    return 0;
}
