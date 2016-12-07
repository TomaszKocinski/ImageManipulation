#pragma once
#include<vector>
enum class byte : std::uint8_t {};
class ImageCont
{
public:
	ImageCont();
	~ImageCont();
	void load(std::string);
	void save(std::string);
	bool isstoredPNG(void);
	//void save();
private:
	std::vector<unsigned char> data; //http://stackoverflow.com/a/38675700 - jezeli zobaczysz to na koniec projetku, zajrzyj tutaj, moze bedzie ci si� chcia�o zmieni� format na cpp11 wed�ud tego komentarza
	
};

