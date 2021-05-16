#ifndef GL_WND_H
#define GL_WND_H

#include "HVideoWnd.h"
#include "MOpenGLWidget.h"

class VideoOpenGLWnd : public HVideoWnd, MOpenGLWidget {
public:
    VideoOpenGLWnd(QWidget* parent = nullptr);

    virtual void setGeometry(const QRect& rc) {
        MOpenGLWidget::setGeometry(rc);
    }

    virtual void update() {
        MOpenGLWidget::update();
    }

protected:
    virtual void paintGL();
    void drawTime();
    void drawFPS();
    void drawResolution();
};

#endif // GL_WND_H
