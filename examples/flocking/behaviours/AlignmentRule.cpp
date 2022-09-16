#include "AlignmentRule.h"
#include "../gameobjects/Boid.h"

Vector2 AlignmentRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
    Vector2 averageVelocity = Vector2::zero();

    // todo: add your code here to align each boid in a neighborhood
    // hint: iterate over the neighborhood

    // aligning direction, not the value of the velocity

    if (!neighborhood.empty())
    {
        for (int i = 0; i < neighborhood.size(); i++)
        {
            averageVelocity += neighborhood[i]->getVelocity();
        }

        averageVelocity /= neighborhood.size();
    }

    averageVelocity *= weight;

    return Vector2::normalized(averageVelocity);
}