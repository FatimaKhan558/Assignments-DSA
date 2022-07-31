#include <iostream>
using namespace std;
class Node
{
	    private:
	    int data;
	    Node* Next;
	    public:
	    Node(int data, Node* Next=NULL)
	    {
	        this-> data = data;
	        Next = NULL;
	    }
	    void SetData (int data)
	    {
	        this -> data = data;
	    }
	    void SetNext (Node* Next)
	    {
	        this-> Next = Next;
	    }
	    int GetData()
	    {
	        return this-> data;
	    }
	    Node* GetNext()
	    {
	        return this->Next;
	    }
	    
	
	};
class LinkedList {
	private:
		Node* head;
		public:
			LinkedList()
			{
				head=NULL;
			}
			bool isEmpty()
			{
				if (head!=NULL)
				{
					return false;
				}
				else
				 return true;
			}
			
			
			void insertAtbeginning(int data)
			{
			if (head==NULL)
			head=new Node (2);
			}
			 void insertAtLast(int val)
		{
			Node *temp=new Node(val);
			if(isEmpty())
			{
				head=temp;
			}
			else
			{
				Node *temp=head;
				while(temp->GetNext()!=NULL)
				{
					temp=temp->GetNext();
				}
				temp->SetNext(temp);
			}
		}
		void RemoveFromBegin()
		{
			if(!isEmpty())
			{
				Node *temp=head->GetNext();
				delete head;
				head=temp;
			}
		}
		void RemoveFromEnd()
		{
			Node *t1=head;
			Node *t2=t1->GetNext();
			while(t2->GetNext()!=NULL)
			{
				t1=t1->GetNext();
				t2=t2->GetNext();
			}
			delete t2;
			t1->SetNext(NULL);
		}
		int getLength()
		{
			int count=1;
			Node *temp=head;
			while(temp!=NULL)
			{
				temp=temp->GetNext();
				count++;
			}
			return count;
		}
	
		
};
int main ()
{
	LinkedList l1;
	Node* head= new Node(1);
	Node* t2= new Node(2);
	Node* t3= new Node(3);
	Node* tail= new Node(4);
	
	l1.isEmpty();
	l1.insertAtbeginning(1);
	l1.insertAtLast(4);
	l1.RemoveFromBegin();
	l1.RemoveFromEnd();
	l1.getLength();
	 Node* temp=head;
	cout << temp->GetData() << endl;
	
 	Node* tem=tail;
	cout << tem->GetData() << endl;

	
	return 0;
 } 

