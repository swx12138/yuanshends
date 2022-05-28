#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ¹¥»÷
	/// </summary>
	class Attack :
		virtual public Multiplier
	{
	public:
		Attack(double const white, double const fixed, double const buffer = 0) :
			m_white(white), m_fixed(fixed), m_buffer(buffer)
		{
			_update();
		}

		auto get() const
		{
			return std::make_pair(m_white, m_green);
		}
	private:
		void _update()
		{
			m_green = m_fixed + m_white * m_buffer;
			m_final = m_white + m_green;
		}
	private:
		double m_white, m_fixed;
		double m_buffer;
		double m_green;
	};
}