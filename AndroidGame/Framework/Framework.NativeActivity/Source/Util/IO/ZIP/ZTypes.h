#pragma once
#include"IZ.h"


namespace util {
	//���k�p
	class ZPress : public IZ
	{
	public:
		ZPress();
		~ZPress();

		//�ǂݍ���
		void run(Bytef* data, size_t size)override;

	private:
		z_stream m_Stream;
	};



	//�𓀗p
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