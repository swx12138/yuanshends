#pragma once

#include <exception>

template <typename _Ty>
using resolve = void (*)(_Ty const&);

template <typename _Exception = std::exception>
using reject = void (*)(_Exception);

template <typename _Ty, typename _Exception = std::exception>
class Promise
{
public:
	using constructor = void(*)(resolve<_Ty const&>, reject<_Exception&>);

	Promise(constructor callback0, resolve<_Ty const&> callback1, reject<_Exception&> callback2)
	{
		callback0(callback1, callback2);
	}
};

template<typename _Ty>
class Js
{
public:
	Js() = delete;
	Js(Js const&) = delete;
	Js(Js&&) = delete;
	Js(_Ty const& data) :
		m_data(data)
	{ }

public:
	void then(void(*pFn)(_Ty&))
	{
		return pFn(m_data);
	}
private:
	_Ty m_data;
};