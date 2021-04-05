
#pragma once
#include <iostream>
using namespace std;
class Character
{
private:
	string name;
	string gender;
	string race;
	int Strength;
	int Dexterity;
	int Constitution;
	int Intelligence;
	int Wisdom;
	int Charisma;
	int total;

public:
	void setName(string name);
	string getName();
	void setGender(string gender);
	string getGender();
	void setRace(string race);
	string getRace();
	void setStrength(int strength);
	int getStrength();
	void setDexterity(int dexterity);
	int getDexterity();
	void setConstitution(int constitution);
	int getConstitution();
	void setIntelligence(int intelligence);
	int getIntelligence();
	void setWisdom(int wisdom);
	int getWisdom();
	void setCharisma(int charisma);
	int getCharisma();
	int totalAttributes();

};

