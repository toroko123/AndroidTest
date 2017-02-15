#pragma once
#include<string>
#include<android\native_activity.h>

namespace util {

	/**
	* @brief				�e�L�X�g�t�@�C���̓ǂݍ���
	* @param mgr	�@�@�@�@	engin�������Ă���AssetManager
	* @param filepath			�O���t�H���_�̃p�X(assets�t�H���_����̃p�X��؂�)
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