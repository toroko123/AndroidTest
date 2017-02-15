#pragma once

#include<string>
#include<android\asset_manager.h>


namespace util {


	/**
	* @brief				テキストファイルの読み込み
	* @param mgr	　　　　	enginが持っているAssetManager
	* @param filepath			外部フォルダのパス(assetsフォルダからのパスを切る)
	*/
	std::string textRead(AAssetManager* mgr, std::string&& filepath);



}