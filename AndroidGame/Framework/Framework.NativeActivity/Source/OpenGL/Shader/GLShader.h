#pragma once
#include<GLES2\gl2.h>
#include<string>

/**
* @file GLShaderInstance.h
* @brief GL��Shader�̃C���X�^���X�N���X
* @author ���{�D�P
* @date 2017/02/05
*/

namespace framework {

	enum class ShaderType
	{
		//!���_�V�F�[�_
		Vertex,
		//!�W�I���g���V�F�[�_
		Geometry,
		//!�s�N�Z���V�F�[�_
		Pix,
	};

	class GLShader
	{
	public:
		GLShader();
		~GLShader();


		/**
		* @brief				shader�̃R���p�C��
		* @param type	�@�@�@�@shader�̃^�C�v
		* @param filepath			�O���t�H���_�̃p�X
		*/
		void compileShader(ShaderType type, std::string&& filepath);

		/**
		* @brief				shader�̃R���p�C��
		* @param type	�@�@�@�@shader�̃^�C�v
		* @param source			shader�̋L�q���Ă��镶����
		*/
		//void compileShader(ShaderType type, std::string&& source);


	private:
		GLuint source;
	};

	


}
