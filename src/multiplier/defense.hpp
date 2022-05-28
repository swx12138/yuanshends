#pragma once

#include "multiplier.hpp"

NAMESPACE_MULTIPLIER{
	/// <summary>
	/// ·ÀÓù
	/// </summary>
	class Defense :
		virtual public Multiplier
	{
	public:
		Defense()
		{
			_update();
		}
	private:
		void _update()
		{
			m_final = 0.5;
		}
	};
}