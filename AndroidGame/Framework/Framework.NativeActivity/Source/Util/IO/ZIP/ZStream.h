#pragma once

#include<zlib.h>
#include"IZ.h"
#include"ZTypes.h"
#include<memory>

namespace util {

	enum class ZType
	{
		//!圧縮用とで利用
		Press,
		//!解凍用とで利用
		Ease,
	};

	class ZStream
	{
	public:
		ZStream(ZType type);
		~ZStream();

		/**
		* @brief			データ操作を実行する		
		* @param data	　　操作するデータ
		*/
		void run(Bytef* data);

	private:
		ZType m_Type;
		//!圧縮操作か解凍操作かを切り替えるコールバック
		std::shared_ptr<int> m_pZCallBack;
		//IZ* m_pZCallBack;
	};



	

}