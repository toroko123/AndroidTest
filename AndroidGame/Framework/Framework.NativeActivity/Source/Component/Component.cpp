#include"Component.h"




namespace component {



	Component::Component()
	{
	}

	Component::~Component()
	{
	}
	void Component::active()
	{
		m_IsActive = true;
	}
	void Component::deActive()
	{
		m_IsActive = false;
	}
	void Component::destroy()
	{
	}
	float Component::getCallOrder()
	{
		return m_CallOrder;
	}
	void Component::setGameObject(std::weak_ptr<framework::Entity> entity)
	{
		this->m_pEntity = entity;
	}
}