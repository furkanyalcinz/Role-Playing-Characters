// Role Playing Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Characters.h"
#include <iostream>
#include<list>
#include<vector>
#include<string>
int main()
{
    list<Character>characterList;

    int numberOfCharacter;
    cout << "How many characters do you want to create?" << endl;
    cin >> numberOfCharacter;

    string name, gender, race;
    int strength, dexterity, constitution, intelligence, wisdom, charisma;

    for (int i = 0; i < numberOfCharacter; i++)
    {
        cout << "Character name: " << endl;
        cin >> name;
        cout << "Character gender: " << endl;
        cin >> gender;
        cout << "Character race: " << endl;
        cin >> race;
        while (race != "human" && race != "elf" && race != "dwarf")
        {
            cout << "race can be elf, human of dwarf!" << endl;
            cin >> race;
            if (race == "human" || race == "elf" || race == "dwarf")
            {
                break;
            }
        }
        cout << "Character strength: " << endl;
        cin >> strength;
        cout << "Character dexterity: " << endl;
        cin >> dexterity;
        cout << "Character constitution:" << endl;
        cin >> constitution;
        cout << "Character intelligence:" << endl;
        cin >> intelligence;
        cout << "Character wisdom" << endl;
        cin >> wisdom;
        cout << "Character charisma" << endl;
        cin >> charisma;

        Character* character = new Character();
        character->setName(name);
        character->setRace(race);
        character->setCharisma(charisma);
        character->setConstitution(constitution);
        character->setDexterity(dexterity);
        character->setGender(gender);
        character->setIntelligence(intelligence);
        character->setStrength(strength);
        character->setWisdom(wisdom);

        characterList.push_back(*character);
    }
    for (list<Character>::iterator it = characterList.begin(); it != characterList.end(); ++it)
    {
        cout << "Name: " << it->getName() << endl;
        cout << "Gender : " << it->getGender() << endl;
        cout << "Race : " << it->getRace() << endl;
        cout << "" << endl;
        cout << "STR: " << it->getStrength() << endl;
        cout << "DEX: " << it->getDexterity() << endl;
        cout << "CON: " << it->getConstitution() << endl;
        cout << "INT: " << it->getIntelligence() << endl;
        cout << "WIS: " << it->getWisdom() << endl;
        cout << "CHA: " << it->getCharisma() << endl;
        cout << endl;
        cout << "TOTAL: " << it->totalAttributes() << endl;
        cout << "---------------" << endl;
    }


}


