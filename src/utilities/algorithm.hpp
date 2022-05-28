#pragma once

#include <vector>

template<typename _Ty>
_Ty sum(std::vector<_Ty>const& data)
{
	_Ty sum{ };
	for (auto const& d : data) {
		sum += d;
	}
	return sum;
}