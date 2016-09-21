#ifndef SKYBOX_H
#define SKYBOX_H

#include <gmParametricsModule>

#include <QDebug>

class Skybox : public GMlib::PSphere<float> {
    GM_SCENEOBJECT(Skybox)

public:
  Skybox(float radius);
  ~Skybox();

//methods for properties

protected:
  void localSimulate(double dt);

private:

}; // END class

#endif // SKYBOX_H
