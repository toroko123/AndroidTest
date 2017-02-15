#pragma once
#include<string>
#include<android\native_activity.h>

namespace util {

	/**
	* @brief				テキストファイルの読み込み
	* @param mgr	　　　　	enginが持っているAssetManager
	* @param filepath			外部フォルダのパス(assetsフォルダからのパスを切る)
	*/
	std::string getAPKPath(ANativeActivity* activity) {
		JNIEnv* env = nullptr;
		activity->vm->AttachCurrentThread(&env, NULL);
		jclass clazz = env->GetObjectClass(activity->clazz);
		jmethodID methodID = env->GetMethodID(clazz, "getPackageCodePath", "()Ljava/lang/String;");
		jobject result = env->CallObjectMethod(activity->clazz, methodID);

		const char* str;
		jboolean isCopy;
		str = env->GetStringUTFChars((jstring)result, &isCopy);

		return std::string(str);
	}

}