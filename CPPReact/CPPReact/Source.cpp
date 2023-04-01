#include "Task.h"
#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
	Task task("Create App", 12, 3);

	cout << task.ToString() << endl;

	return 0;
}