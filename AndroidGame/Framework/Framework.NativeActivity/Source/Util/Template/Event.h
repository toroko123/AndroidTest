#pragma once

#include<unordered_map>
#include<vector>
#include<functional>

/**
* @file	Event.h
* @brief	keyの重複を許すイベントテンプレート
* @author	高須優輝
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
		* @brief		イベントに対応したコールバック関数を登録
		* @param key	イベント判別キー
		* @param func	コールバック関数
		*/
		void add(const Key& key, const std::function<void(Param...)> func) {
			m_EventFunc[key].emplace_back(func);
		}

		/**
		* @brief		イベントの発生通知を受け取る
		* @param key	発生したイベントの判別キー
		*/
		void onEvent(const Key& key,Param... param) {
			//keyが見つからなければ
			if (m_EventFunc.find(key) == std::end(m_EventFunc)) return;

			for (auto& func : m_EventFunc[key]) {
				func(param...);
			}
		}

		/**
		* @brief	全削除
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