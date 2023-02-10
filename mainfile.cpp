//213060
//Main File

#include "Node.h"
#include "arrayfunc.h"

vector<string> array();

      vector<string> temp_passwords = array();
    void LinkedList :: findPassword (int i) {
  if (i == 50) {
    
    cout << "No Password Matched!" << endl;
    return;
  }

  if (comparePasswords(temp_passwords[i]))
   {
    cout << "Password found: " << temp_passwords[i] << endl;
    return;
  }

  findPassword(i + 1);
}



using namespace std;
int main()
{
	
	LinkedList* list = new LinkedList();
	string password, email; 
	
	
	  
    list->addNode("user1@email.com", "password1");
    list->addNode("user2@email.com", "password2");
    list->addNode("user3@email.com", "password3");
    list->addNode("user4@email.com", "password4");
    list->addNode("user5@email.com", "password5");
    list->addNode("user6@email.com", "password6");
    list->addNode("user7@email.com", "password7");
    list->addNode("user8@email.com", "password8");
    list->addNode("user9@email.com", "password9");
    list->addNode("user10@email.com", "password10");
    list->addNode("user51@email.com", "password51");


    
    vector<string> temp_passwords = array();
    	
    
	list->findPassword(0);
	list->findPassword(1);
	list->findPassword(2);
	list->findPassword(3);
	list->findPassword(4);
	list->findPassword(5);
    list->findPassword(50);
    
    
    

    return 0;
}

