#pragma once
#include <vector>
#include "Point.h"
#include "TamGiac.h"

class ManHinhDoHoa {
private:
    static std::vector<Point*> danhSachDiem;
    static std::vector<TamGiac*> danhSachTamGiac;

    static void drawAxes();
    static void renderScreen();

public:
    void ThemDiem(Point* p);
    void ThemTamGiac(TamGiac* tg);  
    void HienThi(int argc, char** argv);
};