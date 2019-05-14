#include "pch.h"
#include <SFML/Graphics.hpp>
// SFML_Test.cpp : snake game
//using namespace sf
#include <time.h>

//dimensions for window size and background
int num_vertBox = 30, num_horzBox = 20;
int size = 16; //number of pixels
int w = size * num_horzBox;  //background number of pixels in width
int h = size * num_vertBox;    //background number of pixels in height

//Snake variables to determine length and direction
int direction;    //direction the snake is moving 
int direction2;
int snake_length = 1; 
int snake_length2 = 1;

//Actual Snake in game is an array of x,y coordinates of sprite2
struct Snake
{
	int x, y;        //each sprite of snake needs an x,y coordinate
}s[100];

struct Snake2
{
	int x2, y2;        //each sprite of snake needs an x,y coordinate
}s2[100];


//***NEW*** this is the fruit or food that the snake will eat
//struct Fruit
//{
//	int x, y;    // only need one sprite needed for one food item
//}food;

//finish line touched to win
struct WinPath
{
	int x, y;    
}path[20];

struct Spike
{
	int x, y;
}spike[80];

//move snake head based on user input and body by incrementing 
//forward by iterating through arrays previous position
void move() {

	//1st update body so everything updates in proper order
	//move the body only!  s[0] = head will not be changed here
	//for (int i = snake_length; i > 0; i--)
	//{
		//s[i].x = s[i - 1].x;
		//s[i].y = s[i - 1].y;
	//}
	//2nd update the head
	//Head of snake, s[0] depends on direction user inputs 
	//if user presses up
	//if (direction == 0)
		//s[0].y -= 1;

	//if user presses down
	if (direction == 1)
		s[0].y += 1;

	//if user presses left
	if (direction == 2)
		s[0].x -= 1;

	//if user presses right
	if (direction == 3)
		s[0].x += 1;


	//***NEW*** If Snake eats food it should grow
	//check if snake head = food location
	//if (((s[0].x) == food.x) && ((s[0].y) == food.y))
	//{
		//increment snake
	//	snake_length++;

		//Randomly place food somewhere else
		//food.x = rand() % num_horzBox;
		//food.y = rand() % num_vertBox;
	//}

	//***NEW*** Boundary Checking snake as is hits screen end
	//loop snake back on other side
	//LEFT and RIGHT
	if (s[0].x > num_horzBox)
		s[0].x = 0;
	if (s[0].x < 0)
		s[0].x = num_horzBox;
	//TOP and BOTTOM
	//if (s[0].y > num_vertBox)
	//	s[0].y = 0;
	//if (s[0].y < 0)
		//s[0].y = num_vertBox;

	////***NEW*** Check if you eat body of snake
	//for (int i = 1; i < snake_length; i++)
	//{
		//Cut Snake body from place eaten
	//	if (s[0].x == s[i].x && s[0].y == s[i].y)
	//		snake_length = i;

	//y coordinates
	//spike[0].y = 10;
	//spike[1].y = 15;
	//spike[2].y = 16;
	//spike[3].y = 27;

	//1st line spikes to restart player
	for (int i = 0; i < 5;i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[0].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	 
	}
	for (int i = 9; i < 15; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[0].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}
	for (int i = 17; i < 20; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[0].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}

	//second line spikes restart player
	for (int i = 7; i < 10; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[1].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}
	for (int i = 0; i < 5; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[1].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}
	for (int i = 12; i < 19; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[1].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}
	//3rd line spikes restart player

	for (int i = 6; i < 10; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[2].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}	
	for (int i = 0; i < 5; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[2].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}

	}
	for (int i = 13; i < 19; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[2].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}

	//4th line

	for (int i = 5; i < 8; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[4].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[4].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 9; i < 15; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[4].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 16; i < 18; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[4].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}

	//5th line spikes to restart player
	for (int i = 0; i < 6; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[3].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 7; i < 10; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[3].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 11; i < 17; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[3].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}
	for (int i = 18; i < 20; i++) {
		if (((s[0].x) == spike[i].x) && ((s[0].y) == spike[3].y)) {
			s[0].x = 10;
			s[0].y = 3;
		}
	}

	//game winner
		if ((s[0].y) == path[1].y) {
			printf("WINNER RED PLAYER\n");
			//restart players
			s[0].x = 10;
			s[0].y = 3;
			s2[0].x2 = 11;
			s2[0].y2 = 3;
			
		}




}

void move2() {

	//1st update body so everything updates in proper order
	//move the body only!  s[0] = head will not be changed here
	//for (int i = snake_length2; i > 0; i--)
	//{
		//s2[i].x2 = s2[i - 1].x2;
		//s2[i].y2 = s2[i - 1].y2;
	//}
	//2nd update the head
	//Head of snake, s[0] depends on direction user inputs 
	//if user presses up
	//if (direction2 == 0)
		//s2[0].y2 -= 1;

	//if user presses down
	if (direction2 == 1)
		s2[0].y2 += 1;

	//if user presses left
	if (direction2 == 2)
		s2[0].x2 -= 1;

	//if user presses right
	if (direction2 == 3)
		s2[0].x2 += 1;


	//***NEW*** If Snake eats food it should grow
	//check if snake head = food location
//	if (((s2[0].x2) == food.x) && ((s2[0].y2) == food.y))
	//{
		//increment snake
		//snake_length2++;

		//Randomly place food somewhere else
		//food.x = rand() % num_horzBox;
		//food.y = rand() % num_vertBox;
	//}

	//***NEW*** Boundary Checking snake as is hits screen end
	//loop snake back on other side
	//LEFT and RIGHT
	if (s2[0].x2 > num_horzBox)
		s2[0].x2 = 0;
	if (s2[0].x2 < 0)
		s2[0].x2 = num_horzBox;
	//TOP and BOTTOM
	//if (s2[0].y2 > num_vertBox)
		//s2[0].y2 = 0;
	//if (s2[0].y2 < 0)
		//s2[0].y2 = num_vertBox;

	//***NEW*** Check if you eat body of snake
	//for (int i = 1; i < snake_length2; i++)
	//{
		//Cut Snake body from place eaten
		//if (s2[0].x2 == s[i].x && s2[0].y2 == s[i].y)
			//snake_length2 = i;
	//}

	//1st line spikes to restart player
	for (int i = 0; i < 5; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[0].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 9; i < 15; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[0].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 17; i < 20; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[0].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}

	//second line spikes restart player
	for (int i = 7; i < 10; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[1].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 0; i < 5; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[1].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 12; i < 19; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[1].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	//3rd line spikes restart player

	for (int i = 6; i < 10; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[2].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 0; i < 5; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[2].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}

	}
	for (int i = 13; i < 19; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[2].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}

	//4th line

	for (int i = 5; i < 8; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[4].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[4].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 9; i < 15; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[4].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 16; i < 18; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[4].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}

	//5th line spikes to restart player
	for (int i = 0; i < 6; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[3].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 7; i < 10; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[3].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 11; i < 17; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[3].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}
	for (int i = 18; i < 20; i++) {
		if (((s2[0].x2) == spike[i].x) && ((s2[0].y2) == spike[3].y)) {
			s2[0].x2 = 11;
			s2[0].y2 = 3;
		}
	}

	if ((s2[0].y2) == path[1].y) {
		printf("WINNER GREEN PLAYER\n");
		//restart players
		s[0].x = 10;
		s[0].y = 3;
		s2[0].x2 = 11;
		s2[0].y2 = 3;

	}

}


int main()
{
	//Setting pseudorandom time, TODO:discuss true random vs pseudorandom 
	srand(time(0));

	//Window that we can play the game in 
	sf::RenderWindow window(sf::VideoMode(w, h), "Snake Game");

	//Textures load an image into the GPU Memory
	sf::Texture t1, t2, t3, t4, t5, t6;
	t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/red.png");
	t3.loadFromFile("images/hot cheetos.jpg");
	t4.loadFromFile("images/green.png");
	t5.loadFromFile("images/line.jpg");
	t6.loadFromFile("images/tri.png");


	//Sprite has physical dimensions that can be set in 
	//coordinate system, setPosition(x,y), and drawn on screen
	sf::Sprite sprite1(t1);
	sf::Sprite sprite2(t2);
	sf::Sprite sprite3(t3);
	sf::Sprite sprite4(t4);
	sf::Sprite sprite5(t5);
	sf::Sprite sprite6(t6);


	//***NEW*** initially place food somewhere on screen
	//food.x = 10;
	//food.y = 10;

	//intialize snake position
	s[0].x = 10;
		s[0].y = 3;
		s2[0].x2 = 11;
		s2[0].y2 = 3;


	//intitalize array coordinates for finish line
	for(int i = 0; i < 20; i++) {
		path[i].x = i;
	} path[0].y = 29;
	path[1].y = 28;



	//intitalize array coordinates for spikes
	for (int i = 0; i < 20; i++) {
		spike[i].x = i;
	} spike[0].y = 10;
	spike[1].y = 15;
	spike[2].y = 16;
	spike[3].y = 27;
	spike[4].y = 24;


	sf::Clock clock;
	float timer = 0.0f, delay = .2f;

	//directions
	printf("RACE TO THE FINISH AVOID ALL SPIKES\n");

	while (window.isOpen())
	{
		//Error in class I placed this before the while loop
		//Should be placed in while loop as shown here to update
		//timer 
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;

		//Allow us to check when a user does something
		sf::Event e;


		//Check when the window is closed
		while (window.pollEvent(e))
		{
			//If user presses x in the top right, Windows, top left, Mac,  close the window
			if (e.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		//Control for Snake by User
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) direction = 0;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) direction = 1;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) direction = 2;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) direction = 3;

		//second controller
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction2 = 0;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction2 = 1;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction2 = 2;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction2 = 3;

		
		

		if (timer > delay)
		{
			timer = 0; //reset timer
      //change delay for faster game after every hot cheetos ate
			//if (s[0].x == food.x && s[0].y == food.y) {
				//delay=delay-0.001f;
			//}
			//if (s2[0].x2 == food.x && s2[0].y2 == food.y) {
			//	delay = delay - 0.001f;
		//	}


			move();    //move Snake one sprite forward
			move2();
		}
		/*****************
		//Draw in window
		*****************/
		window.clear();    //clear the window so new frame can be drawn in
		

		//NOTE: Order matters as we will draw over items listed first. 
		//Hence the background should be the first thing you will always do
		//1st: Draw Background first
		for (int i = 0; i < num_horzBox; i++)
		{
			for (int j = 0; j < num_vertBox; j++)
			{
				//Set position of sprite1 one at a time
				sprite1.setPosition(i*size, j*size);
				//Draw sprite1 but, do not show it on screen. 
				window.draw(sprite1);
			}
		}

		//draw finish line
		for (int i = 0; i < 20; i++) {
			sprite5.setPosition(path[i].x*size,path[0].y*size );
			window.draw(sprite5);
			sprite5.setPosition(path[i].x*size, path[1].y*size);
			window.draw(sprite5);
		}


		//2nd: Then Draw snake otherwise background will be drawn over snake if order was reversed with background
		for (int i = 0; i < snake_length; i++)
		{
			//position sprite2 one at a time
			sprite2.setPosition(s[i].x*size, s[i].y*size);
			//Draw sprite2 one at a time by drawing over background
			window.draw(sprite2);
		} 

		//Then Draw 2nd snake otherwise background will be drawn over snake if order was reversed with background
		for (int i = 0; i < snake_length2; i++)
		{
			//position sprite2 one at a time
			sprite4.setPosition(s2[i].x2*size, s2[i].y2*size);
			//Draw sprite2 one at a time by drawing over background
			window.draw(sprite4);
		}

		

		//***NEW*** 3rd: Draw Fruit
		//sprite3.setPosition(food.x*size, food.y*size);
		//window.draw(sprite3);

		//draw spikes

		//1st line
		for (int i = 0; i < 5; i++) {
			sprite6.setPosition(spike[i].x*size, spike[0].y*size);
			window.draw(sprite6);
		}

		for (int i = 9; i < 15; i++) {
			sprite6.setPosition(spike[i].x*size, spike[0].y*size);
			window.draw(sprite6);
		}	
		for (int i = 17; i < 20; i++) {
			sprite6.setPosition(spike[i].x*size, spike[0].y*size);
			window.draw(sprite6);
		}

		//2nd line
		for (int i = 7; i < 10; i++) {
			sprite6.setPosition(spike[i].x*size, spike[1].y*size);
			window.draw(sprite6);
		}
		for (int i = 0; i < 5; i++) {
			sprite6.setPosition(spike[i].x*size, spike[1].y*size);
			window.draw(sprite6);
		}
		for (int i = 12; i < 19; i++) {
			sprite6.setPosition(spike[i].x*size, spike[1].y*size);
			window.draw(sprite6);
		}
		//3rd line
		for (int i = 6; i < 10; i++) {
			sprite6.setPosition(spike[i].x*size, spike[2].y*size);
			window.draw(sprite6);
		}
		for (int i = 0; i < 5; i++) {
			sprite6.setPosition(spike[i].x*size, spike[2].y*size);
			window.draw(sprite6);
		}
		for (int i = 13; i < 19; i++) {
			sprite6.setPosition(spike[i].x*size, spike[2].y*size);
			window.draw(sprite6);
		}
	
		//last line
		for (int i = 5; i < 8; i++) {
			sprite6.setPosition(spike[i].x*size, spike[4].y*size);
			window.draw(sprite6);
		}
		for (int i = 0; i < 4; i++) {
			sprite6.setPosition(spike[i].x*size, spike[4].y*size);
			window.draw(sprite6);
		}
		for (int i = 9; i < 15; i++) {
			sprite6.setPosition(spike[i].x*size, spike[4].y*size);
			window.draw(sprite6);
		}

		for (int i = 16; i < 18; i++) {
			sprite6.setPosition(spike[i].x*size, spike[4].y*size);
			window.draw(sprite6);
		}


		//last last line
		for (int i = 7; i < 10; i++) {
			sprite6.setPosition(spike[i].x*size, spike[3].y*size);
			window.draw(sprite6);
		}
		for (int i = 0; i < 6; i++) {
			sprite6.setPosition(spike[i].x*size, spike[3].y*size);
			window.draw(sprite6);
		}
		for (int i = 11; i < 17; i++) {
			sprite6.setPosition(spike[i].x*size, spike[3].y*size);
			window.draw(sprite6);
		}

		for (int i = 18; i < 20; i++) {
			sprite6.setPosition(spike[i].x*size, spike[3].y*size);
			window.draw(sprite6);
		}


		//Show everything we have drawn on the screen
		window.display();
	}
	return 0;
}
