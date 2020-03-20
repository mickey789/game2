#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int w = 1920;
int h = 1080;

int main() {
	RenderWindow window(VideoMode(w, h), "Mouses'Fest");

	Texture t1, t2;
	t1.loadFromFile("images/M.jpg");
	t2.loadFromFile("images/tiles.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);



	while (window.isOpen()) {
		Vector2i pos = Mouse::getPosition(window);

		window.draw(sprite1);
		sprite2.setPosition(500, 500);
		window.draw(sprite2);
		window.display();

		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();
			if (e.type == Event::MouseButtonPressed)
				window.clear(Color::White);

		}


	}

	return 0;
}