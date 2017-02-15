#pragma once
#include<string>
#include<zlib.h>

namespace util {

	//ZStreamで利用するインターフェース
	class IZ
	{
	public:
		IZ() {};

		~IZ() {};

		virtual void run(Bytef* data,size_t size) = 0;
		
	};



}