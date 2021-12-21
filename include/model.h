#include <iostream>
#include <rbdl/Model.h>
#include <rbdl/addons/urdfreader/urdfreader.h>
#include <Eigen/Dense>
#include <Eigen/Geometry>

using namespace std;
using namespace Eigen;

class Model{
public:
    Model();
    ~Model();
    void updateModel();
    RigidBodyDynamics::Model _model;
private:
    void initialize();
};