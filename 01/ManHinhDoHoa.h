#pragma once
#include <vector>
#include "Point.h"

class ManHinhDoHoa {
private:
    static std::vector<Point*> danhSachDiem;

    static void drawAxes();     // Hàm vẽ trục Oxy
    static void renderScreen(); // Hàm vẽ đồ họa trước khi xuất ra màn hình

public:
    void ThemDiem(Point* p);
    void HienThi(int argc, char** argv);
};