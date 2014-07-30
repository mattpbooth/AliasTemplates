#pragma once

#include <memory>

class Wizard;

template<typename T>
class Spell
{
public:
	Spell()
	{}
	Spell(const int value)
		: mSpell(value)
	{}

	const char& getFriendlyName() const
	{
		mSpell.getFriendlyName();
	}

	void invoke(Wizard& other)
	{
		mSpell.invoke(other);
	}
	
private:
	T mSpell;
};