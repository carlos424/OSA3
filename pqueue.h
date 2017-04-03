// Queue header file
//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a priority queue

#ifndef pqueue_H
#define pqueue_H


#include <iostream>
#include <string>
#include "process.h"
#include "scheduler.h"

using namespace std;

class pqueue
{
	private:
		int numberOfProc;
		int front;
		int rear;
		Process tree[100];
		

	
	public:


		int size();
		void insertProc(Process newProc);
		Process removeProc();
		void display();
		void sort();
		Process removeRandProc(int i);
		bool inQueue(Process temp);
		Process Top();

		
	
};

#endif