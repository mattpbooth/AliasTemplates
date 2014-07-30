#pragma once 

#include "ispell.h"

class MagicMissileSpell : public ISpell
{
public:
	explicit MagicMissileSpell(int damageDealt);

	void invoke(Wizard& other) const override;
private:
	int mDamageDealt;
};