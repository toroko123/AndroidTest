#pragma once

#include<zlib.h>
#include"IZ.h"
#include"ZTypes.h"
#include<memory>

namespace util {

	enum class ZType
	{
		//!���k�p�Ƃŗ��p
		Press,
		//!�𓀗p�Ƃŗ��p
		Ease,
	};

	class ZStream
	{
	public:
		ZStream(ZType type);
		~ZStream();

		/**
		* @brief			�f�[�^��������s����		
		* @param data	�@�@���삷��f�[�^
		*/
		void run(Bytef* data);

	private:
		ZType m_Type;
		//!���k���삩�𓀑��삩��؂�ւ���R�[���o�b�N
		std::shared_ptr<int> m_pZCallBack;
		//IZ* m_pZCallBack;
	};



	

}