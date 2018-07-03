#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <utility>
#include <unistd.h>
#include <QCustomPlot>

int main(){
  QVector<double> x;
  QVector<double> y;
  QCustomPlot *customPlot = new QCustomPlot();
  std::cout << "Enter number of points: ";
  int i,j,n;
  std::cin >> n;
  for(int k=0; k<n; k++){
  std::cin >> i >>j;
  x.push_back(i);
  y.push_back(j);
  }
  customPlot->addGraph();
  customPlot->graph(0)->setData(x, y);
  customPlot->xAxis->setLabel("x");
  customPlot->yAxis->setLabel("y");
  return 0;
}
