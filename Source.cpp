#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

using namespace sf;

int main()
{ // Начало окна

	RenderWindow window(VideoMode(1024, 760), "Galaga");

	Image heroimage;
	heroimage.loadFromFile("plane.png");

	Texture herotexture;
	herotexture.loadFromImage(heroimage);

	Sprite herosprite;
	herosprite.setTexture(herotexture);
	herosprite.setPosition(470, 680);
	herosprite.setScale(0.1, 0.1);

	//////////////////////////////////////////////////////////////////
	
	Image monsterimage;
	monsterimage.loadFromFile("monster.png");

	Texture monstertexture;
	monstertexture.loadFromImage(monsterimage);

	Sprite monstersprite;
	monstersprite.setTexture(monstertexture);
	monstersprite.setPosition(300, 300);
	monstersprite.setScale(0.1, 0.1);
	
	Clock clock;

	


	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			}

		if (Keyboard::isKeyPressed(Keyboard::Left)) { herosprite.move(-0.3, 0); } // Первая координата отрицательна => идем влево
		if (Keyboard::isKeyPressed(Keyboard::Right)) { herosprite.move(0.3, 0); }

			window.clear();
			window.draw(herosprite);
			window.draw(monstersprite);
			window.display();

	} // Конец окна

	return 0;
}