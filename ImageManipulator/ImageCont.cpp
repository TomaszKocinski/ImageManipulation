#include "ImageCont.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
ImageCont::ImageCont()
{
}

ImageCont::~ImageCont()
{
}

void ImageCont::load(std::string str)
{
	std::ifstream input(str, std::ios::binary);
	data=std::vector<unsigned char>((
		std::istreambuf_iterator<char>(input)), //http://stackoverflow.com/questions/5420317/reading-and-writing-binary-file - coœ m¹drego, iteratorowa magia
		(std::istreambuf_iterator<char>()));
	input.close();
}
void ImageCont::save(std::string str)
{
	std::ofstream output(str, std::ios::binary);
	std::copy(data.begin(), data.end(), std::ostream_iterator<unsigned char>(output, "")); //http://stackoverflow.com/a/7769559
	output.close();
}
bool ImageCont::isstoredPNG(void)
{
	std::vector<unsigned char> headerbytes = { 137,  80,  78,  71 , 13,  10,  26,  10 };
	if (data.size() < 8) return false;
	if (equal(data.begin(), data.begin() + 8, headerbytes.begin())) return true; //http://stackoverflow.com/questions/6248044/c-comparing-two-vectors
	return false;
}
