#pragma once

#include "spelltypes.h"

template<typename T>
class Pool final
{
public:
	explicit Pool(SpellSharedPtr<T> spellPtr)
		: mSpellPtr(std::move(spellPtr))
	{
	}
	
	void drain()
	{
		mSpellPtr.reset();
	}

	SpellWeakPtr<T> getSpell() const
	{
		return mSpellPtr;
	}

private:
	SpellSharedPtr<T> mSpellPtr;
};
