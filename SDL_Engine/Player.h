#pragma once

#include "Image.h"
#include "Vector.h"

class Player
{
public:

	Player(Screen& screen);

	void Update();
	void Render(Screen& screen);
	void SetHealth();
	void SetPoints();

private:

	const int SCREEN_WIDTH = 1280;
	const int SCREEN_HEIGHT = 480;
	const int SPRITE_SIZE = 108;
	//float m_xPosition = 1; // X = Left and Right
	//float m_yPosition = 480; // Y = Up and Down
	
	Image m_image;
	
	Vector<int> m_position;

};