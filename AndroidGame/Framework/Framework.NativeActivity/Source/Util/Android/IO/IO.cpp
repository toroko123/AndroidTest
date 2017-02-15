#include"IO.h"
#include<memory>

namespace util {

	std::string textRead(AAssetManager * mgr, std::string && filepath)
	{
		AAsset* assetFile = AAssetManager_open(mgr,filepath.c_str(),AASSET_MODE_RANDOM);
		int size = AAsset_getLength(assetFile);
		std::unique_ptr<char[]> buf(new char[size]);

		AAsset_read(assetFile,buf.get(),size);
		AAsset_close(assetFile);
		
		return std::string(buf.get());
	}

}