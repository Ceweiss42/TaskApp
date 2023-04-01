#include "Task.h"

Task::Task(string taskName, int employee, int manager)
{
	title = taskName;
	workerID = employee;
	creatorID = manager;
	progress = NEW;

	//time_t t = time(NULL);
	//dateCreated = localtime(&t);
}

Task::~Task()
{
}

status Task::GetStatus()
{
	return progress;
}

int Task::GetUserID()
{
	return workerID;
}

tm* Task::GetCreationDate()
{
	return dateCreated;
}

string Task::getTitle()
{
	return title;
}

