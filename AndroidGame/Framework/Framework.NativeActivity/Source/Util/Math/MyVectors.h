#pragma once

/**
* @file MyVectors.h
* @brief ä»à’ÉxÉNÉ^Å[ç\ë¢ëÃ
* @author çÇê{óDãP
* @date 2017/02/02
*/

namespace util {


	template<typename T>
	struct Vector2
	{

		T x;
		T y;

		Vector2() {
			x = 0;
			y = 0;
		}

		Vector2(T tX,T tY)
		{
			x = tX;
			y = tY;
		}

		void operator= (Vector2 other) {
			x = other.x;
			y = other.y;
		}

		void operator+= (Vector2 other) {
			x += other.x;
			y += other.y;
		}

		void operator-= (Vector2 other) {
			x -= other.x;
			y -= other.y;
		}

		void operator*= (Vector2 other) {
			x *= other.x;
			y *= other.y;
		}

		void operator/= (Vector2 other) {
			x /= other.x;
			y /= other.y;
		}

	};

	template<typename T>
	struct Vector3
	{

		T x;
		T y;
		T z;

		Vector3() {
			x = 0;
			y = 0;
			z = 0;
		}

		Vector3(T tX, T tY,T tZ)
		{
			x = tX;
			y = tY;
			z = tZ;
		}

		void operator= (Vector3 other) {
			x = other.x;
			y = other.y;
			z = other.z;
		}

		void operator+= (Vector3 other) {
			x += other.x;
			y += other.y;
			z += other.z;
		}

		void operator-= (Vector3 other) {
			x -= other.x;
			y -= other.y;
			z -= other.z;
		}

		void operator*= (Vector3 other) {
			x *= other.x;
			y *= other.y;
			z *= other.z;
		}

		void operator/= (Vector3 other) {
			x /= other.x;
			y /= other.y;
			z /= other.z;
		}

	};


}