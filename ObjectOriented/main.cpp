// Object Oriented approach

#include <assert.h>
#include <iostream>
#include <memory>
#include <tchar.h>

#include "healspell.h"
#include "magicmissilespell.h"
#include "pool.h"
#include "spelltypes.h"
#include "wizard.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Let battle commence" << endl;

	// Spawn two wizards
	Wizard wizardA(100);
	Wizard wizardB(100);

	// Create some magic pools and imbue them with the spells
	Pool magicMisslePool(std::make_shared<MagicMissileSpell>(50));
	Pool healPool(std::make_shared<HealSpell>(25));

	// Wizard A damages Wizard B with magic missile spell
	assert(wizardA.cast(magicMisslePool.getSpell(), wizardB));

	cout << "Wizard A cast Magic Missile at wizard B" << endl;

	// Wizard B recovers health with heal spell
	assert(wizardB.cast(healPool.getSpell(), wizardB));

	cout << "Wizard B cast Heal on himself" << endl;

	// Drain the pools
	magicMisslePool.drain();
	healPool.drain();

	cout << "Pools have lost their charge" << endl;

	// Both wizards try to cast... fail as the pools have run out of scope
	assert(!wizardA.cast(magicMisslePool.getSpell(), wizardB));
	assert(!wizardB.cast(magicMisslePool.getSpell(), wizardA));

	cout << "Both wizards failed to cast" << endl;

	return 0;
}

