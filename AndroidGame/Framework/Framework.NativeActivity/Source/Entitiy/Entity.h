#pragma once

#include<Source\Util\Math\Transform.h>
#include<Source\Util\Template\Event.h>
#include<string>

namespace framework {

	struct EntityDesc {

		EntityDesc(std::string&&  _name = "GameObject",
			int _id = -1,
			bool _isActive = true)
			:name(name),
			id(_id),
			isActive(_isActive)
		{

		}

		std::string name;
		int id;
		bool isActive;
		util::Transform transform;



	};

	class Entity
	{
	public:
		Entity();
		~Entity();

	private:
		EntityDesc m_EntityData;
		
		util::Event<std::string> m_Event;

	};



}