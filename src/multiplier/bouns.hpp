#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	///  ‘ˆ…À
	/// </summary>
	class Bouns :
		virtual public Multiplier
	{
	public:
		Bouns(std::vector<double> const& bouns) :
			m_bouns(bouns)
		{
			_update();
		}

		double num() const
		{
			return m_bouns_sum;
		}
	private:
		void _update()
		{
			m_bouns_sum = 1 + sum(m_bouns);
		}
	private:
		std::vector<double> m_bouns;
		double m_bouns_sum;
	};
}