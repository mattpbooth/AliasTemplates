#pragma once

class Wizard;

class ISpell abstract
{
public:
	ISpell(){};
	virtual ~ISpell(){};
	virtual void invoke(Wizard& other) const abstract;

	ISpell(const ISpell&) = delete;
	ISpell& operator=(const ISpell&) = delete;
};