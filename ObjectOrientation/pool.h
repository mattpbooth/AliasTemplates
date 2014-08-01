#pragma once

#include "spelltypes.h"

class Pool final
{
public:
	explicit Pool(SharedSpellPtr spellPtr);

	void drain();
	WeakSpellPtr getSpell() const;

private:
	SharedSpellPtr mSpellPtr;
};
