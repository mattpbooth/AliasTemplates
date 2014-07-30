#pragma once 

#include "ispell.h"

class HealSpell : public ISpell
{
public:
	explicit HealSpell(int health);

	void invoke(Wizard& other) const override;

private:
	const int mHealth;
};