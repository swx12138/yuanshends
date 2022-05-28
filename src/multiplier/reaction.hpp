#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ·´Ó¦
	/// </summary>
	class Reaction :
		virtual public Multiplier
	{
	public:
		Reaction(double const base, unsigned const ElemMastery, double const buffer) :
			m_base(base), m_ElemMastery(ElemMastery), m_buffer(buffer)
		{
			_update();
		}
	private:
		void _update()
		{
			m_final = m_base > 1 ? (m_base * (1 + 2.78 * m_ElemMastery / (m_ElemMastery + 1400) + m_buffer)) : 1;
		}
	private:
		double m_base, m_ElemMastery, m_buffer;
	};
}