#include"CompetitionCardFactory.h"

using namespace std;

CompetitionCard* CompetitionCardFactory::createCard(TYPE type) {
	CompetitionCard* card = nullptr;

	switch (type) {
	case 1:
		card = new AthleticsCompetitionCard();
		break;
	case 2:
		card = new BallCompetitionCard();
		break;
	case 3:
		card = new WaterCompetitionCard();
		break;
	default:
		break;

	}

	return card;
}