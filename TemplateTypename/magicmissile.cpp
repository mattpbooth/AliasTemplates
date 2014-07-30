#include "magicmissile.h"

#include "wizard.h"

MagicMissile::MagicMissile(const int damageDealt)
	: mDamageDealt(damageDealt)
{}

void MagicMissile::invoke(Wizard& other)
{
	other.damage(mDamageDealt);
}