#include <iostream>
 
#include <ctime>

using namespace std;

/*
Idan Barhom,208754028
Idan Ben Gavriel,318804663
*/

struct Node
{
	int key;
	Node* next;
	Node* prev;

};
void deleteNode(Node* head)//delete all the linkedList
{
	int size = 0;
	Node* curr = head->next;
	while (curr != head)
	{
		Node* temp = curr;
		curr = curr->next;
		delete temp;
		size++;
	}
	delete head;
	size++;
	cout << "amount of linked list deleted: " << size << endl;

}

int nodeLength(Node* node)
{
	int size = 1;//the minimun size of the linkedList
	int i = 0;
	int flag = 0;
	//int counter1 = 0;
	//int counter2 = 0;
	node->key = 1;//setting the "header key" to - 1
	while ((node->key == 1) || (flag == 0))
	{
		
		//counter1++;
		flag = 0;
		node = node->next;//next node
		node->key = 0;//setting the key to - 0
		i++;

		if (i == size)//get inside when we reach to the last node that we changed
		{
			for (int j = size; j > 0; j--)//going back to the first node - "header"
			{
				//counter2++;
				node = node->prev;

			}
			flag = 1;
			i = 0;
			size++;
		}

	}
	//cout << counter1 << endl;
	//cout << counter2 << endl;

	return size - 1;
}

int main()
{
	srand(time(0));
	Node* head;//first node
	Node* temp;//current node
	Node* node = new Node();//next
	node->key = (rand() % 2);//building the first node
	node->next = nullptr;
	node->prev = nullptr;
	head = node;
	temp = node;
	int counter = 1;
	
	while (true)
	{
		int x = (rand() % 100);//random number 0-99
		if (x < 99) {//probability 0.99
			node = new Node();
			node->key = x % 2;
			node->next = nullptr;
			node->prev = temp;
			temp->next = node;
			temp = node;
		}
		else// probability 0.01
			break;
		counter++;
	}
	head->prev = temp;//points the last one
	temp->next = head;//points the first one
	cout << "size of the linked list from the main: " << counter << endl;
	int size = nodeLength(head);
	
	cout << "size of the linked list from the function: " << size << endl;
	
	deleteNode(head);//deleting all the nodes!
	cout<<endl;
	cout << "run time of the function is : O(n^2)" << endl;

}



