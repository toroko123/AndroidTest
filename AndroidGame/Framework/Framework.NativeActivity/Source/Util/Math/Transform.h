#pragma once

#include<GLES2\gl2.h>
#include<Source\Util\Type\Type.h>


/**
* @file Transform.h
* @brief Entityの座標操作などに利用する構造体
* @author 高須優輝
* @date 2017/02/02
*/

namespace util {

	struct Transform {

		/**
		* @brief	規定コンストラクタ
		*/
		Transform();

		/**
		* @brief			引数付きコンストラクタ
		* @param _position	平行移動座標
		* @param _rotation	回転
		* @param _scale	拡大・縮小
		* @detail			平行移動座標だけ必ず設定
		*/
		Transform(Vector3F _position,
			Vector3F _rotation = Vector3F(),
			Vector3F _scale = Vector3F(1.0f,1.0f,1.0f));


		/**
		* @param velocity 移動量
		*/
		void translate(Vector3F&& velocity);


		const Mat4& getWorldMat();

		//!座標
		Vector3F position;

		//!回転値
		Vector3F rotation;

		//!拡大縮小
		Vector3F scale;

		//!ワード変換行列
		Mat4 world;

	};


}