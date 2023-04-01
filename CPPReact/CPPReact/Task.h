#pragma once

#include <ctime>
#include <string>

using namespace std;

enum status
{
	DONE,
	STARTED,
	NEW
};

class Task
{
public:
	Task(string taskName, int employee, int manager);
	~Task();
	status GetStatus();
	int GetUserID();
	tm* GetCreationDate();
	string getTitle();

	string ToString()
	{
		return "TASK " + title + " was created by " + to_string(creatorID) + " and assigned to " + to_string(GetUserID()) + " on ";// +asctime(GetCreationDate());
	}

private:
	tm* dateCreated;
	status progress;
	int creatorID;
	int workerID;

	string title;

};

