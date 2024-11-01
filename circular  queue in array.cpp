#include<iostream>
using namespace std;

class queue{
//	const int size = 10;
	public:
		int list [10];
		int front;
		int rear;
		int count;
	queue(){
		front = 0;
		rear = 0;
		
	}
	void enqueue( int val){
		if ( count == 10){
			cout<<" queue is full "<< endl;
		}
		else{
			list[rear]	= val;
			rear = (rear+1) % 10;
			cout<<" enqueue is:"<< val <<endl;
		}
		
	}
	bool empty(){
		if( front == rear ){
			cout<<" queue is empty "<< endl;
			return true;
		}
			cout<<" queue is not empty "<< endl;
			return false;
	}
		bool full(){
		if ( count == 10){
			cout<<" queue is full "<< endl;
			return true;
		}
			cout<<" queue is not full "<< endl;
			return false;
	}
	void dequeue(){
		if ( count == 0){
			cout<<" queue is empty "<< endl;
		}
		else{
	
				front = (front+1) % 10;
				}
			}
	void display(){
		for (int i=front; i< rear; i++){
			cout<< list[i];
		}
	}			

};

int main()
{
	queue q;
	cout<<"  ========= Circular Queue In Array ========"<< endl;
		cout<<" \n";
	cout<<" ......checking Empty ......."<<endl;
	q.empty();
	cout<<" \n";
	
		cout<<" ......Enqueue elements  ......."<<endl;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	
		cout<<" \n";
	cout<<" ...... after Dequeue ......."<<endl;
	q.dequeue();
	q.display();
		cout<<" \n";
		cout<<" ......checking for full ......."<<endl;
	q.full();
	cout<<" \n";
	return 0;
}