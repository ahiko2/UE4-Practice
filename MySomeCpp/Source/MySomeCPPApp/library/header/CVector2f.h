#pragma once
#include <complex>
class CVector2f {
public:
	CVector2f(const std::complex<float>& x_,
		const std::complex<float>& y_) : x(x_), y(y_) {}
	~CVector2f(void) = default;

	std::complex<float> x, y;
};
std::complex<float> operator*(
	const CVector2f& vec0,
	const CVector2f& vec1);
