// MATLABでOptiTrackの送受信をマルチスレッドでするためのライブラリ
#ifndef MMULTIOPTI_H
#define MMULTIOPTI_H

#include "mex.h"      // MATLAB API（MEX用）
#include <thread>     // C++11以降のスレッド
#include <mutex>      // 排他制御用（必要に応じて）
#include <iostream>

class mMultiOpti
{
private:
    /* data */
public:
    mMultiOpti(/* args */);
    ~mMultiOpti();

    void thread1Test();
    void thread2Test();
    void MultiThreadTest();
};

#endif // MMULTIOPTI_H