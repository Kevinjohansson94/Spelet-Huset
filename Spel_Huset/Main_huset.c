#include "houseHelper.h"
#include "houseManager.h"
#include "myIOLib.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"


int main()
{
	system("chcp 1252");
	system("cls");

	int width = 20, heigth = 15, noOfWalls = 25, success = 1, i = 1, *xPos = 0, *yPos = 0, *pkey = 0;
	char chr = '@';
	MapT map;
	positionT posReceived;
	inputT userinput;
	inventory userinventory;
	userinventory.keys = 0;
	userinventory.points = 0;
	
	srand((unsigned)time(NULL));
	
	map = createMap(width, heigth, noOfWalls);
	success = placeObject(map, xPos, yPos, chr, &posReceived, success);
	
	while (i=1)
	{
		system("cls");
		drawMap(map);
		userinput = getUserInput();
		switch (userinput.op)
		{
			case go:
				Kermitmove(&map, &posReceived, userinput.mObj, &userinventory);
				break;
		}
		
	}
}

