//* Basic functions and global vars for move robot and their parts.


#define WHEEL 31.91857472
#define MAX 127
#define OFF 0

int HAND = 0;

void autonomousControl();

void arm();
void movement();
void allInOff();

int percent(int value);

void forwardMove();
void backwardMove();
void leftMove();
void rightMove();

void heightMoveUp();
void heightMoveDown();

void weightMoveUp();
void weightMoveDown();

void pinMoveUp();
void pinMoveDown();

void armMoveUp();
void armMoveDown();

void staticHand();

void startAllSensors();
void startSensor():