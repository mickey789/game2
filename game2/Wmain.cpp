#include <SFML/Graphics.hpp>
//#include <time.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
using namespace std;
using namespace sf;

int w = 1920;
int h = 1080;

char randomDice()
{
	srand(time(0));
	int x = rand()%2+1;
	switch (x)
	{
	case 1:
		return  'A';
	case 2:
		return  'B';
	}
	
}


	

int main() {
	RenderWindow window(VideoMode(w, h), "Mouses'Fest");

	Texture t1, t2;
	t1.loadFromFile("images/M.jpg");
	t2.loadFromFile("images/red.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);

	Texture t3;
	t3.loadFromFile("images/S.jpg");
	Sprite sprite3(t3);

	window.draw(sprite1);
	window.display();

	while (window.isOpen())
	{
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
			else if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				/*char n = randomDice();
				if (n == 'A')
				{
					window.draw(sprite3);
					window.display();
				}
				if (n == 'B')
				{
					window.clear();
					window.display();
				}*/
				float i = 0, j = 900;
				for (int k = 0; k < 300; k++) {

					sprite2.setPosition(i, j);

					window.draw(sprite2);
					window.display();
					j -= 3;
					i += 3;

				}
				/*float i = 0, j = 900;
				for (int k = 0; k < 300; k++) {

					sprite2.setPosition(pow(i, 2), j);
					
					window.draw(sprite2);
					window.display();
					j -= 3;
					i += 0.1;
					
				}
				float g = 0, h = 900;
				for (int k = 0 ; k < 300 ; k++){
					
					sprite2.setPosition(h, pow(g, 2));
					
					window.draw(sprite2);
					window.display();
					h += 3;
					g += 0.1;
					
				}*/
				
			/*	int i=0,x=0,y=0; 
				while (i < 500) {
					x += 2;
					sprite2.setPosition(x,y++);
					window.clear();
					window.draw(sprite2);
					window.display();
					i++;

				}*/





			}
			}
	}
return 0;
}