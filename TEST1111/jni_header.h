#include <jni.h>
/* Header for class com_company_JNI */

#ifndef _Included_com_company_JNI
#define _Included_com_company_JNI
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     com_company_JNI
	 * Method:    getNumber
	 * Signature: ()I
	 */
	JNIEXPORT jint JNICALL Java_com_company_JNI_getNumber
	(JNIEnv*, jobject, jint);

	/*
	 * Class:     com_company_JNI
	 * Method:    printHelloWord
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_company_JNI_printHelloWord
	(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif
