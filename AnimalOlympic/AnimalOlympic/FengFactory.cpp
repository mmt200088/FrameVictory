#include "FengFactory.h"
#include "FengGoggleProduct.h"
#include "FengHelmetProduct.h"
#include "FengKneecapProduct.h"

void FengFactory::CreateGoggle()
{
	FengGoggleProduct goggle;
	goggle.CreateGoggleProduct();
}

void FengFactory::CreateHelmet()
{
	FengHelmetProduct helmet;
	helmet.CreateHelmetProduct();
}

void FengFactory::CreateKneecap()
{
	FengKneecapProduct kneecap;
	kneecap.CreateKneecapProduct();
}
