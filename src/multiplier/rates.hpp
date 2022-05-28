#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ±¶ÂÊ
	/// </summary>
	class Rates :
		virtual public Multiplier
	{
	public:
		Rates(std::vector<double> const& rates, double const independent) :
			m_rates(rates), m_Idependent(independent)
		{
			_update();
		}

	private:
		void _update()
		{
			m_rates_sum = sum(m_rates) / 100;
			m_final = m_rates_sum * (1 + m_Idependent);
		}

	private:
		std::vector<double> m_rates;
		double m_Idependent;
		double m_rates_sum;
	};
}