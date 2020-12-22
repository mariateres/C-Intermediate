#include"currency.h"
#include<iostream>
#include <gtest/gtest.h>

Currency:: Currency (): m_rupees (0), m_paise (0)
{
}
Currency:: Currency(int x,int y) : m_rupees(x), m_paise(y)
{
}
Currency :: Currency(int val) : m_rupees(val), m_paise(val)
{
}
  
Currency Currency :: operator+(const Currency& cur)
{
	int ru = m_rupees + cur.m_rupees;
	int pa = m_paise + cur.m_paise;
	
	if(pa >=100)
	{
		ru += pa/100;
		pa = pa%100;
	}
	
	return Currency(ru , pa);
}

Currency Currency :: operator-(const Currency& cur)
{
	int ru = m_rupees - cur.m_rupees;
	int pa = m_paise - cur.m_paise;
	
	return Currency(ru , pa);
}

Currency Currency :: operator+(int a)
{
	int ru = m_rupees + a;
	int pa = m_paise + a;
	
	if( pa >=100)
	{
		ru += pa/100;
		pa = pa%100;
	}
	
	return Currency(ru, pa);
}
Currency Currency :: operator-(int b)
{
	int ru = m_rupees - b;
	int pa = m_paise - b;
	
	return Currency(ru, pa);
}
Currency& Currency :: operator++()
{
	m_rupees++;
	m_paise++;
	
	return *this;
}
Currency Currency :: operator++(int)
{
	Currency temp(m_rupees, m_paise);
	m_rupees++;
	m_paise++;
	return temp; 
	
}
bool Currency :: operator==(const Currency& ref)
{
	return (m_rupees==ref.m_rupees)&&(m_paise == ref.m_paise);
}

int Currency:: getrupees ()
{
	return m_rupees;
}

int Currency:: getpaise()
{
	return m_paise;
}
