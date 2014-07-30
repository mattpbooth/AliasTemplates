#include "wizard.h"

Wizard::Wizard(const int health)
	: mHealth(health)
{
}

void Wizard::damage(const int damage)
{
	mHealth -= damage;
}