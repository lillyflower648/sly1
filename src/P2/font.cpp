#include <font.h>

/* Set text bos position */
void CTextBox::SetPos(float x, float y)
{
	m_x = x;
	m_y = y;
}

/* Set text box size */
void CTextBox::SetSize(float dx, float dy)
{
	m_dx = dx;
	m_dy = dy;
}

/* Set text box text color */
void CTextBox::SetTextColor(RGBA rgba)
{
	m_rgba = rgba;
}

/* Set text bos horizontal justification */
void CTextBox::SetHorizontalJust(JH jh)
{
	m_jh = jh;
}

/* Set text box vertical justification */
void CTextBox::SetVerticalJust(JV jv)
{
	m_jv = jv;
}
