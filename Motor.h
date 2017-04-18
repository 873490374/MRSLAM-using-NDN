#ifndef _MOTOR_H_
#define _MOTOR_H_
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h> 
#include <stdlib.h>
using namespace std;

class Motor {
private:
	int fd;
public:
	Motor(char *portname);
	int set_interface_attribs (int fd, int speed, int parity);
	void set_blocking(int fd, int should_block);
	void turn(char command);
	void turnCWLow();
	void turnCWMiddle();
	void turnCWHigh();
	void turnACWLow();
	void turnACWMiddle();
	void turnACWHigh();
	void stop();
	~Motor();
};
#endif