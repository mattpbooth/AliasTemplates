#include "pool.h"

#include "ispell.h"

Pool::Pool(SharedSpellPtr spellPtr)
	: mSpellPtr(std::move(spellPtr))
{
}

void Pool::drain()
{
	mSpellPtr.reset();
}

WeakSpellPtr Pool::getSpell() const
{
	return mSpellPtr;
}