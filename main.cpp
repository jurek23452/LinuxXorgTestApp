#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <unistd.h>
#include <string>
#include "font.hpp"
#define Black1           0x0000      /*   0,   0,   0 */
#define Navy            0x000F      /*   0,   0, 128 */
#define DarkGreen       0x03E0      /*   0, 128,   0 */
#define DarkCyan        0x03EF      /*   0, 128, 128 */
#define Maroon          0x7800      /* 128,   0,   0 */
#define Purple          0x780F      /* 128,   0, 128 */
#define Olive           0x7BE0      /* 128, 128,   0 */
#define LightGrey       0xC618      /* 192, 192, 192 */
#define DarkGrey        0x7BEF      /* 128, 128, 128 */
#define Black            0x001F      /*   0,   0, 255 */
#define Blue           0x07E0      /*   0, 255,   0 */
#define Cyan            0x07FF      /*   0, 255, 255 */
#define Green             0xF800      /* 255,   0,   0 */
#define Magenta         0xF81F      /* 255,   0, 255 */
#define Yellow          0xFFE0      /* 255, 255,   0 */
#define White           0xFFFF      /* 255, 255, 255 */
#define Orange          0xFD20      /* 255, 165,   0 */
#define GreenYellow     0xAFE5      /* 173, 255,  47 */
#define Pink                        0xF81F
 Display                 *display;
    Visual                  *visual;
    int                     depth;
    int                     text_x;
    int                     text_y;
    XSetWindowAttributes    frame_attributes;
    Window                  frame_window;
    XFontStruct             *fontinfo;
    XGCValues               gr_values;
    Atom wmDeleteMessage ;
    GC                      graphical_context;
    XEvent               event;
    char                    hello_string[] = "Hello World";
    int                     hello_string_length = strlen(hello_string);



    void printchr(int chr,int x,int y, unsigned long color ) {
    	XSetForeground(display, graphical_context, color );
    	int i1,i2;
    	                      for (i1 = 0; i1 < 5; i1++)
    	                        for (i2 = 0; i2 < 8; i2++)
    	                        {
    	                          if (custchar[chr - 1][i2].substr(i1,1) == "1" ) {
    	                        	  XDrawPoint(display, frame_window, graphical_context, x + i1, y + i2);
    	                          }

    	                        }
    	                      x =0; y = 0; i1 =0;i2 =0;
    }

    void printstrchr(char chr,int x,int y, unsigned long color ) {
        std::string alf = " 123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //toupper
        if (!(alf.find(chr) == 0 ))
        printchr(alf.find(chr),x,y,color);
        }
    void printstr(std::string str,int x,int y, unsigned long color ) {
    	int xi1 = 0;

    	                      for (xi1 = 0; xi1 < str.length()  ; xi1++) {

    	                      printstrchr(toupper(str.substr(xi1 ,1).c_str()[0]),xi1* 8 ,y,Black);
    	                      }
    }
int main (int argc, char *argv[])
{


    display = XOpenDisplay(NULL);
    visual = DefaultVisual(display, 0);
    depth  = DefaultDepth(display, 0);

    frame_attributes.background_pixel = XWhitePixel(display, 0);
    /* create the application window */
    frame_window = XCreateWindow(display, XRootWindow(display, 0),
                                 0, 0, 240,160, 5, depth,
                                 InputOutput, visual, CWBackPixel,
                                 &frame_attributes);
    XStoreName(display, frame_window, "Piramidy Darmowej Energi I Linux");
    XSelectInput(display, frame_window, ExposureMask | StructureNotifyMask);
    fontinfo = XLoadQueryFont(display, "10x20");
    gr_values.font = fontinfo->fid;
    gr_values.foreground = XBlackPixel(display, 0);
    graphical_context = XCreateGC(display, frame_window,GCFont+GCForeground, &gr_values);

    XMapWindow(display, frame_window);

    wmDeleteMessage = XInternAtom(display, "WM_DELETE_WINDOW", False);
    XSetWMProtocols(display, frame_window, &wmDeleteMessage, 1);
    XSetForeground(display, graphical_context, White );

    int X,Y;
      for (X = 0; X < 240; X++)
        for (Y = 0; Y < 160; Y++)
        {
          XDrawPoint(display, frame_window, graphical_context, X, Y);

        }

      usleep(500 * 1000);

    while ( 1 ) {
        XNextEvent(display, (XEvent *)&event);
        switch ( event.type ) {

                case Expose:
                {
                	XSetForeground(display, graphical_context, Yellow );

                	XDrawPoint(display, frame_window, graphical_context, 1, 1);
                    XWindowAttributes window_attributes;

                    int X,Y;
                      for (X = 0; X < 240; X++)
                        for (Y = 0; Y < 160; Y++)
                        {
                          XDrawPoint(display, frame_window, graphical_context, X, Y);

                        }



                      printstr("test programu",0,0,Green);

                    break;
                }
                case ClientMessage:
                            if (event.xclient.data.l[0] == wmDeleteMessage)
                            	XCloseDisplay(display);
                            break;
                default:
                    break;
            }

    }


    return(0);
}
