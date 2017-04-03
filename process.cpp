#ifndef PROCESS_CPP
#define PROCESS_CPP

#include <iostream>
#include "process.h"
#include "random.h"
#include <stdlib.h>

int processIDcounter = 1; 

Process::Process()
{

  processID = processIDcounter++;
  startTime = rand()%300002;
  totalCPUduration = 1000 + (rand()%59001);
  remainCPUduration = totalCPUduration;
  avgCPUburst = 5 + (rand()%96);
  nextCPUburst = CPUBurstRandom(avgCPUburst);
  IOburst = 30 + (rand()%71);
  priority = 0;
  arriveTime = 0;
  status = "ready";
}

Process::Process(const Process &cSource)
{
  processID = cSource.processID;
  startTime = cSource.startTime;
  totalCPUduration = cSource.totalCPUduration;
  remainCPUduration = cSource.remainCPUduration;
  avgCPUburst = cSource.avgCPUburst;
  nextCPUburst = cSource.nextCPUburst;
  IOburst = cSource.IOburst;
  priority = cSource.priority;
  arriveTime = cSource.arriveTime;
  status = cSource.status;
}

Process::~Process(){}

int Process::getProcessID()
{
  return processID;
}

int Process::getStartTime()
{
  return startTime;
}

int Process::getTotalCPU()
{
  return totalCPUduration;
}

void Process::setRemainCPU(int input)
{
  remainCPUduration = input;
}

int Process::getAvgCPUburst()
{
  return avgCPUburst;
}

int Process::getArriveTime()
{
  return arriveTime;
}

void Process::setNextCPUburst(int input)
{
  nextCPUburst = input;
}

void Process::setIOburst(int input)
{
  IOburst = input;
}

void Process::setPriority(int input)
{
  priority = input;
}

void Process::setStatus(string input)
{
  status = input;
}

void Process::displayInfo()
{
  cout << "processID:\t" << processID << endl
  << "Start Time:\t" << startTime << endl
  << "Total CPU duration:\t" << totalCPUduration << endl
  << "Remaining CPU duration:\t" << remainCPUduration << endl
  << "AVG CPU burst:\t" << avgCPUburst << endl
  << "Next CPU burst:\t" << nextCPUburst << endl
  << "IO burst:\t" << IOburst << endl
  << "Priority:\t" << priority << endl
  << "Status:\t" << status << endl;
}

int Process::getPriority()
{
	return priority;
}
#endif 