#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;

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
    BaseRobot(void)
    {
        pos.x = pos.y = pos.z 0;
    };
    robotPosition getPos(void);
}

    
#endif
