#include <iostream>
#include<string>

using namespace std;


class Node
{	
	public:
    string email;
    string password;
    Node* next;

    Node(string email, string password)
	{
        this->email = email;
        this->password = password;
        this->next = NULL;
    }
};


class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        this->head = NULL;
    }


    void addNode(string email, string password) {
    	
    	
        if (this->head == NULL) {
            this->head = new Node(email, password);
            return;
        }

        Node* current = this->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new Node(email, password);
    }

    
    bool comparePasswords(string password) {
        Node* current = this->head;
        while (current != NULL) {
            if (current->password == password) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
    
 
void findPassword(int i);

};



