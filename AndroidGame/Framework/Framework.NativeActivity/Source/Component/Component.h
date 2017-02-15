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
		//!自分が実装されているゲームオブジェクト
		std::weak_ptr<framework::Entity> m_pEntity;

		//!この数値が小さいほど早く実行
		float m_CallOrder;

		//!インスタンスごとの固有ID
		int m_Id;

		//!アクティブかどうか
		bool m_IsActive;


	};

	


}