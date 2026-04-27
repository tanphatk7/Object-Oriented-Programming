#include "ManHinhDoHoa.h"
#include <GL/glut.h>
// Em sử dụng thư viện GL/glut.h để vẽ đồ họa.
// Trong Visual Studio em có cài Packages freeglut.3.0.0.v140

// Khởi tạo biến static (BẮT BUỘC phải nằm trong file .cpp để tránh lỗi định nghĩa nhiều lần)
std::vector<Point*> ManHinhDoHoa::danhSachDiem;
std::vector<HinhThang*> ManHinhDoHoa::danhSachHinhThang;

void ManHinhDoHoa::drawAxes() {
    glColor3f(1.0f, 1.0f, 1.0f);   // Màu của trục Ox và Oy (trắng)

    glBegin(GL_LINES);
    glVertex2f(-15.0f, 0.0f); glVertex2f(15.0f, 0.0f);   // Trục Ox
    glVertex2f(0.0f, -15.0f); glVertex2f(0.0f, 15.0f);   // Trục Oy

    float tickSize = 0.2f;  // Độ dài vạch chia đơn vị
    for (int i = -15; i <= 15; ++i) {  // Vẽ từng vạch chia đơn vị
        if (i == 0) continue;
        glVertex2f((float)i, -tickSize); glVertex2f((float)i, tickSize);
        glVertex2f(-tickSize, (float)i); glVertex2f(tickSize, (float)i);
    }
    glEnd();
}

void ManHinhDoHoa::renderScreen() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // Màn hình đen
    glClear(GL_COLOR_BUFFER_BIT);

    drawAxes();

    for (int i = 0; i < danhSachHinhThang.size(); i++) {
        danhSachHinhThang[i]->VeHinhThang();
    }

    for (int i = 0; i < danhSachDiem.size(); i++) {
        danhSachDiem[i]->VeDiem();
    }

    glFlush();
}

void ManHinhDoHoa::ThemDiem(Point* p) {
    danhSachDiem.push_back(p);
}
void ManHinhDoHoa::ThemHinhThang(HinhThang *t) {
    danhSachHinhThang.push_back(t);
}

void ManHinhDoHoa::HienThi(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);   // Kích thước cửa sổ đồ họa
    glutCreateWindow("Ve He Truc Toa Do");

    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);

    glutDisplayFunc(renderScreen);  // Xuất ra màn hình
    glutMainLoop();  // Giữ đồ họa hiện trên màn hình cho đến khi tắt
}