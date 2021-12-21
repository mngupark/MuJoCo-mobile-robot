#include "model.h"

Model::Model()
{
    initialize();
}

Model::~Model()
{
}

void Model::updateModel()
{
    RigidBodyDynamics::Addons::URDFReadFromFile("/home/kist/Move/src/mobile_robot_test/model/copernicus.urdf", &_model, true, true);
    cout << "Model DoFs : " << _model.dof_count << '\n';
}

void Model::initialize()
{
    updateModel();
}