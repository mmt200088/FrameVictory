#pragma once
#include<iostream>
#include"CompetitionCard.h"
#include<string>
#include"AthleticsCompetitionCard.h"
#include"BallCompetitionCard.h"
#include"WaterCompetitionCard.h"
using namespace std;

enum TYPE {
	Athletics = 1,
	Ball = 2,
	Water = 3

};

class CompetitionCardFactory {
public:
	

	CompetitionCard* createCard(TYPE type);
};