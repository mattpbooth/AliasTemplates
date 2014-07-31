#pragma once

#include "spelltypes.h"

template<typename T>
class Pool final
{
public:
	explicit Pool(typename SpellType<T>::SpellSharedPtr spellPtr)
		: mSpellPtr(std::move(spellPtr))
	{
	}
	
	void drain()
	{
		mSpellPtr.reset();
	}

	typename SpellType<T>::SpellWeakPtr getSpell() const
	{
		return mSpellPtr;
	}

private:
	typename SpellType<T>::SpellSharedPtr mSpellPtr;
};
