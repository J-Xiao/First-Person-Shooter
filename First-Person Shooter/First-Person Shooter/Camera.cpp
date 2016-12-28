#include "stdafx.h"
#include "Camera.h"


Camera::Camera()
{
	m_directionAngle = -90;

	m_cameraPos[0] = 0;
	m_cameraPos[1] = 1.8;
	m_cameraPos[2] = 0;
}


Camera::~Camera()
{
}

BOOL Camera::DisplayScene()
{
	if (KEY_DOWN(VK_SHIFT))
	{
		m_speed = SPRINT_SPEED;
	}
	else
	{
		m_speed = NORMAL_SPEED;
	}

	m_directionRadXZ = float(3.14 * m_directionAngle / 180);

	if (KEY_DOWN(VK_W))
	{
		m_cameraPos[0] += cos(m_directionRadXZ) * m_speed;
		m_cameraPos[2] += sin(m_directionRadXZ) * m_speed;
	}

	if (KEY_DOWN(VK_S))
	{
		m_cameraPos[0] -= cos(m_directionRadXZ) * m_speed;
		m_cameraPos[2] -= sin(m_directionRadXZ) * m_speed;
	}

	m_targetPos[0] = m_cameraPos[0] + cos(m_directionRadXZ);
	m_targetPos[1] = m_cameraPos[1];
	m_targetPos[2] = m_cameraPos[2] + sin(m_directionRadXZ);

	gluLookAt(
		m_cameraPos[0], m_cameraPos[1], m_cameraPos[2],
		m_targetPos[0], m_targetPos[1], m_targetPos[2],
		0.0, 1.0, 0.0
	);

	return TRUE;
} 