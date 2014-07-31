#include "heal.h"

#include "wizard.h"


Heal::Heal(const int health)
	: mHealth(health)
{}

void Heal::invoke(Wizard& other)
{
	// Hurt with negative value to heal
	other.damage(-mHealth);
}