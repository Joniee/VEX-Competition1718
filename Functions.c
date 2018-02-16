//* User/Autonomous functions implemented *//

#include "FunctionsGlobalVars.h"

//* 1.    ------------------------------------------------------------------------------------------------------- *//

void onlyMotorInOff()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to deactivate value = OFF *//
//* param: none. *//
//* changes: array motor values equal global variable OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = OFF;
	motor[rueda6] = OFF;
	motor[rueda7] = OFF;
	motor[rueda8] = OFF;
}

//* 2.    ------------------------------------------------------------------------------------------------------- *//

void allInOff()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to deactivate value = OFF *//
//* param: none. *//
//* changes: array motor values equal global variable OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = OFF;
	motor[rueda6] = OFF;
	motor[rueda7] = OFF;
	motor[rueda8] = OFF;
	motor[palaR] = OFF;
	motor[palaL] = OFF;
	motor[cata9] = OFF;
	motor[cata10] = OFF;
	motor[cata11] = OFF;
	motor[cata12] = OFF;
}

void shovelInOff()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to deactivate value = OFF *//
//* param: none. *//
//* changes: array motor values equal global variable OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[palaR] = OFF;
	motor[palaL] = OFF;
}

//* 2.    ------------------------------------------------------------------------------------------------------- *//

void throwerInOff()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to deactivate thower value = OFF *//
//* param: none. *//
//* changes: array motor values equal global variable OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[cata9] = OFF;
	motor[cata10] = OFF;
	motor[cata11] = OFF;
	motor[cata12] = OFF;
}


//* 3.    ------------------------------------------------------------------------------------------------------- *//

void onForward()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go ahead value = MAX_MOV or value = OFF *//
//* The robot moves forward (north) *//
//* param: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = -MAX_MOV;
	motor[rueda6] = -MAX_MOV;
	motor[rueda7] = MAX_MOV;
	motor[rueda8] = MAX_MOV;
}

//* 4.    ------------------------------------------------------------------------------------------------------- *//

void onNorthEast()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go northeast direction value = MAX_MOV or value = OFF *//
//* The robot moves diagonal (northest) *//
//* param: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = -MAX_MOV;
	motor[rueda6] = MAX_MOV;
	motor[rueda7] = OFF;
	motor[rueda8] = OFF;
}

//* 5.    ------------------------------------------------------------------------------------------------------- *//

void onNorthWest()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go northwest direction value = MAX_MOV or value = OFF *//
//* The robot moves diagonal (northwest) *//
//* param: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = MAX_MOV;
	motor[rueda6] = -MAX_MOV;
	motor[rueda7] = OFF;
	motor[rueda8] = OFF;
}

//* 6.    ------------------------------------------------------------------------------------------------------- *//

void onBackward()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go south direction value = MAX_MOV or value = OFF *//
//* The robot moves forward (south) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = MAX_MOV;
	motor[rueda6] = MAX_MOV;
	motor[rueda7] = -MAX_MOV;
	motor[rueda8] = -MAX_MOV;
}

//* 7.    ------------------------------------------------------------------------------------------------------- *//

void onSouthWest()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go southwest direction value = MAX_MOV or value = OFF *//
//* The robot moves forward (south) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda8] = MAX_MOV;
	motor[rueda6] = -MAX_MOV;
	motor[rueda5] = OFF;
	motor[rueda7] = OFF;
}

//* 8.    ------------------------------------------------------------------------------------------------------- *//

void onSouthEast()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go southeast value = MAX_MOV or value = OFF *//
//* The robot moves forward (south-east) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = -MAX_MOV*2;
	motor[rueda7] = MAX_MOV*2;
	motor[rueda6] = OFF;
	motor[rueda8] = OFF;
}

//* 9.    ------------------------------------------------------------------------------------------------------- *//

void onEast()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go east direction value = MAX_MOV or value = OFF *//
//* The robot moves to left (East) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = -MAX_MOV;
	motor[rueda6] = MAX_MOV;
	motor[rueda7] = MAX_MOV;
	motor[rueda8] = -MAX_MOV;
}

//* 10.    ------------------------------------------------------------------------------------------------------- *//

void onWest()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to go west direction value = MAX_MOV or value = OFF *//
//* The robot moves to right (West) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = MAX_MOV;
	motor[rueda6] = -MAX_MOV;
	motor[rueda7] = -MAX_MOV;
	motor[rueda8] = MAX_MOV;
}

//* 11.    ------------------------------------------------------------------------------------------------------- *//

void rotateRight()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to rotate on right value = MAX_MOV or value = OFF *//
//* The robot rotate (Right) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = MAX_MOV;
	motor[rueda6] = MAX_MOV;
	motor[rueda7] = MAX_MOV;
	motor[rueda8] = MAX_MOV;
}

//* 12.    ------------------------------------------------------------------------------------------------------- *//

void rotateLeft()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate to rotate on left value = MAX_MOV or value = OFF *//
//* The robot rotate (Left) *//
//* params: none. *//
//* changes: array motor values equal global variable MAX_MOV or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[rueda5] = -MAX_MOV;
	motor[rueda6] = -MAX_MOV;
	motor[rueda7] = -MAX_MOV;
	motor[rueda8] = -MAX_MOV;
}

//* 13.    ------------------------------------------------------------------------------------------------------- *//

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
	motor[rueda5] = -(x+y);
	motor[rueda6] = -(-x+y);
	motor[rueda7] = -(x-y);
	motor[rueda8] = x+y;
}

//* 14.    ------------------------------------------------------------------------------------------------------- *//

void shovelUp()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and move the shovel up value = MAX_PALA_U or value = OFF *//
//* The robot can moves in any directions *//
//* params: none. *//
//* changes: get Axis 3 & 4 values and select values for wheel motors. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[palaL] = MAX_PALA_U;
	motor[palaR] = MAX_PALA_U;
}

//* 15.    ------------------------------------------------------------------------------------------------------- *//

void shovelDown()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and move the shovel up value = MAX_PALA_D or value = OFF *//
//* The robot can moves in any directions *//
//* params: none. *//
//* changes: get Axis 3 & 4 values and select values for wheel motors. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[palaL] = MAX_PALA_D;
	motor[palaR] = MAX_PALA_D;
}

//* 16.    ------------------------------------------------------------------------------------------------------- *//

void thrower()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and throw a star value = MAX_THROW or value = MAX_PALA_D or value = OFF *//
//* The robot throws a star. *//
//* params: none. *//
//* changes: Set motor speed catapulta to throw a star *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[cata12] = -MAX_THROW;
	motor[cata11] = -MAX_THROW;
	motor[cata10] = MAX_THROW;
	motor[cata9] = MAX_THROW;
	if(SensorValue[Finaldown] == 0)
		{
			motor[palaL] = MAX_PALA_D;
			motor[palaR] = MAX_PALA_D;
		}
}

//* 17.    ------------------------------------------------------------------------------------------------------- *//

void shovelHeld()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and go in any direction value = STOP_PALA or value = OFF *//
//* The robot can moves in any directions *//
//* params: none. *//
//* changes: get Axis 3 & 4 values and select values for wheel motors. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[palaL] = STOP_PALA;
	motor[palaR] = STOP_PALA;
}

//* 18.    ------------------------------------------------------------------------------------------------------- *//

void getUp()
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and go in any direction value = MAX_MOV or value = OFF *//
//* The robot can moves in any directions *//
//* params: none. *//
//* changes: set shovel speed down. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	motor[palaL] = MAX_GETUP;
	motor[palaR] = MAX_GETUP;
}

void shovelIsOff()
{
	motor[palaL] = 0;
	motor[palaR] = 0;
}

//* 19.    ------------------------------------------------------------------------------------------------------- *//

void setShovelPosition(int perc)
//* ------------------------------------------------------------------ *//
//* Refresh motor information to activate and go shovel any direction in a specific position value = MAX_PALA_D or value = MAX_PALA_U *//
//* The robot can moves in any directions shovel and stop in specific position *//
//* params: integrer perc is a numer in range 10-100 to selec where is need to stop shovel when is moving. *//
//* changes: compare position with objective and move in consecuence. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int pos1 = P1MAX - P110 * perc;
	int pos2 = P2MAX - P210 * perc;
	if(SensorValue[pot1] < pos1 && SensorValue[pot2] > pos2)
	{
		while(SensorValue[pot1] < pos1 && SensorValue[pot2] > pos2)
		{
			motor[palaL] = MAX_PALA_D;
			motor[palaR] = MAX_PALA_D;
		}
	}
	else
	{
		shovelIsOff();
	}
	if(SensorValue[pot1] > pos1 && SensorValue[pot2] < pos2)
	{
		while(SensorValue[pot1] > pos1 && SensorValue[pot2] < pos2)
		{
			motor[palaL] = MAX_PALA_U;
			motor[palaR] = MAX_PALA_U;
		}
	}
	else
	{
		shovelIsOff();
	}


}

//* 20.    ------------------------------------------------------------------------------------------------------- *//

void entrenaments()
//* ------------------------------------------------------------------ *//
//* This oly select the part to try. User control / Autonomous control *//
//* params: none. *//
//* changes: value selector *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int control = 0;
	SensorValue[AutoUser] = 0;
	repeat(forever){
		if(vexRT[Btn8U] == 1 && control == 0)
		{
			SensorValue[AutoUser] = 1;
			sleep(20);
			control = 1;
		}
		if(vexRT[Btn8U] == 1 && control == 1)
		{
			SensorValue[AutoUser] = 0;
			sleep(20);
			control = 0;
		}
		if(control == 1)
		{
			allInOff();
			autonomousControl();
		}
		else
		{
			aidaControl();
		}
	}
}
