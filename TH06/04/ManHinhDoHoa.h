#pragma once
#include <vector>
#include "Point.h"
#include "Circle.h"

class ManHinhDoHoa {
private:
    static std::vector<Point*> danhSachDiem;
    static std::vector<Circle*> danhSachHinhTron;

    static void drawAxes();
    static void renderScreen();

public:
    void ThemDiem(Point* p);
    void ThemHinhTron(Circle* c);
    void HienThi(int argc, char** argv);
};