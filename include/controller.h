#pragma once
#include "model.h"
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

class Controller{
public:
    Controller();
    ~Controller();
    void getMJData(double time, double *q, double *qdot, double *qddot);
    void control();
    void setMJData(double *tau);
private:
    Model _cmodel;
    void initalize();
    Eigen::VectorXd _q, _qdot, _qddot;
    Eigen::VectorXd _tau;
    double _time;
    int _dofs;
};