#pragma once

#include<GLES2\gl2.h>
#include<Source\Util\Type\Type.h>


/**
* @file Transform.h
* @brief Entity�̍��W����Ȃǂɗ��p����\����
* @author ���{�D�P
* @date 2017/02/02
*/

namespace util {

	struct Transform {

		/**
		* @brief	�K��R���X�g���N�^
		*/
		Transform();

		/**
		* @brief			�����t���R���X�g���N�^
		* @param _position	���s�ړ����W
		* @param _rotation	��]
		* @param _scale	�g��E�k��
		* @detail			���s�ړ����W�����K���ݒ�
		*/
		Transform(Vector3F _position,
			Vector3F _rotation = Vector3F(),
			Vector3F _scale = Vector3F(1.0f,1.0f,1.0f));


		/**
		* @param velocity �ړ���
		*/
		void translate(Vector3F&& velocity);


		const Mat4& getWorldMat();

		//!���W
		Vector3F position;

		//!��]�l
		Vector3F rotation;

		//!�g��k��
		Vector3F scale;

		//!���[�h�ϊ��s��
		Mat4 world;

	};


}