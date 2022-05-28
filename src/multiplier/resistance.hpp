#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ¿¹ÐÔÇø
	/// </summary>
	class Resistance :
		virtual public Multiplier
	{
	public:
		Resistance(double const YuanKangxing, double const JianKang = 0, double const JiaKang = 0) :
			m_yk(YuanKangxing), m_jk(JianKang), m_jkp(JiaKang)
		{
			_update();
		}
	private:
		void _update()
		{
			m_final = m_yk - m_jk + m_jkp;

			if (m_final > 0.75) {
				m_final = 1.0 / (m_final * 4 + 1);
			}
			else if (m_final < 0) {
				m_final = 1 - m_final / 2;
			}
			else {
				m_final = 1 - m_final;
			}
		}
	private:
		double m_yk, m_jk, m_jkp;
	};
}