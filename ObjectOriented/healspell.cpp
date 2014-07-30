#include "healspell.h"

#include "wizard.h"

HealSpell::HealSpell(const int health)
	: ISpell()
	, mHealth(health)
{
}

void HealSpell::invoke(Wizard& other) const
{
	other.damage(-mHealth);
}