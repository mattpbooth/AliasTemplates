#pragma once

#include "spell.h"

#include "magicmissile.h"
#include "heal.h"

// Spells
using MagicMissileSpell = Spell<MagicMissile>;
using HealSpell = Spell<Heal>;

// Spell types
template<typename T>
using SpellSharedPtr = std::shared_ptr<Spell<T>>;

template<typename T>
using SpellWeakPtr = std::weak_ptr<Spell<T>>;

