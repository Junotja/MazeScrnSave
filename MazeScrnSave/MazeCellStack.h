#ifndef _MAZECELLSTACK_H
#define _MAZECELLSTACK_H

class CMazeCell;

struct StackNode
{
    CMazeCell* Cell;
    StackNode* Next;
};

class CMazeCellStack  
{
public:
    CMazeCellStack();
//     CMazeCellStack(const CMazeCellStack&);
    ~CMazeCellStack();

    void Push(CMazeCell*);						// ѹջ
    void Pop();									// ��ջ
    CMazeCell* Top() const;						// ջ��
    bool IsEmpty();								// �գ�
    bool IsFull();								// ����
    void Init();								// �����ؽ�

private:
    StackNode* top;								// ջ��ָ��		
};


#endif /* _MAZECELLSTACK_H */