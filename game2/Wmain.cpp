#include <SFML/Graphics.hpp>
#include <time.h>
#include "randomdice.h"
using namespace sf;

int w = 1920;
int h = 1080;

int main() {
	RenderWindow window(VideoMode(w, h), "Mouses'Fest");

	Texture t1, t2;
	t1.loadFromFile("images/M.jpg");
	

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	
	Texture t3;
	t3.loadFromFile("images/S.jpg");
	Sprite sprite3(t3);
	
	window.draw(sprite1);
	window.display();

	while (window.isOpen()) {

		
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();
			else if (Keyboard::isKeyPressed(Keyboard::Space)) 
			{
				window.clear();
				window.draw(sprite3);
				window.display();
				
			}		
			if (Keyboard::isKeyPressed(Keyboard::Up))
			
				
			
				
				

		}


	}

	return 0;
}