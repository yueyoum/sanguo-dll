#include "hero.h"

float calculate(int modulus, int level, int step, float growing)
{
    float step_adjust = pow(STEP_DIFF, step-1);
    float value = modulus * step + level * growing * step_adjust;
    return value;
}


float attack(int level, int step, float growing)
{
    return calculate(20, level, step, growing);
}

float defense(int level, int step, float growing)
{
    return calculate(15, level, step, growing);
}

float hp(int level, int step, float growing)
{
    return calculate(45, level, step, growing);
}


