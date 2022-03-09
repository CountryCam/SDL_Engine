#pragma once

#include "Image.h"
#include "Vector.h"

class Background
{
public:
	Background(Screen& screen);
	void Update();
	void Render(Screen& screen);
	void Unload();

private:
	Image m_background;
	Image m_backgroundMain;
	Vector<int> m_position;
	
};