
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
	int i;

	for(int i = 0; i < NUMBER_MOTOR; i++)
	{
		motor[i] = OFF;
	}
	for(i = NUMBER_MOTOR; i < LAST_SENSOR; i++)
	{
		SensorValue[i] = OFF;
	}
}

void motorsInOff()
{
	int i;

	for(i = 0; i < NUMBER_MOTOR; i++)
	{
		motor[i] = OFF;
	}
}

void motorWheelInOff()
{
	int i;

	for(i=0; i < 3; i++)
	{
		motor[i] = OFF;
	}
	motor[9] = OFF;
}

int percent(int value)
{
	int aux;
	aux = ((value * MAX)/100);
	return aux;
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

void forwardMove(int distance)
//* ------------------------------------------------------------------ *//
//* Move wheel motors for move robot on forward direction with encoders and gyro *//
//* param: int distance (Value in centimeters) - The distance that the robot will travel. *//
//* changes: array motor values equal to result of function percent (a number from -127 to 127). *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int normalSpeed = percent(100);
	int slowSpeed = percent(95);
	int initialValue = SensorValue[15];


	while(SensorValue[11] < distance)
	{
		if(SensorValue[20] > SensorValue[22] && SensorValue[10] > initialValue)		//* Every condition are wrong, surplus two motor values.
		{
			motor[0] = normalSpeed;
			motor[1] = slowSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[20] < SensorValue[22] && SensorValue[10] < initialValue)		//* Wrong too.
		{
			motor[0] = normalSpeed;
			motor[1] = normalSpeed;
			motor[2] = slowSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[20] == SensorValue[22] && SensorValue[10] == initialValue)		//* Wrong too.
		{
			motor[0] = normalSpeed;
			motor[1] = normalSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
	}
	startSensor(20);
	startSensor(21);
	startSensor(22);
	startSensor(23);
	motorWheelInOff();
}

void backwardMove(int distance)
//* ------------------------------------------------------------------ *//
//* Move wheel motors for move robot on forward direction with encoders and gyro *//
//* param: int distance (Value in centimeters) - The distance that the robot will travel. *//
//* changes: array motor values equal to result of function percent (a number from -127 to 127). *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int normalSpeed = -percent(100);
	int slowSpeed = -percent(95);
	int initialValue = SensorValue[15];


	while(SensorValue[20] < distance)
	{
		if(SensorValue[20] > SensorValue[22] && SensorValue[10] < initialValue)		//* Every condition are wrong, surplus two motor values.
		{
			motor[0] = normalSpeed;
			motor[1] = slowSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[20] < SensorValue[22] && SensorValue[10] > initialValue)		//* Wrong too.
		{
			motor[0] = normalSpeed;
			motor[1] = normalSpeed;
			motor[2] = slowSpeed;
			motor[9] = normalSpeed;
		}
		if(SensorValue[20] == SensorValue[22] && SensorValue[10] == initialValue)		//* Wrong too.
		{
			motor[0] = normalSpeed;
			motor[1] = normalSpeed;
			motor[2] = normalSpeed;
			motor[9] = normalSpeed;
		}
	}
	startSensor(20);
	startSensor(21);
	startSensor(22);
	startSensor(23);
	motorWheelInOff();
}

void leftMove(int degrees)
//* ------------------------------------------------------------------ *//
//* Move wheel motors for turn left the robot with encoders and gyro *//
//* param: int degrees (Value in degrees) - The distance that the robot will turn. *//
//* changes: array motor values equal to result of function percent (a number from -127 to 127). *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int normalSpeed = percent(100);
	int finalValue = SensorValue[10] - degrees;


	while(SensorValue[10] > finalValue)
	{
		motor[0] = normalSpeed;
		motor[9] = normalSpeed;
	}
	startSensor(20);
	startSensor(21);
	startSensor(22);
	startSensor(23);
	motorWheelInOff();
}


void rightMove(int degrees)
//* ------------------------------------------------------------------ *//
//* Move wheel motors for turn right the robot with encoders and gyro *//
//* param: int degrees (Value in degrees) - The distance that the robot will turn. *//
//* changes: array motor values equal to result of function percent (a number from -127 to 127). *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//
{
	int normalSpeed = -percent(100);
	int finalValue = SensorValue[10] - degrees;


	while(SensorValue[10] < finalValue)
	{
		motor[0] = normalSpeed;
		motor[9] = normalSpeed;
	}
	startSensor(20);
	startSensor(21);
	startSensor(22);
	startSensor(23);
	motorWheelInOff();
}

void weightIn()
{
	if(SensorValue[27] == 1)
	{
		weightMoveUp();
	}
}

void weightOut()
{
	weightMoveDown();
}

void weightMoveUp()
{
	motor[7] = percent(-100);
	if (SensorValue[27] == 1)
	{
		motor[7] = OFF;
	}
}

void weightMoveDown()
{
	motor[7] = percent(100);
}

void weightOff()
{
	motor[7] = OFF;
}

void pinMoveOpen()
{
	motor[8] = percent(100);
}

void pinMoveClose()
{
	motor[8] = percent(-100);
}

void pinOff()
{
	motor[8] = OFF;
}

void pinBlocked()
{
	motor[8] = percent(-10);
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

void armBlocked()
{
	/* Motor integrated encoder
	if(nMotorEnconder[motor] > 100)
	{
		motor[5] = percent(20);
		motor[6] = percent(-20);
	}
	if(nMotorEnconder[motor] < 100)
	{
		motor[5] = percent(-20);
		motor[6] = percent(20);
	}
	*/
}

void startAllSensor()
{
	int i;

	for(i = (NUMBER_MOTOR); i <= LAST_SENSOR; i++)
	{
		startSensor(i);
	}
	//*nMotorEnconder[motor] = 0;
}

void startSensor (int sensor)
{
	SensorValue[sensor] = 0;
}
