#pragma once 

#include "spelltypes.h"

class Wizard final
{
public:
	Wizard(int health);

	void damage(int damage);

	template<typename T>
	bool cast(typename SpellType<T>::SpellWeakPtr spell, Wizard& other) const
	{
		if (const auto lockedSpell = spell.lock())
		{
			lockedSpell->invoke(other);
			return true;
		}

		return false;
	}

private:
	int mHealth;
};
