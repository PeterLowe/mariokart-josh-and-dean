#ifndef LICENCE_H
#define LICENCE_H

#include <SFML\Graphics.hpp>

/// <summary>
/// @author Peter Lowe
/// @version 1.0
/// @date may 2016
/// 
/// \brief simple page to display Licence text for fixed period.
/// 
/// </summary>
class Licence
{
public:
	Licence();
	~Licence();	
	void setUpLicenseScreen(); 

	sf::Texture m_backgroundTexture; // texture for splash screen 
	sf::Sprite m_backgroundSprite; // sprtie for splash screen 

protected:

};

#endif // !LICENCE_H