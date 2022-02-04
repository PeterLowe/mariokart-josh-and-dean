
#include "Licence.h"
#include "Game.h"
#include <iostream>


Licence::Licence()
{
}


Licence::~Licence()
{
}

void Licence::setUpLicenseScreen()
{
	if (!m_backgroundTexture.loadFromFile("ASSETS\\IMAGES\\deanAndJosh"))
	{
		std::cout << "Couldnt load the sexiest men alive" << std::endl; 
	}

	m_backgroundTexture.setRepeated(true);
	m_backgroundSprite.setTexture(m_backgroundTexture);
	m_backgroundSprite.setTextureRect(sf::IntRect(0, 0, 800, 600)); 
}
