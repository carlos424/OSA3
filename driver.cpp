#ifndef DRIVER_CPP
#define DRIVER_CPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "scheduler.h"
#include "pqueue.h"

using namespace std;

int main()
{
  cout << "Assignment 3 by Brandon Herbert and Carlos Ferrer" << endl;
  srand(time(NULL));
  int processInput;
  int reportInput;
    
  cout << "How many processes would you like to simulate?> ";
  cin >> processInput;
  cout << endl << "Please select report: "
  << endl << "1 - First come first serve" 
  << endl << "2 - Shortest Job First" << endl;
 
 
  cin >> reportInput;

  Scheduler simulation(processInput, reportInput);
  simulation.run();
  
  return 0;

  }
#endif 
