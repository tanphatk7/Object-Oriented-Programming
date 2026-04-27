#pragma once
#include <vector>
#include "Point.h"
#include "HinhThang.h"

class ManHinhDoHoa {
private:
    static std::vector<Point*> danhSachDiem;
    static std::vector<HinhThang*> danhSachHinhThang;

    static void drawAxes();
    static void renderScreen();

public:
    void ThemDiem(Point*);
    void ThemHinhThang(HinhThang*);
    void HienThi(int argc, char** argv);
};