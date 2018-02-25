
#include "BasicFunctions.h"

void movement()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and go in any direction value = f(x,y) *//
//* The robot can moves in any directions *//
//* params: none. *//
//* changes: get Axis 3 & 4 values and select values for wheel motors. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int x = vexRT[Ch4];
	int y = vexRT[Ch3];
	if(x <= 5 && x >= -5)
	{
		x = 0;
	}
	if(y <= 5 && y >= -5)
	{
		y = 0;
	}
	motor[9] = (percent(-(x+y)));
	motor[0] = (percent(-(-x+y)));
	motor[2] = (percent(-(x-y)));
	motor[1] = (percent(x+y));

}

void arm()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and move an arm with values from axis since -100 to 100 *//
//* The robot can moves his arm from forward to backward *//
//* params: none. *//
//* changes: get Axis 2 values and select values for arm motors. *//
//* vars: int x = vexRT[Ch2] gets value from joystick right analogic button . *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int x = vexRT[Ch2];
	motor[5] = (percent(-x));
	motor[6] = (percent(x));
}

void allInOff()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to deactivate value = OFF *//
//* param: none. *//
//* changes: array motor values equal global variable OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	for(int i=0; i < 10; i++)
	{
		motor[i] = OFF;
	}
}

int percent(int value)
{
	int aux;
	aux = ((value * MAX)/100);
	return aux;
}


void forwardMove(int distance)
//* ------------------------------------------------------------------ *//
//* Move wheel motors for move robor on forward direction with encoders *//
//* param: int distance (Value in centimeters) - The distance that the robot will travel. *//
//* changes: array motor values equal to result of function percent (a number from -127 to 127). *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int normalSpeed = percent(100);
	int slowSpeed = percent(95);


	while(SensorValue[23] < distance)
	{
		if(SensorValue[23] > SensorValue[25])		//* Every condition are wrong, surplus two motor values.
		{
			motor[0] = normalSpeed;
			motor[1] = slowSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[23] < SensorValue[25])		//* Wrong too.
		{
			motor[0] = slowSpeed;
			motor[1] = normalSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[23] == SensorValue[25])		//* Wrong too.
		{
			motor[0] = normalSpeed;
			motor[1] = normalSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}

		startSensor(23);
		startSensor(25);
	}
}

int robotPath(int distance)
{
	return (distance/WHEEL)*360;
}

void autonomousControl()
{
	forwardMove(robotPath(200));		//* Robot travel two meters.
	allInOff();
}

void backwardMove()
{
	//*TODO: like forwardMove fuction.
}

void leftMove()
{
	//*TODO: like forwardMove fuction.
}

void rightMove()
{
	//*TODO: like forwardMove fuction.
}

void weightIn()
{
	if(SensorValue[21] == 1)
	{
		weightMoveUp();
		while(SensorValue[22] == 0)
		{
			//* Robot is lifting the tray. TO DO: we need to change this wasted time.
		}
	}
}

void weightOut()
{

}

void weightMoveUp()
{
	motor[7] = percent(-100);
}

void weightMoveDown()
{
	motor[7] = percent(100);
}

void pinMoveOpen()
{
	motor[8] = percent(100);
}

void pinMoveClose()
{
	motor[8] = percent(-100);
}

void armMoveUp()
{
	motor[5] = percent(100);
	motor[6] = percent(-100);
}

void armMoveDown()
{
	motor[5] = percent(-100);
	motor[6] = percent(100);
}

void staticHand()
{
	motor[5] = percent(25);
	motor[6] = percent(-25);
}

void startAllSensor()
{
	for(int i = (33-5); i <= 25; i++)
	{
		startSensor(i);
	}
}

void startSensor (int sensor)
{
	SensorValue[sensor] = 0;
}
