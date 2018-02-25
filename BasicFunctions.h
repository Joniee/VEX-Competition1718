//* Basic functions and global vars for move robot and their parts.


#define WHEEL 31.91857472	//* Value in centimeters.
#define MAX 127
#define OFF 0
#define NUMBER_SENSOR = 5			//* Number of sensors connected.
#define LAST_SENSOR = 33		//* Variable's name of last sensor connected.
#define NUMBER_MOTOR = 10			//* Number of motors connected.

int HAND = 0;

void autonomousControl();

void arm();
void movement();
void allInOff();
void motorsInOff();
void motorWeelInOff();

int percent(int value);
int robotPath(int distance);


void forwardMove(int distance);
void backwardMove();
void leftMove();
void rightMove();

void weightMoveUp();
void weightMoveDown();
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
