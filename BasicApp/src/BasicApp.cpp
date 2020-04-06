// cd /media/darko/depot/Radovi/AppDev/Cinder/BasicApp/ && ./configure.sh
// cd /media/darko/depot/Radovi/AppDev/Cinder/BasicApp/ && ./compile.sh

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;

class BasicApp : public App {
  public:
    void keyDown( KeyEvent event ) override;
	void draw() override;
};

void BasicApp::keyDown( KeyEvent event )
{
	if( event.getChar() == 'f' ) {
		setFullScreen( ! isFullScreen() );
	} else if( event.getCode() == KeyEvent::KEY_ESCAPE ) {
		if( isFullScreen() )
			setFullScreen( false );
		else
			quit();
	}
}

void BasicApp::draw()
{
	gl::clear();
    gl::drawSolidCircle( getWindowCenter(), 200 );
}

CINDER_APP( BasicApp, RendererGl )
