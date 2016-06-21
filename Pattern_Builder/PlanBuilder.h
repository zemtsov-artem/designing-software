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
    //������ ��� ����
    virtual void BuildWalls() = 0;
    //������ ��� ����
    virtual void BuildWindows() = 0;
    //������ ��� ������
    virtual void BuildDoors() = 0;
    //����������� �����
    void Draw()
    {
        _plan->Draw();
    }
};