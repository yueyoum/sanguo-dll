#include "equipment.h"

int calculate(int value, int level, int growing)
{
    return value + level * growing;
}

int attack(int base_value, int level, int growing)
{
    return calculate(base_value, level, growing);
}

int defense(int base_value, int level, int growing)
{
    return calculate(base_value, level, growing);
}

int hp(int base_value, int level, int growing)
{
    return calculate(base_value, level, growing);
}

