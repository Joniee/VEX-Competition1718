//* Basic functions and global vars for move robot and their parts.


int OFF = 0;
int HAND = 0;
int MAX = 127;

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