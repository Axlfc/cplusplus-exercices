#include <iostream>
#include <algorithm>
#include <string>
#include<curses.h>
#include<stdlib.h>

using namespace std;

 /*2.   Hacer un programa que muestre los clientes de una tienda, los almacene en cola, y por
último muestre los clientes en el orden correcto.*/


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


struct Client{
	char name[30];
	char bill[10];
	int age;
};


struct Node{
	Client c;
	Node *next;
};


// Functions prototypes
void loadClient(Client &);
void insertQueue(Node *&, Node *&, Client);
bool emptyQueue(Node *);
void removeQueue(Node *&, Node *&, Client &);


int main() {
    Node *front = NULL;
	Node *end = NULL;
	Client c;
	char ans;

	do{
		loadClient(c);
		insertQueue(front,end,c);

		cout<<"Do you want to add more clients? (y/n): ";
		cin >> ans;
		cout << "\n";
	} while(ans == 'Y' || ans == 'y');

	cout << "\n\n=Client Load Successful=\n\n";
	cout<<"Showing clients:\n\n";

	while(front != NULL) {
		removeQueue(front, end, c);
		cout<<"Name: " <<c .name << "\n";
		cout<<"Bill: " << c.bill << "\n";
		cout<<"Age: " << c.age << "\n";
		cout << "\n";
	}
	return 0;
}


void loadClient(Client &c){
	clean_stdin();
	cout << "\tAdding new client" << "\n";
	cout << "Name: ";
	cin.getline(c.name, 30, '\n');
	cout << "Bill: ";
	cin.getline(c.bill, 10, '\n');
	cout << "Age: ";
	cin >> c.age;
	cout << "\n";
}

void insertQueue(Node *&front, Node *&end, Client c){
	Node *newNode = new Node();

	newNode -> c = c;
	newNode -> next = NULL;

	if(emptyQueue(front)){
		front = newNode;
	}
	else{
		end -> next = newNode;
	}

	end = newNode;
}

bool emptyQueue(Node *front){
	return (front == NULL)? true : false;
}

void removeQueue(Node *&front, Node *&end, Client &c){
	c = front -> c;
	Node *aux = front;

	if(front == end){
		front = NULL;
		end = NULL;
	}
	else{
		front = front -> next;
	}

	delete aux;
}