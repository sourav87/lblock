#ifndef GLBOX_H
#define GLBOX_H

#include <qgl.h>

class GLBox : public QGLWidget
{
	Q_OBJECT

    public:
	GLBox( QWidget* parent = NULL);
	~GLBox();

    protected:
	void initializeGL();
	void paintGL();
	void resizeGL( int w, int h );

    public slots:
};

#endif // GLBOX_H
