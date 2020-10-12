#include<iostream>
using namespace std;
#pragma once
template<typename T>
class Deque
{
	T *Ptr;
	int Front;
	int Rear;
	int Size;
public:
	Deque(int Size)
	{
		Front = -1;
		Rear = 0;
		this->Size = Size;
		Ptr = new T[Size];
	}
	bool  IsFull()
	{
		return ((Front == 0 && Rear == Size - 1) || Front == Rear + 1);
	}
	bool  IsEmpty()
	{
		return (Front == -1);
	}
	void  InsertFront(int Value)
	{
		if (IsFull())
		{
			throw("Overflow\n");
		}
		else
		if (Front == -1)
		{
			Front = 0;
			Rear = 0;
		}
		else if (Front == 0)
			Front = Size - 1;

		else
			--Front;
		Ptr[Front] = Value;
	}
	void  InsertRear(int Value)
	{
		if (IsFull())
		{
			throw(" Overflow\n ");
		}
		else
		if (Front == -1)
		{
			Front = 0;
			Rear = 0;
		}
		else if (Rear == Size - 1)
			Rear = 0;
		else
			++Rear;

		Ptr[Rear] = Value;
	}
	void  DeleteFront()
	{
		if (IsEmpty())
		{
			throw("Queue Underflow\n");
		}
		else
		if (Front == Rear)
		{
			Front = -1;
			Rear = -1;
		}
		else
		if (Front == Size - 1)
			Front = 0;
		else
			Front = Front + 1;
	}
	void  DeleteRear()
	{
		if (IsEmpty())
		{
			throw(" Underflow\n");
		}
		else
		if (Front == Rear)
		{
			Front = -1;
			Rear = -1;
		}
		else if (Rear == 0)
			Rear = Size - 1;
		else
			--Rear;
	}
	T  GetFront()
	{
		if (IsEmpty())
		{
			throw(" Underflow\n");
		}
		return Ptr[Front];
	}
	T  GetRear()
	{
		if (IsEmpty() || Rear < 0)
		{
			throw(" Underflow\n");
		}
		return Ptr[Rear];
	}
	~Deque()
	{
		delete[]Ptr;
		Ptr = nullptr;
	}
};

