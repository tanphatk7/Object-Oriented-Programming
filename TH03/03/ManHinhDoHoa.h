#pragma once
#include <vector>
#include "Point.h"
#include "DaGiac.h"

class ManHinhDoHoa {
private:
    static std::vector<Point*> danhSachDiem;
    static std::vector<DaGiac*> danhSachDaGiac;

    static void drawAxes();
    static void renderScreen();

public:
    void ThemDiem(Point* p);
    void ThemDaGiac(DaGiac* dg);
    void HienThi(int argc, char** argv);
};