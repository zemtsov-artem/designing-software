#pragma once

#include "Plan.h"

class PlanBuilder {
 public:
    PlanBuilder() { _plan = new Plan(); }
    virtual ~PlanBuilder() = default;

    virtual void BuildWalls()   = 0;
    virtual void BuildWindows() = 0;
    virtual void BuildDoors()   = 0;

    void Draw() {
        _plan->Draw();
    }

 protected:
    Plan* _plan;
};