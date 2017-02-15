#pragma once

#include<functional>

/**
* @file MyVectors.h
* @brief 行列構造体
* @author 高須優輝
* @date 2017/02/03
*/

namespace util {


	template<typename T>
	struct MyMatrix
	{
		T m[4][4];

		//デフォルトコンストラクタでアイデンティティー行列作成
		MyMatrix() {

			m[0][0] = 1.0f; m[0][1] = 0.0f; m[0][2] = 0.0f; m[0][3] = 0.0f;
			m[1][0] = 0.0f; m[1][1] = 1.0f; m[1][2] = 0.0f; m[1][3] = 0.0f;
			m[2][0] = 0.0f; m[2][1] = 0.0f; m[2][2] = 1.0f; m[2][3] = 0.0f;
			m[3][0] = 0.0f; m[3][1] = 0.0f; m[3][2] = 0.0f; m[3][3] = 1.0f;

		}

		//引数付きコンストラクタ
		MyMatrix(T _m[4][4]) {
			m = _m;
		}

		//ループの一般化
		void Each(std::function<void(int location, int location2)> action) {
			for (int i = 0; i != 4; ++i) {
				for (int i2 = 0; i2 != 4; ++i2) {
					action(i, i2);
				}
			}
		}


	};


}