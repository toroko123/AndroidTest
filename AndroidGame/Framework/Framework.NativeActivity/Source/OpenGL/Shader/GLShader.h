#pragma once
#include<GLES2\gl2.h>
#include<string>

/**
* @file GLShaderInstance.h
* @brief GLのShaderのインスタンスクラス
* @author 高須優輝
* @date 2017/02/05
*/

namespace framework {

	enum class ShaderType
	{
		//!頂点シェーダ
		Vertex,
		//!ジオメトリシェーダ
		Geometry,
		//!ピクセルシェーダ
		Pix,
	};

	class GLShader
	{
	public:
		GLShader();
		~GLShader();


		/**
		* @brief				shaderのコンパイル
		* @param type	　　　　shaderのタイプ
		* @param filepath			外部フォルダのパス
		*/
		void compileShader(ShaderType type, std::string&& filepath);

		/**
		* @brief				shaderのコンパイル
		* @param type	　　　　shaderのタイプ
		* @param source			shaderの記述してある文字列
		*/
		//void compileShader(ShaderType type, std::string&& source);


	private:
		GLuint source;
	};

	


}
