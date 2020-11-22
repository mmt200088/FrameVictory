#include "LongFactory.h"
#include "LongGoggleProduct.h"
#include "LongHelmetProduct.h"
#include "LongKneecapProduct.h"

void LongFactory::CreateGoggle()
{
	LongGoggleProduct goggle;
	goggle.CreateGoggleProduct();
}

void LongFactory::CreateHelmet()
{
	LongHelmetProduct helmet;
	helmet.CreateHelmetProduct();
}

void LongFactory::CreateKneecap()
{
	LongKneecapProduct kneecap;
	kneecap.CreateKneecapProduct();
}
