#include "Player.h"
#include "Input.h"
#include "Screen.h"


Player::Player(Screen& screen)
{
	m_image.Load("Images/BurlyMan1.png", screen);
	m_image.SetDimension(140, 240);

	m_position.x = 1;
	m_position.y = 480;
}

void Player::Update()
{

	if (Input::Instance()->IsKeyPressed(HM_KEY_W) == true)
	{
		m_position.y -= 0;
	}

	if (Input::Instance()->IsKeyPressed(HM_KEY_S) == true)
	{
		m_position.y += 0;
	}

	if (Input::Instance()->IsKeyPressed(HM_KEY_A) == true)
	{
		m_position.x -= 1;
	}

	if (Input::Instance()->IsKeyPressed(HM_KEY_D) == true)
	{
		m_position.x += 1;
	}

	if (m_position.x < 0)
	{
		m_position.x = 0;
	}
	else if (m_position.x > SCREEN_WIDTH - SPRITE_SIZE)
	{
		m_position.x = SCREEN_WIDTH - SPRITE_SIZE;
	}
	if (m_position.y < 0)
	{
		m_position.y = 0;
	}
	else if (m_position.y > SCREEN_HEIGHT - SPRITE_SIZE)
	{
		m_position.y = SCREEN_HEIGHT - SPRITE_SIZE;
	}
}

void Player::Render(Screen& screen)
{
	m_image.Render(screen, m_position.x, m_position.y);
}

void Player::SetHealth()
{

}

void Player::SetPoints()
{

}
