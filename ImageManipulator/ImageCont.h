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
	std::vector<unsigned char> data; //http://stackoverflow.com/a/38675700 - jezeli zobaczysz to na koniec projetku, zajrzyj tutaj, moze bedzie ci siê chcia³o zmieniæ format na cpp11 wed³ud tego komentarza
	
};

