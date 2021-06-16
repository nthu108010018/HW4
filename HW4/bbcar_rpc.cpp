#include "bbcar_rpc.h"
RPCFunction rpcStop(&RPC_stop, "stop");
RPCFunction rpcCtrl(&RPC_goStraight, "goStraight");
RPCFunction rpcTurn(&RPC_turn, "turn");
RPCFunction rpcPark(&RPC_park, "park");

extern BBCar car;

void RPC_stop (Arguments *in, Reply *out)   {
    car.stop();
    return;
}

void RPC_goStraight (Arguments *in, Reply *out)   {
    int speed = in->getArg<double>();
    car.goStraight(speed);
    return;
}

void RPC_turn (Arguments *in, Reply *out)   {
    int speed = in->getArg<double>();
    double turn = in->getArg<double>();
    car.turn(speed,turn);
    return;
}

void RPC_park (Arguments *in, Reply *out) {
    double d1 = in->getArg<double>();
    double d2 = in->getArg<double>();
    int direction =  in->getArg<int>(); // 1 for west -1 for east
    car.goStraight(-200-d2*100);
    ThisThread::sleep_for(1000ms);
    car.stop();
    car.turn(200, 0.3*direction);
    ThisThread::sleep_for(1000ms);
    car.stop();
    car.goStraight(-100-d1*100);
    
    ThisThread::sleep_for(1000ms);
    car.stop();


    return;

}