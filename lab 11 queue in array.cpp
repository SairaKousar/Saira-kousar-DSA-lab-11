#include<iostream>
using namespace std;
const int size=6;
class queue{

	public:
	int list[size];
	int rear;
	int front;
  public:
  queue(){
  	rear = 0;
  	front = 0;
  }	
 bool Empty(){
 	if(rear==front || rear == 0){
 		cout<<" list is empty "<<endl;
 		return true;
 		
	 }
	 cout<<" list is not empty "<< endl;
		return false;
	 
 }
 bool full(){
 	if( rear=size-1){
 		
 		cout<<" list is full"<<endl;
 		return true;
	 }
	 cout<<" list is not full"<<endl;
	 return false;
 }
  void enqueue(int val){
  	if(rear!=size)
  
 
 list[rear]=val;
  rear++;

 cout<<" enqueue value is:"<<val<<endl;	
}
 
 void dequeue(){
if ( rear != 0 || rear!= front){

	 
	//cout<<" dequeue is :"<<list[front];
	 front++;
}
else{
	cout<<" list is empty "<<endl;
}
 }
 
 void display(){
 	if ( rear != 0 || rear!= front){
	 
 	for(int i= front; i< rear; i++){
 		cout<< list[i]<<endl;
 		
	 }
 }
 
}
};
int main(){
	
	queue q;
	cout<<" list of enqueue values :"<<endl;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
q.enqueue(5);
	
	q.full();


	
	cout<<" values of dequeue :"<<endl;
	q.dequeue();
		
	q.dequeue();
			
q.display();
	
	
	q.Empty();

return 0;
}