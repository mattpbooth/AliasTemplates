#pragma once

#include "spell.h"

#include "magicmissile.h"
#include "heal.h"

// Spells
typedef Spell<MagicMissile> MagicMissileSpell;
typedef Spell<Heal> HealSpell;

// Spell pointers
typedef std::shared_ptr<Spell<MagicMissile>> MagicMissileSpellPtr;
typedef std::shared_ptr<Spell<Heal>> HealSpellPtr;

// Spell Types
template < typename T >
class SpellType
{
public:
	typedef std::weak_ptr< Spell< T > > SpellWeakPtr;
	typedef std::shared_ptr< Spell< T > > SpellSharedPtr;
};

// Bound spell types
typedef SpellType<MagicMissile> MagicMissileSpellType;
typedef SpellType<Heal> HealSpellType;