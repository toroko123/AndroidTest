#include"ZTypes.h"

namespace util {

	ZPress::ZPress()
		:m_Stream({ .zalloc = Z_NULL,.zfree = Z_NULL,.opaque = Z_NULL })
	{
		//メモリ確保
		int ret = deflateInit(&m_Stream, Z_DEFAULT_COMPRESSION);

		if (ret != Z_OK) {
			//TODO ログをダイアログ機能作成後アサート出力するようにする
		}
	}

	ZPress::~ZPress()
	{
		//メモリ解放
		deflateEnd(&m_Stream);
	}

	void ZPress::run(Bytef* data, size_t size)
	{
		////お試し用圧縮データ
	//	const unsigned int tempsize = sizeof(data);


	/*	unsigned int buffersz = 0, rest;
		int flushtype;
		Byte intemp[tempsize], outtemp[tempsize];*/


		//do {
			//m_Stream.avail_in = fread(intemp,1,tempsize,ifp);
		//m_Stream.avail_in = tempsize;
		//m_Stream.next_in = intemp;

		//buffersz += m_Stream.avail_in;

		//if (feof(ifp) != 0) {
		//	flushtype = Z_FINISH;
		//}


	//} while (flushtype != Z_FINISH);
	}


	//ZEase::ZEase()
	//	:IZ()
	//{
	//}

	//ZEase::~ZEase()
	//{
	//}

	//void ZEase::init()
	//{
	//}

	//void ZEase::run()
	//{
	//}


}