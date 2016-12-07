#pragma once
#include "ImageCont.h"
class Root
{
public:
	Root();
	~Root();
	void loop();

private:
	ImageCont ImageFirst;
	ImageCont ImageSecond;
	ImageCont ImageFinal;;
};

