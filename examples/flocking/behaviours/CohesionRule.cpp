#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2 CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
    Vector2 cohesionForce;

    // todo: add your code here to make a force towards the center of mass
    // hint: iterate over the neighborhood

    Vector2 centerOfMass;

    for (int i = 0; i < neighborhood.size(); i++)
    {
        centerOfMass += neighborhood[i]->getPosition();
    }

    if (neighborhood.size() > 1)
    {
        centerOfMass /= neighborhood.size();
    }


    return cohesionForce;
}