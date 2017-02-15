#include"ZStream.h"

namespace util {

	ZStream::ZStream(ZType type)
		:m_Type(type)
	{
		switch (type)
		{
		case util::ZType::Press:
			//m_pZCallBack = std::shared_ptr<int>(new int[5]);
			//m_pZCallBack = new ZPress();
			break;
		case util::ZType::Ease:
			break;
		default:
			break;
		}


	}

	ZStream::~ZStream()
	{

	}

	void ZStream::run(Bytef * data)
	{
		const size_t tempsize = sizeof(data);
		//m_pZCallBack->run(data, tempsize);
	}


}