#ifndef COMMAND_H_
#define COMMAND_H_


enum
{
    EXIT = 0,
    STATUS = 1,
    PUT_FRONT = 2,
    PUT_BACK = 3,
    PUT_BETWEEN = 4,
    TAKE_BACK = 5,
    SIZE = 6,
    DELETE_KEY = 7,

};

typedef int command_t;

void command_execute(command_t command);


#endif