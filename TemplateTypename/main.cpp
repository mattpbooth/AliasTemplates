// Template Typedef approach
// One of the painful details of this approach is the explicit type declaration for templates.
// Here's why: http://channel9.msdn.com/Series/C9-Lectures-Stephan-T-Lavavej-Core-C-/Stephan-T-Lavavej-Core-C-2-of-n

#include <assert.h>
#include <iostream>
#include <tchar.h>

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
	Pool<MagicMissile> magicMisslePool(std::make_shared<MagicMissileSpell>(50));
	Pool<Heal> healPool(std::make_shared<HealSpell>(25));

	// Wizard A damages Wizard B with magic missile spell
	assert(wizardA.cast<MagicMissile>(magicMisslePool.getSpell(), wizardB));

	cout << "Wizard A cast Magic Missile at wizard B" << endl;

	// Wizard B recovers health with heal spell
	assert(wizardB.cast<Heal>(healPool.getSpell(), wizardB));

	cout << "Wizard B cast Heal on himself" << endl;

	// Drain the pools
	magicMisslePool.drain();
	healPool.drain();

	cout << "Pools have lost their charge" << endl;

	// Both wizards try to cast... fail as the pools have run out of scope
	assert(!wizardA.cast<MagicMissile>(magicMisslePool.getSpell(), wizardB));
	assert(!wizardB.cast<MagicMissile>(magicMisslePool.getSpell(), wizardA));

	cout << "Both wizards failed to cast" << endl;

	return 0;
}

