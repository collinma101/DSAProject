// testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MazeWars.h"
#include <iostream>;
using namespace std;


int main()
{

	char names[50] = "";
	strcat_s(names, GetTeam());
	cout << names << endl;
	
    return 0;
}

