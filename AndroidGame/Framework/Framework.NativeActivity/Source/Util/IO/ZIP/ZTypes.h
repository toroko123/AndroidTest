#pragma once
#include"IZ.h"


namespace util {
	//ˆ³k—p
	class ZPress : public IZ
	{
	public:
		ZPress();
		~ZPress();

		//“Ç‚İ‚İ
		void run(Bytef* data, size_t size)override;

	private:
		z_stream m_Stream;
	};



	//‰ğ“€—p
	//class ZEase: public IZ
	//{
	//public:
	//	ZEase() {};
	//	~ZEase() {};

	//	void init() {};

	//	void run() {};

	//private:

	//};


}