#include<stdio.h>
#include<jni.h>

#include "pch.h"
#include "framework.h"
#include "jni_header.h"


JNIEXPORT jint JNICALL Java_com_company_JNI_getNumber(JNIEnv * env, jobject obj, jint jint)
{
	return jint;
}
	
JNIEXPORT void JNICALL Java_com_company_JNI_printHelloWord(JNIEnv * env, jobject obj)
{
	printf("[c function] hello world!\n");

	jclass cls = env->FindClass("com/company/JNI");
	jmethodID mid = env->GetMethodID(cls, "getResult", "()I"); // int �� ��� "I", float�� ��� "F", boolean�� ��� "Z"�� ǥ��
	jint a = env->CallIntMethod(obj, mid);
	printf("%d \n", a);

}
