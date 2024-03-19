#include "test1_Test1.h"
#include <iostream>

jdouble JNICALL Java_test1_Test1_multiply
  (JNIEnv *env, jobject object, jdouble param1, jdouble param2){
    std::cout << "Hello Meomeo" << std::endl;

  return 1;
}