#pragma once

#include<string>
#include<android\asset_manager.h>


namespace util {


	/**
	* @brief				�e�L�X�g�t�@�C���̓ǂݍ���
	* @param mgr	�@�@�@�@	engin�������Ă���AssetManager
	* @param filepath			�O���t�H���_�̃p�X(assets�t�H���_����̃p�X��؂�)
	*/
	std::string textRead(AAssetManager* mgr, std::string&& filepath);



}