#pragma once

#include<memory>
#include<Source\Entitiy\Entity.h>


namespace component {

	class Component
	{
	public:
		Component();
		~Component();

		virtual void init() {};

		virtual void onConect() {};

		virtual void active();

		virtual void deActive();

		void destroy();

		float getCallOrder();

		void setGameObject(std::weak_ptr<framework::Entity> entity);

	private:
		//!��������������Ă���Q�[���I�u�W�F�N�g
		std::weak_ptr<framework::Entity> m_pEntity;

		//!���̐��l���������قǑ������s
		float m_CallOrder;

		//!�C���X�^���X���Ƃ̌ŗLID
		int m_Id;

		//!�A�N�e�B�u���ǂ���
		bool m_IsActive;


	};

	


}