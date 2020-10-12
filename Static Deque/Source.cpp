#include<iostream>
#include"Deque.h"
using namespace std;

int main()
{
	Deque<int> dq(5);
	cout << "Insert element at rear end  : 5 \n";
	dq.InsertRear(5);

	cout << "insert element at rear end : 10 \n";
	dq.InsertRear(10);
	dq.InsertRear(10);
	dq.InsertRear(10);
	dq.InsertFront(15);
	cout << "get rear element " << " "
		<< dq.GetRear() << endl;


	//dq.DeleteRear();
	cout << "After delete rear element new rear"
		<< " become " << dq.GetRear() << endl;

	cout << "inserting element at front end \n";
	dq.InsertFront(15);

	cout << "get front element " << " "
		<< dq.GetFront() << endl;

	//dq.DeleteFront();

	cout << "After delete front element new "
		<< "front become " << dq.GetFront() << endl;
	return 0;
}