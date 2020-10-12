#include<iostream>
#include"Deque.h"
using namespace std;

int main()
{
	Deque<int> dq(5);
	dq.InsertRear(5);
	dq.InsertRear(1);
	dq.InsertRear(2);
	dq.InsertRear(8);
	dq.InsertRear(9);
	dq.InsertRear(11);
	
	dq.InsertFront(5);
	dq.InsertFront(1);
	dq.InsertFront(2);
	dq.InsertFront(3);
	dq.InsertFront(4);
	return 0;
}