//* Basic functions and global vars for move robot and their parts.


#define WHEEL 31.91857472	//* Value in centimeters.
#define MAX 127
#define OFF 0
#define LAST_SENSOR 30		//* Variable's name of last sensor connected.
#define NUMBER_MOTOR 10			//* Number of motors connected.

int HAND = 0;

void autonomousControl();

void arm();
void movement();
void allInOff();
void motorsInOff();
void motorWheelInOff();

int percent(int value);
int robotPath(int distance);


void forwardMove(int distance);
void backwardMove(int distance);
void leftMove(int degrees);
void rightMove(int degrees);

void weightMoveUp();
void weightMoveDown();
void weightIn();
void weightOut();
void weightOff();

void pinMoveOpen();
void pinMoveClose();
void pinOff();
void pinBlocked();

void armMoveUp();
void armMoveDown();
void armBlocked();


void startAllSensor();
void startSensor(int sensor);
