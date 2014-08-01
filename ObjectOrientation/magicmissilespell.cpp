#include "magicmissilespell.h"

#include "wizard.h"

MagicMissileSpell::MagicMissileSpell(const int damageDealt)
	: ISpell()
	, mDamageDealt(damageDealt)
{}

void MagicMissileSpell::invoke(Wizard& other) const
{
	other.damage(mDamageDealt);
}
