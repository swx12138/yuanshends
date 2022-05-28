#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ±©»÷
	/// </summary>
	class Critical :
		virtual public Multiplier
	{
	public:
		Critical(double const crit, double const crit_dmg) :
			m_crit(crit), m_crit_dmg(crit_dmg)
		{
			_update();
		}

		double max() const
		{
			return 1 + m_crit_dmg;
		}

		double min() const
		{
			return 1;
		}
	private:
		void _update()
		{
			m_final = 1 + std::min<double>(m_crit, 1) * m_crit_dmg;
		}
	private:
		double m_crit, m_crit_dmg;
	};
}