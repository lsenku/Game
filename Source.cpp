#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{ // Начало окна

	sf::RenderWindow window(sf::VideoMode(1024, 760), "Galaga");

	sf::Texture texture;
	if (!texture.loadFromFile("/png-transparent-bomber-plane-aircraft-jet-airplane-war-army-pixel-pixel-art.png"))
	{
		std::cout << "err";
	}
	
	
	while (window.isOpen())
	{
		sf::Event event;  
		while (window.pollEvent(event))
		{
			
		sf::Sprite sprite;
		sprite.setTexture(texture);
		window.draw(sprite);
			
		if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.display(); 

	} // Конец окна
	return 0;
}