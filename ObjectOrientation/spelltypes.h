#pragma once

#include <memory>

class ISpell;

typedef std::weak_ptr<ISpell> WeakSpellPtr;
typedef std::shared_ptr<ISpell> SharedSpellPtr;