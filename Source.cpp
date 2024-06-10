#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>
#include <vector>
#include <list>

using namespace sf;

int main()
{ // Начало окна

	RenderWindow window(VideoMode(1280,800), "Galaga");

	Font font;
	if (!font.loadFromFile("ofont.ru_Bowler.ttf"))
	{
		
	}

	Image BulletImage;//изображение для пули
	BulletImage.loadFromFile("bullet.png"); //загрузили картинку в объект изображения
	BulletImage.createMaskFromColor(Color(0, 0, 0)); //маска для пули по черному цвету

	Text text;
	text.setFont(font); 
	text.setString("GALAGA"); //name
	text.setPosition(995, 10); // position
	text.setCharacterSize(50); // size in pixels
	text.setFillColor(Color::Red);// color
	text.setStyle(Text::Bold | Text::Underlined); //style

	///////////////////////////////////////////////////////////////////

	RectangleShape line(Vector2f(1000, 10));
	line.rotate(90);
	line.setPosition(950, 0);
	line.setFillColor(Color::Red);

	////////////////////////////////////////////////////////////////////

	Image heroimage;
	heroimage.loadFromFile("plane.png");

	Texture herotexture;
	herotexture.loadFromImage(heroimage);

	Sprite herosprite;
	herosprite.setTexture(herotexture);
	herosprite.setPosition(520, 710);
	herosprite.setScale(0.13, 0.13);

	//////////////////////////////////////////////////////////////////
	
	Image monsterimage;
	monsterimage.loadFromFile("monster.png");

	Texture monstertexture;
	monstertexture.loadFromImage(monsterimage);

	Sprite monstersprite;
	monstersprite.setTexture(monstertexture);
	monstersprite.setPosition(520, 300);
	monstersprite.setScale(0.035, 0.035);

	/////////////////////////////////////////////////////////////////////

	Image monsterimage1;
	monsterimage1.loadFromFile("monster.png");

	Texture monstertexture1;
	monstertexture1.loadFromImage(monsterimage1);

	Sprite monstersprite1;
	monstersprite1.setTexture(monstertexture1);
	monstersprite1.setPosition(300, 300);
	monstersprite1.setScale(0.035, 0.035);

	///////////////////////////////////////////////////////////////////////

	Image monsterimage2;
	monsterimage2.loadFromFile("monster.png");

	Texture monstertexture2;
	monstertexture2.loadFromImage(monsterimage2);

	Sprite monstersprite2;
	monstersprite2.setTexture(monstertexture2);
	monstersprite2.setPosition(410, 300);
	monstersprite2.setScale(0.035, 0.035);

	/////////////////////////////////////////////////////////////////////////

	Image monsterimage3;
	monsterimage3.loadFromFile("monster.png");

	Texture monstertexture3;
	monstertexture3.loadFromImage(monsterimage3);

	Sprite monstersprite3;
	monstersprite3.setTexture(monstertexture3);
	monstersprite3.setPosition(300, 200);
	monstersprite3.setScale(0.035, 0.035);

	/////////////////////////////////////////////////////////////////////////

	Image monsterimage4;
	monsterimage4.loadFromFile("monster.png");

	Texture monstertexture4;
	monstertexture4.loadFromImage(monsterimage4);

	Sprite monstersprite4;
	monstersprite4.setTexture(monstertexture2);
	monstersprite4.setPosition(520, 200);
	monstersprite4.setScale(0.035, 0.035);

	/////////////////////////////////////////////////////////////////////////////

	Image monsterimage5;
	monsterimage5.loadFromFile("monster.png");

	Texture monstertexture5;
	monstertexture5.loadFromImage(monsterimage5);

	Sprite monstersprite5;
	monstersprite5.setTexture(monstertexture5);
	monstersprite5.setPosition(410, 200);
	monstersprite5.setScale(0.035, 0.035);

	////////////////////////////////////////////////////////////////////////////////

	Clock clock;



	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			}

		if (Keyboard::isKeyPressed(Keyboard::Left)) { herosprite.move(-0.4, 0); } // Первая координата отрицательна => идем влево
		if (Keyboard::isKeyPressed(Keyboard::Right)) { herosprite.move(0.4, 0); }


			window.clear();
			window.draw(text);
			window.draw(line);
			window.draw(herosprite);
			window.draw(monstersprite);
			window.draw(monstersprite1);
			window.draw(monstersprite2);
			window.draw(monstersprite3);
			window.draw(monstersprite4);
			window.draw(monstersprite5);
			window.display();

	} // Конец окна

	return 0;
}