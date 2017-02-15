#include"TextureLoader.h"
#include<opencv2\core\core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>


namespace framework{

	struct TextureData {
		
	};
	

	TextureLoader::TextureLoader()
	{
	}

	TextureLoader::~TextureLoader()
	{
	}

	void TextureLoader::loadTexture()
	{
		cv::Mat image;

		image = cv::imread("", cv::IMREAD_UNCHANGED);
	}

}
