#include "helloworld.h"
#include <thread>
#include <iostream>
#include <QDebug>

HelloWorld::HelloWorld(QObject *parent) : QObject(parent)
{}

void HelloWorld::start_thread()
{
    _worker_state = true;
    _worker = std::thread([&](){
        while(true){
            qDebug() << "counter: " << _hello_worker._datas.count << " worker state: " << _worker_state;
            std::this_thread::sleep_for(std::chrono::seconds(3));
            _hello_worker.count_up();
            emit countChanged();
            if(!_worker_state){
                break;
            }
        }
    });
}

void HelloWorld::start_thread2()
{
    _worker_state2 = true;
    _worker2 = std::thread([&](){
        while(true){
            qDebug() << "counter: " << _hello_worker2._datas.count << " worker state: " << _worker_state2;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            _hello_worker2.count_up();
            emit countChanged2();
            if(!_worker_state2){
                break;
            }
        }
    });
}

void HelloWorld::stop_thread()
{
    qDebug() << "job end";
    _worker_state = false;
    _worker.join();
    _hello_worker.reset_count();
    emit countChanged();
}
void HelloWorld::stop_thread2()
{
    qDebug() << "job2 end";
    _worker_state2 = false;
    _worker2.join();
    _hello_worker2.reset_count();
    emit countChanged2();
}

HelloWorker::HelloWorker(uint32_t init_count, std::string name)
    :_datas{Datas(init_count, name)}
{}

void HelloWorker::count_up()
{
    _datas.count += 1;
}

void HelloWorker::reset_count()
{
    _datas.count = 0;
}
