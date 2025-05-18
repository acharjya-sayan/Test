#include <TCanvas.h>
#include <TGraph.h>
#include <TAxis.h>
#include <TStyle.h>

void hello() {
    // Sample data points
    const int n = 5;
    double x[n] = {0, 1, 2, 3, 4};
    double y[n] = {0, 1, 4, 9, 16};  // y = x^2

    // Create graph
    TGraph *graph = new TGraph(n, x, y);
    graph->SetTitle("Simple Graph;X Axis;Y Axis");
    graph->SetMarkerStyle(20);  // Round markers
    graph->SetLineColor(kRed + 1);
    graph->SetLineWidth(2);

    // Create canvas and draw
    TCanvas *c1 = new TCanvas("c1", "Graph from hello()", 800, 600);
    graph->Draw("APL");  // A=Axis, P=Points, L=Line
}

