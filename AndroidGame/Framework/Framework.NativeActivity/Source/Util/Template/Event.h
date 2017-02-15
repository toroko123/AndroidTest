#pragma once

#include<unordered_map>
#include<vector>
#include<functional>

/**
* @file	Event.h
* @brief	key�̏d���������C�x���g�e���v���[�g
* @author	���{�D�P
* @date	2017/2/04
*/


namespace util {

	template<typename Key,typename... Param>
	class Event
	{
	public:
		Event() {};

		~Event() {};

		/**
		* @brief		�C�x���g�ɑΉ������R�[���o�b�N�֐���o�^
		* @param key	�C�x���g���ʃL�[
		* @param func	�R�[���o�b�N�֐�
		*/
		void add(const Key& key, const std::function<void(Param...)> func) {
			m_EventFunc[key].emplace_back(func);
		}

		/**
		* @brief		�C�x���g�̔����ʒm���󂯎��
		* @param key	���������C�x���g�̔��ʃL�[
		*/
		void onEvent(const Key& key,Param... param) {
			//key��������Ȃ����
			if (m_EventFunc.find(key) == std::end(m_EventFunc)) return;

			for (auto& func : m_EventFunc[key]) {
				func(param...);
			}
		}

		/**
		* @brief	�S�폜
		*/
		void clear()
		{
			m_EventFunc.clear();
		}

	private:
		using EventContainer = std::unordered_multimap<Key, std::vector<std::function<void(Param...)>>>;
	
		EventContainer m_EventFunc;

	};


}