#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <queue>
#include "event.h"
#include "process.h"
#include "pqueue.h"
   

using namespace std;

class Scheduler 
{
private:
  bool cpuState; 
  int currentTime;
  int quitTime; 
  int processInput;
  int reportInput;
 queue<Process> readyQueue; 
 queue<Event> eventQueue;

public:  
  Scheduler();
  Scheduler(int processData, int reportData);
  ~Scheduler();

  void handle_the_event(Event &e);
  void run();
};
#endif