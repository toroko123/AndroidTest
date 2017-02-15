#pragma once


namespace framework {


	class TextureLoader
	{
	public:
		~TextureLoader();

		static void loadTexture();

	private:
		//インスタンス生成禁止
		TextureLoader();

	};




}