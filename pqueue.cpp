//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a priority PQueue

#ifndef pqueue_CPP
#define pqueue_CPP


#include "pqueue.h"



PQueue::PQueue()
{
	int rear = 0;
	int front = -1;
	int numberOfProc = 0;
}
	

int PQueue::size()
{
	return numberOfProc;
}

void PQueue::insertProc(Process newProc)
{
	if(numberOfProc == 100)
	{
		//cout << "Queue Full!" << endl;
	}
	
	else
	{

		//insert it into our data structure
		tree[rear] = newProc;
		rear = (rear + 1 )%100;
		numberOfProc++;
		sort();
		
		
		
	}
	
	return;
	
}

Process PQueue::removeProc()
{
	if (numberOfProc == 0)
	{
		//cout << "Queue Empty!" << endl;
	}
	
	else
	{
		Process highest = tree[front];
		front = (front+1)%100;		
	
		numberOfProc--;
		return highest;
	}
	

}

void PQueue::display()
{
	if (numberOfProc == 0)
	{
		cout << "The Queue is Empty!" << endl;
	}
	else
	{
		cout << "Displaying the Queue" << endl;
	cout << "ID|Time|Type " << endl;

		int x = front;

		for (int i = 0;i<numberOfProc ;i++ )
		{
			
			x = (x+1)%100;
		}
	}

}

void PQueue::sort()
{
	for (int i = front;i<numberOfProc ;i++ )
	{
		for (int x = i+1;x<numberOfProc ;x++ )
		{
			if (tree[i].getPriority() > tree[x].getPriority())
			{
				Process swap = tree[i];
				tree[i] = tree[x];
				tree[x] = swap;
			}
		}
	}
}

Process PQueue::removeRandProc(int i)
{
	if (numberOfProc == 0)
	{
		cout << "Queue Empty!" << endl;
	}
	
	else
	{
		Process removed = tree[front + i];

		tree[front + i] = tree[front];
		front = (front+1)%100;	
		
		numberOfProc--;
		return removed;
	}
}

bool PQueue::inQueue(Process temp)
{
	if (numberOfProc == 0)
	{
		return false;
	}

	else
	{
		for (int i = front;i<numberOfProc ;i++ )
		{
			if (tree[i].getProcessID() == temp.getProcessID())
			{
				return true;
			}
		}
	}
	return false;
}


Process PQueue::Top()
{
	return tree[front];
}


#endif

