// MazeWars.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


//Returns a string that has both team members name.  Have the C string value return both team member names.  There is no defined format for this
__declspec(dllexport) char* GetTeam()
{
	//this is very wrong lol
	char a[] = "Will Dickinson";
	char b[] = "";
	strcat_s(a, b);
	return a;
}

//sets the maze data from the main program into the DLL.  Save the data into a variable in the DLL.  Use this data for the GetMaze function and the width/ height using the references to the arguments.
void SetMaze(const int** data, int width, int height)
{

}

//gets the maze data from the DLL. Return the maze data that was passed in using the SetMaze function, and the width/ height using the references to the arguments
int** GetMaze(int& width, int& height)
{
	
} 

//returns the next x/y postion to move to.  For this first part, save a list of x and y values (at least 10) and then keep track of which is your current location.  Return those variables for the current position
void GetNextPosition(int& xpos, int& ypos)
{

}

//sets the starting location for the player.  Save the x and y values for the starting location
void SetStart(int xpos, int ypos)
{

}

//gets the starting location for the player.  Return the saved x and y starting locations.  If the x and y locations for the start have not been saved yet, then return -1 for b
void GetStart(int& xpos, int& ypos)
{

}

//sets the ending location for the player.  Save the x and y values for the ending location
void SetEnd(int xpos, int ypos)
{

}


//gets the ending location for the player.  Return the saved x and y endlocations.  If the x and y locations for the end have not been saved yet, then return -1 for b
void GetEnd(int& xpos, int& ypos)
{

}
