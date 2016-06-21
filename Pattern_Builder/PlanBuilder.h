#include <iostream>
#include <memory>
#include <string>

class PlanBuilder
{
protected:
    Plan* _plan;
public:
    PlanBuilder() { _plan = new Plan(); }
    virtual ~PlanBuilder()
    {
        delete _plan;
    }
    //методы для стен
    virtual void BuildWalls() = 0;
    //методы для окон
    virtual void BuildWindows() = 0;
    //методы для дверей
    virtual void BuildDoors() = 0;
    //Изображение схемы
    void Draw()
    {
        _plan->Draw();
    }
};