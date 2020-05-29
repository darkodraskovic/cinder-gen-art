#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;

class BasicApp : public App {
  public:
	void keyDown( KeyEvent event ) override;
	void draw() override;

  private:
	std::vector<vec2> mPoints;
};

void prepareSettings( BasicApp::Settings* settings )
{
	settings->setMultiTouchEnabled( false );
}

void BasicApp::keyDown( KeyEvent event )
{
	if( event.getChar() == 'f' ) {
		setFullScreen( ! isFullScreen() );
	}
	else if( event.getCode() == KeyEvent::KEY_ESCAPE ) {
		if( isFullScreen() )
			setFullScreen( false );
		else
			quit();
	}
}

void BasicApp::draw()
{
	gl::clear( Color::gray( 0.5f ) );
	gl::color( 1.0f, 0.5f, 0.25f );

	gl::begin( GL_LINE_STRIP );
	for( const vec2 &point : mPoints ) {
		gl::vertex( point );
	}
    
	gl::end();
}

CINDER_APP( BasicApp, RendererGl, prepareSettings )
