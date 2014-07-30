#pragma once 

#include "spelltypes.h"

class Wizard final
{
public:
	Wizard(int health);

	void damage(int damage);

	bool cast(WeakSpellPtr spell, Wizard& other) const;

private:
	int mHealth;
};
