#pragma once

class Wizard;

class MagicMissile
{
public:
	MagicMissile(int damageDealt);

	void invoke(Wizard& other);

private:
	const int mDamageDealt;
};