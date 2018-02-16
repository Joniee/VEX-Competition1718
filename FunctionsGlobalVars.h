//* All functions and global variables declared *//



//* Static global values for motors *//

//* Program Selector Autonomous *//
//* 0 = Terrassa, 1 = other *//
int enemy = 0;

//* Shovel values *//

//* Get up the shovel *//
int MAX_PALA_U = -127;

//* Get down the shovel *//
int MAX_PALA_D = 40;

//* Get up the robot if he is overturned. *//
int MAX_GETUP = 127;

//* Keeps objects on shovel with little driving force *//
int STOP_PALA = -20;

//* Wheel values *//
	//* Max speed for wheel motor *//
int MAX_MOV = 127;

//* Catapult values*//
int MAX_THROW = 60;

//* OFF value, stop motor *//
int OFF = 0;

//* Potenciometers initial values *//
	//* MAX SENSOR *//
int P1MAX = 3330;
int P2MAX = 700;
	//* MIN SENSOR *//
int P1MIN = 1430;
int P2MIN = 2300;

	//* 10% MOV SENSOR *//
int P110 = 190;
int P210 = 160;

//* Functions *//
	//*		TURN OFF ONLY WHEEL MOTORS *//
	//* Refresh motor information to deactivate value = OFF *//
void onlyMotorInOff();

	//*		TURN OFF ALL MOTORS *//
	//* Refresh motor information to deactivate value = OFF *//
void allInOff();

	//*		TURN OFF ONLY THROWER MOTORS *//
	//* Refresh motor information to deactivate value = OFF *//
void throwerInOff();

void shovelInOff();


	//*		MOVEMENT	*//
	//* Refresh motor information to activate to go ahead value = MAX_MOV or value = OFF *//
void onForward();
	//* Refresh motor information to activate to go northeast direction value = MAX_MOV or value = OFF *//
void onNorthEast();
	//* Refresh motor information to activate to go northwest direction value = MAX_MOV or value = OFF *//
void onNorthWest();
	//* Refresh motor information to activate to go south direction value = MAX_MOV or value = OFF *//
void onBackward();
	//* Refresh motor information to activate to go southwest direction value = MAX_MOV or value = OFF *//
void onSouthWest();
	//* Refresh motor information to activate to go southeast value = MAX_MOV or value = OFF *//
void onSouthEast();
	//* Refresh motor information to activate to go east direction value = MAX_MOV or value = OFF *//
void onEast();
	//* Refresh motor information to activate to go west direction value = MAX_MOV or value = OFF *//
void onWest();
	//* Refresh motor information to activate to rotate on right value = MAX_MOV or value = OFF *//
void rotateRight();
	//* Refresh motor information to activate to rotate on left value = MAX_MOV or value = OFF *//
void rotateLeft();

	//* Refresh motor information to activate and go in any direction value = MAX_MOV or value = OFF *//
void movement();

//* GENERAL FUNCTIONS *//
	//* This oly select the part to try. User control / Autonomous control *//
void entrenaments();
void aidaControl();
void autonomousControl();

//* SHOVEL FUNCTIONS *//
	//* Refresh motor informations to go down shovel. *//
void shovelUp();
	//* Refresh motor information to go up shovel. *//
void shovelDown();
	//* Refresh motor information to hold shovel. *//
void shovelHeld();
	//* Refresh motor information to turn off shovel. *//
void shovelIsOff();
	//* Refresh motor information to thros a star. *//
void thrower();
	//* Refresh motor information shovel for down shovel and then, wake up robot. *//
void getUp();
	//* Refres motor information shovel for move shovel to specific position in %. *//
void setShovelPosition(int perc);


//* ------------------------------------------------------------------------------------------------------------ *//
//* Other Information *//

//*				-Remote Control without Analogics-
//*
//*		|	(5U)														(6U)	|
//*		|	(5D)														(6D)	|
//*		|																				|
//*		|					((7U))						 (8U)				|
//*		|			(7L)			(7R)		(8L)			(8R)	|
//*		|					 (7D)					 		 (8D)				|
