#pragma once
#include<string>
#include<zlib.h>

namespace util {

	//ZStream�ŗ��p����C���^�[�t�F�[�X
	class IZ
	{
	public:
		IZ() {};

		~IZ() {};

		virtual void run(Bytef* data,size_t size) = 0;
		
	};



}