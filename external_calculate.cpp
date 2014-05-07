#include "external_calculate.h"


// float Hero::step_diff = 1.08;
// int Hero::modulus_attack = 20;
// int Hero::modulus_defense = 15;
// int Hero::modulus_hp = 45;


int Hero::_calculate(int m, int level, int step, float growing)
{
    float step_adjust = pow(step_diff, step-1);
    float value = m * step + level * growing * step_adjust;
    return int(value);
}

int Hero::attack(int level, int step, float growing)
{
    return _calculate(modulus_attack, level, step, growing);
}

int Hero::defense(int level, int step, float growing)
{
    return _calculate(modulus_defense, level, step, growing);
}

int Hero::hp(int level, int step, float growing)
{
    return _calculate(modulus_hp, level, step, growing);
}



int Equipment::attack(int base, int level, int growing)
{
    return base + level * growing;
}

int Equipment::defense(int base, int level, int growing)
{
    return base + level * growing;
}

int Equipment::hp(int base, int level, int growing)
{
    return base + level * growing;
}


