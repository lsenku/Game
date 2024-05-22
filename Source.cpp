#pragma once

#include <SFML/Graphics.hpp>



constexpr float WINDOW_HEIGHT = 760.0;
constexpr float WINDOW_WIDTH = 1024.0;



int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 760), "Galaga"); // Высота и ширина окна


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display(); // Вроде как должен обновлять кадр
	}
	enum class Direction : bool {
		LEFT = 0,
		RIGHT = 1
	};

	class Character {
	protected:
		float		 m_health;
		float		 m_speed;
		sf::Vector2f m_size;
		sf::Vector2f m_pos;
		sf::Sprite   m_sprite;
		Direction    m_direction = Direction::RIGHT;

		public:
		virtual ~Character() {};

		virtual void Update(float time) = 0;
		void takeDamage(float damage);

		void setPosition(sf::Vector2f& pos);
		void setDirection(Direction direction);

		float getHP() const;
		sf::Vector2f getSize() const; // Это рамер персонажа
		sf::Vector2f getPosition() const; // Это его расположение на экране
		sf::Sprite getSprite() const; // Это спрайт
		Direction getDirection() const;
	};




    return 0;
}