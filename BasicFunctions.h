//* Basic functions and global vars for move robot and their parts.


#include "BasicFunctions.c"

int OFF = 0;
int MAX = 250;
int MIN = -250;



void pre_auton();
void autonomous_control();


void control();
void arm();
void movement();
void allInOff();

int percent(int value);

void forwardMove();
void backwardMove();
void leftMove();
void rightMove();

void heightMove();

void weightMove();

void pinMove();

void armMove()

