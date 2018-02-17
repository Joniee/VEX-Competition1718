
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
	int x, y;
	x = vexRT[Ch4];
	y = vexRT[Ch3];
	if(x <= 5 && x >= -5)
	{
		x = 0;
	}
	if(y <= 5 && y >= -5)
	{
		y = 0;
	}
	motor[9] = (2*(-(x+y)));
	motor[0] = (2*(-(-x+y)));
	motor[2] = (2*(-(x-y)));
	motor[1] = (2*(x+y));

}

void arm()
{
	int x;
	x = vexRT[Ch2];
	motor[5] = -(2*x);
	motor[6] = (2*x);
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
	aux = ((value * 250)/100);
	return aux;
}

void forwardMove()
{
	motor[0] = -percent(100);
	motor[1] = percent(100);
	motor[2] = percent(100);
	motor[9] = -percent(100);
}

void autonomousControl()
{
	backwardMove();
	sleep(2000);
	allInOff();
	weightMoveUp();
	sleep(100);
	allInOff();
	forwardMove();
}

void backwardMove()
{
	motor[0] = percent(100);
	motor[1] = -percent(100);
	motor[2] = -percent(100);
	motor[9] = percent(100);
}

void leftMove()
{
	motor[0] = percent(100);
	motor[1] = -percent(0);
	motor[2] = percent(0);
	motor[9] = -percent(100);
}

void rightMove()
{
	motor[0] = -percent(100);
	motor[1] = percent(0);
	motor[2] = -percent(0);
	motor[9] = percent(100);
}

void heightMoveUp()
{
	motor[3] = percent(100);
	motor[4] = -percent(100);
}

void heightMoveDown()
{
	motor[3] = -percent(100);
	motor[4] = percent(100);
}

void weightMoveUp()
{
	motor[7] = percent(100);
}

void weightMoveDown()
{
	motor[7] = -percent(100);
}

void pinMoveOpen()
{
	motor[8] = percent(100);
}

void pinMoveClose()
{
	motor[8] = -percent(100);
}

void armMoveUp()
{
	motor[5] = percent(100);
	motor[6] = -percent(100);
}

void armMoveDown()
{
	motor[5] = -percent(100);
	motor[6] = percent(100);
}

void staticHand()
{
	motor[5] = percent(25);
	motor[6] = -percent(25);
}
