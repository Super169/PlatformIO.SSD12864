#ifndef _DEMO_PLOTTER_INO_
#define _DEMO_PLOTTER_INO_

void demoPlotter()
{
  showDemoText(TN_PLOTTER);
  drawPlotter();
  OLEDshow();
  delay(3000);
}

void drawPlotter() {
  myOLED.clr();
  myOLED.plotter(-100,100,-20,120,0,0,true);
  myOLED.plotterDraw(0,100);
  myOLED.plotterDrawTo(60,0);
  myOLED.plotterDrawTo(-70,70);
  myOLED.plotterDrawTo(70,70);
  myOLED.plotterDrawTo(-60,0);
  myOLED.plotterDrawTo(0,100);
  myOLED.plotterReset();
  for (int x = - 100; x < 100; x++) myOLED.plotterDrawTo(x, x * x / 80);
}

#endif
