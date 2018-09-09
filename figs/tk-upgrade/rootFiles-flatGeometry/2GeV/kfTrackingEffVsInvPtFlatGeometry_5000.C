void kfTrackingEffVsInvPtFlatGeometry_5000()
{
//=========Macro generated from canvas: Canvas_1_n3/Canvas_1_n2
//=========  (Sun Sep  9 17:22:49 2018) by ROOT version 6.14/04
   TCanvas *Canvas_1_n3 = new TCanvas("Canvas_1_n3", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n3->Range(-0.4860759,-0.2025316,2.551899,1.063291);;
   Canvas_1_n3->SetFillColor(0);
   Canvas_1_n3->SetBorderMode(0);
   Canvas_1_n3->SetBorderSize(2);
   Canvas_1_n3->SetLogz();
   Canvas_1_n3->SetGridy();
   Canvas_1_n3->SetTickx(1);
   Canvas_1_n3->SetTicky(1);
   Canvas_1_n3->SetFrameBorderMode(0);
   Canvas_1_n3->SetFrameBorderMode(0);
   
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fx3001[16] = {
   0.01547187,
   0.046875,
   0.078125,
   0.109375,
   0.140625,
   0.171875,
   0.203125,
   0.234375,
   0.265625,
   0.296875,
   0.328125,
   0.359375,
   0.390625,
   0.421875,
   0.453125,
   0.484375};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fy3001[16] = {
   0.9432834,
   0.9542712,
   0.9569409,
   0.9533242,
   0.9514859,
   0.9564752,
   0.9441745,
   0.9334094,
   0.9272487,
   0.9173635,
   0.9051953,
   0.8793192,
   0.8460307,
   0.8030344,
   0.73061,
   0.5687766};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_felx3001[16] = {
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fely3001[16] = {
   0.004260001,
   0.002549068,
   0.002231171,
   0.002267097,
   0.002302913,
   0.002213747,
   0.002548651,
   0.002769849,
   0.002960853,
   0.003167151,
   0.003409048,
   0.003813097,
   0.004282425,
   0.00475987,
   0.005312703,
   0.006195248};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fehx3001[16] = {
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fehy3001[16] = {
   0.003988399,
   0.002423859,
   0.002128464,
   0.00216925,
   0.002205835,
   0.002113646,
   0.002445942,
   0.002668898,
   0.002855937,
   0.003062443,
   0.00330465,
   0.003713586,
   0.004188618,
   0.004675818,
   0.005248214,
   0.006174059};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,AlgEffFitVsInvPt_KF4ParamsComb_fx3001,AlgEffFitVsInvPt_KF4ParamsComb_fy3001,AlgEffFitVsInvPt_KF4ParamsComb_felx3001,AlgEffFitVsInvPt_KF4ParamsComb_fehx3001,AlgEffFitVsInvPt_KF4ParamsComb_fely3001,AlgEffFitVsInvPt_KF4ParamsComb_fehy3001);
   grae->SetName("AlgEffFitVsInvPt_KF4ParamsComb_1");
   grae->SetTitle("; Simulated track 1/Pt [GeV^{-1}]; Efficiency");
   grae->SetLineColor(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_AlgEffFitVsInvPt_KF4ParamsComb3001 = new TH1F("Graph_AlgEffFitVsInvPt_KF4ParamsComb3001","",100,0,0.55);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->SetMinimum(0.53);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->SetMaximum(1);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->SetDirectory(0);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->SetStats(0);

   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->SetLineColor(4);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetXaxis()->SetTitle(" Simulated track 1/Pt [GeV^{-1}]");
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetXaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetXaxis()->SetTitleOffset(1.2);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetXaxis()->SetTitleFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetYaxis()->SetTitle(" Efficiency");
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetYaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetYaxis()->SetTitleOffset(1.2);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetYaxis()->SetTitleFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetZaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetZaxis()->SetLabelSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetZaxis()->SetTitleSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_AlgEffFitVsInvPt_KF4ParamsComb3001);
   
   grae->Draw("AP");
   
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fx3002[16] = {
   0.015625,
   0.046875,
   0.078125,
   0.109375,
   0.140625,
   0.171875,
   0.2026316,
   0.234375,
   0.265625,
   0.296875,
   0.328125,
   0.359375,
   0.390625,
   0.421875,
   0.453125,
   0.484375};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fy3002[16] = {
   0.9432792,
   0.9545394,
   0.9569409,
   0.9533242,
   0.9514859,
   0.9564752,
   0.9441751,
   0.9334094,
   0.9273689,
   0.9176094,
   0.9068386,
   0.8852501,
   0.863509,
   0.8321487,
   0.7740823,
   0.6489653};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_felx3002[16] = {
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fely3002[16] = {
   0.004260001,
   0.002542346,
   0.002231171,
   0.002267097,
   0.002302913,
   0.002213747,
   0.002548651,
   0.002769849,
   0.002958699,
   0.003163046,
   0.003383566,
   0.003734018,
   0.004081463,
   0.004483741,
   0.005019798,
   0.00598619};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fehx3002[16] = {
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625,
   0.015625};
   Double_t AlgEffFitVsInvPt_KF4ParamsComb_fehy3002[16] = {
   0.003988399,
   0.002417055,
   0.002128464,
   0.00216925,
   0.002205835,
   0.002113646,
   0.002445942,
   0.002668898,
   0.002853752,
   0.003058273,
   0.003278729,
   0.003632913,
   0.003982838,
   0.004391527,
   0.004943091,
   0.005940275};
   grae = new TGraphAsymmErrors(16,AlgEffFitVsInvPt_KF4ParamsComb_fx3002,AlgEffFitVsInvPt_KF4ParamsComb_fy3002,AlgEffFitVsInvPt_KF4ParamsComb_felx3002,AlgEffFitVsInvPt_KF4ParamsComb_fehx3002,AlgEffFitVsInvPt_KF4ParamsComb_fely3002,AlgEffFitVsInvPt_KF4ParamsComb_fehy3002);
   grae->SetName("AlgEffFitVsInvPt_KF4ParamsComb_2");
   grae->SetTitle("; Simulated track 1/Pt [GeV^{-1}]; Efficiency");
   grae->SetLineColor(4);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_AlgEffFitVsInvPt_KF4ParamsComb3002 = new TH1F("Graph_AlgEffFitVsInvPt_KF4ParamsComb3002","",100,0,0.55);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->SetMinimum(0.6113701);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->SetMaximum(0.9906784);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->SetDirectory(0);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->SetStats(0);

   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetXaxis()->SetTitle(" Simulated track 1/Pt [GeV^{-1}]");
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetXaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetXaxis()->SetLabelSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetXaxis()->SetTitleSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetXaxis()->SetTitleFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetTitle(" Efficiency");
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetLabelSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetTitleSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetTitleOffset(0);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetYaxis()->SetTitleFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetZaxis()->SetLabelFont(42);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetZaxis()->SetLabelSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetZaxis()->SetTitleSize(0.035);
   Graph_AlgEffFitVsInvPt_KF4ParamsComb3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_AlgEffFitVsInvPt_KF4ParamsComb3002);
   
   grae->Draw(" p");
   
   TLegend *leg = new TLegend(0.2,0.27,0.33,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AlgEffFitVsInvPt_KF4ParamsComb_1","Default Configuration","PEL");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AlgEffFitVsInvPt_KF4ParamsComb_2","Low p_{T} cell merging","PEL");
   entry->SetLineColor(4);
   entry->SetLineStyle(7);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas_1_n3->Modified();
   Canvas_1_n3->cd();
   Canvas_1_n3->SetSelected(Canvas_1_n3);
}
