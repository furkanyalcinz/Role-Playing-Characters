#include "Characters.h"


void Character::setName(string nameChr) //This function provide to save name of character.
{
	name = nameChr;
}
void Character::setGender(string genderChr)//This function provide to save gender of character.
{
	gender = genderChr;
}
void Character::setRace(string raceChr)//This function provide to save race of character.
{
	race = raceChr;
}
void Character::setStrength(int strengthChr)//This function provide to save strength of character.
{
	Strength = strengthChr;
}
void Character::setDexterity(int dexterityChr)//This function provide to save dexterity of character.
{
	Dexterity = dexterityChr;
}
void Character::setConstitution(int constitutionChr)//This function provide to save constitution of character.
{
	Constitution = constitutionChr;
}
void Character::setIntelligence(int intelligenceChr)//This function provide to save intelligence of character.
{
	Intelligence = intelligenceChr;
}
void Character::setWisdom(int wisdomChr)//This function provide to save wisdom of character.
{
	Wisdom = wisdomChr;
}
void Character::setCharisma(int charismaChr)//This function provide to save charisma of character.
{
	Charisma = charismaChr;
}

//Those functions get functions.


string Character::getName()
{
	return name;
}
string Character::getGender()
{
	return gender;
}
string Character::getRace()
{
	return race;
}
int Character::getStrength()
{
	return Strength;
}
int Character::getDexterity()
{
	return Dexterity;
}
int Character::getConstitution()
{
	return Constitution;
}
int Character::getIntelligence()
{
	return Intelligence;
}
int Character::getWisdom()
{
	return Wisdom;
}
int Character::getCharisma()
{
	return Charisma;
}
int Character::totalAttributes()
{
	total = Charisma + Wisdom + Intelligence + Constitution + Dexterity + Strength;
	return total;
}