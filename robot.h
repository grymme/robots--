#ifndef _ROBOT_H_
#define _ROBOT_H_

typedef struct
{
    int x;
    int y;
    int z;
}robotPosition;

class BaseRobot
{
    robotPosition pos;
public:
    robotPosition getPos(void);
};

    
#endif
