
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
	for(int i=0;i<10;i++)
	{
		motor[i]=OFF;
	}
}

int percent(int value)
{
	int aux;
	aux = ((value * MAX)/100);
	return aux;
}

void forwardMove()
{
	motor[0] = percent(-100);
	motor[1] = percent(100);
	motor[2] = percent(100);
	motor[9] = percent(-100);
}

void autonomousControl()
{
	/*
	backwardMove();
	sleep(2000);
	allInOff();
	weightMoveUp();
	sleep(200);
	allInOff();
	forwardMove();
	*/
}

void backwardMove()
{
	motor[0] = percent(100);
	motor[1] = percent(-100);
	motor[2] = percent(-100);
	motor[9] = percent(100);
}

void leftMove()
{
	motor[0] = percent(100);
	motor[1] = OFF;
	motor[2] = OFF;
	motor[9] = percent(-100);
}

void rightMove()
{
	motor[0] = percent(-100);
	motor[1] = OFF;
	motor[2] = OFF;
	motor[9] = percent(100);
}

void heightMoveUp()
{
	motor[3] = percent(100);
	motor[4] = percent(-100);
}

void heightMoveDown()
{
	motor[3] = percent(-100);
	motor[4] = percent(100);
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
	int i = 0;
	for(i;i<nSensor;i++)
	{
		startSensor(nSensor + fSensor);
	}
}

void startSensor (int sensor)
{
	sensorValue[sensor] = 0;
}
