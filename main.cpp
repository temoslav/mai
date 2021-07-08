#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
	int tick=0;
	int x = 20;
	int y = 40;
	RenderWindow window(VideoMode(600, 600), "by temoslav", Style::Close);
	
	while (window.isOpen()) {
		Event event;
		window.clear(Color(250, 220, 100, 0));
		CircleShape triangle(100.f, 3);
		triangle.setPosition(150, 150);
		triangle.setOutlineColor(Color::Black);
		triangle.setFillColor(Color::Red);
		triangle.setOrigin(50, 50);
		triangle.getRotation();
		triangle.setRotation(tick);
		
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}


			if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::A)) {
				system("pause");
				
			}

		}
		window.draw(triangle);
		sleep(milliseconds(10));
		window.display();
		tick++;
	}
	
	return 0;
}