#pragma once

#include "../utilities/algorithm.hpp"

#include <utility>

#define NAMESPACE_MULTIPLIER namespace jenshin::calcu::multiplier

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ³éÏó
	/// </summary>
	class Multiplier
	{
	public:
		virtual double num() const
		{
			return m_final;
		}
	protected:
		virtual void _update() = 0;
	protected:
		double m_final = 0;
	};

	double operator*(Multiplier const& left, Multiplier const& right)
	{
		return left.num() * right.num();
	}
	double operator*(Multiplier const& left, double const right)
	{
		return left.num() * right;
	}
	double operator*(double const right, Multiplier const& left)
	{
		return left.num() * right;
	}
}