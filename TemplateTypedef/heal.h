#pragma once

class Wizard;

class Heal
{
public:
	Heal(int health);

	void invoke(Wizard& other);

private:
	int mHealth;
};
