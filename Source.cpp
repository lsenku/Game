#include <SFML/Graphics.hpp>






constexpr float WINDOW_HEIGHT = 760.0;
constexpr float WINDOW_WIDTH = 1024.0;




int main()
{

	sf::RenderWindow window(sf::VideoMode(1024, 760), "Galaga"); // Высота и ширина окна

	sf::Image image;
	image.loadFromFile("glowing-shimmering-stars-in-space-abstract-background_250994-1378");

	sf::RenderTexture texture;
	texture.create(500, 500);
	texture.getTexture().copyToImage().saveToFile("Galaga");

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

		void takeDamage(float damage) {
			m_health -= damage;
		}

		void setPosition(sf::Vector2f& pos) {
			m_pos = pos;
		}
		void setDirection(Direction direction) {
			m_direction = direction;
		}

		float getHP() const {
			return m_health;
		}
		sf::Vector2f getSize() const {    // Это рамер персонажа
			return m_size;
		}

		sf::Vector2f getPosition() const {    // Это его расположение на экране
			return m_pos;
		}
		
		sf::Sprite getSprite() const {    // Это спрайт
			return m_sprite;
		}
		Direction getDirection() const {
			return m_direction;
		}
	};
	class PlayerController;

	enum class State {
		IDLE,
		RUN
	};

	class Player : public Character {
	private:
		State             m_state;
		PlayerController* m_controller;

		public:
		Player() = delete; 
		Player(sf::Texture& texture, sf::Vector2f start_pos, float health);
		~Player() {};

		void Update(float time) override {};

		void setState(State state);
	};


    return 0;
}