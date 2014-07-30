#include "wizard.h"

#include "ispell.h"

Wizard::Wizard(const int health)
	: mHealth(health)
{
}

bool Wizard::cast(WeakSpellPtr spell, Wizard& other) const
{
	if (const auto lockedSpell = spell.lock())
	{
		lockedSpell->invoke(other);
		return true;
	}

	return false;
}

void Wizard::damage(const int damage)
{
	mHealth -= damage;
}