#include "controller.h"

Controller::Controller()
{
    initalize();
}

Controller::~Controller()
{
}

void Controller::getMJData(double time, double *q, double *qdot, double *qddot)
{
    _time = time;
    for (int i = 0; i < _dofs; i++)
    {
        _q(i) = q[i];
        _qdot(i) = qdot[i];
        _qddot(i) = qddot[i];
    }
}

void Controller::control()
{
    // cout << _q.transpose() << '\n';
}

void Controller::setMJData(double *tau)
{
    tau[6] = 5.0;
    tau[7] = 0.0;
    tau[8] = -0.0;
    tau[9] = -5.0;
}

void Controller::initalize()
{
    _time = 0;
    _dofs = _cmodel._model.dof_count;
    _q.setZero(_dofs);
    _qdot.setZero(_dofs);
    _qddot.setZero(_dofs);
    _tau.setZero(_dofs);
}