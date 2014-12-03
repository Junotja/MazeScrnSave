#ifndef _MAZECOLOR_H
#define _MAZECOLOR_H

#include <Windows.h>

enum ColorType
{
    clBackGround,   // ����
    clWall,         // ǽɫ
    clBadPath,      // �����õ�·��
    clVisited,      // ����ʹ�õ�·��
    clPtStart,      // ��ʼ��
    clPtEnd,        // ������
    clCount,        // ��ɫ����
};

class CMazeColor
{
public:
    CMazeColor();
    ~CMazeColor();

    HPEN GetPen(ColorType ct);
    HBRUSH GetBrush(ColorType ct);
    COLORREF GetColor(ColorType ct) const;
    COLORREF SetColor(ColorType ct, COLORREF color);

private:
    COLORREF m_colors[clCount];
    HPEN m_pens[clCount];
    HBRUSH m_brushs[clCount];
};

#endif /* _MAZECOLOR_H */