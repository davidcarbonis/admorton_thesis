void htTrackingEffVsInvPtFlatGeometry_5000()
{
//=========Macro generated from canvas: Canvas_1_n2/Canvas_1_n2
//=========  (Sun Sep  9 17:02:36 2018) by ROOT version 6.14/04
   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291);;
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetLogz();
   Canvas_1_n2->SetGridy();
   Canvas_1_n2->SetTickx(1);
   Canvas_1_n2->SetTicky(1);
   Canvas_1_n2->SetLeftMargin(0.15);
   Canvas_1_n2->SetRightMargin(0.05);
   Canvas_1_n2->SetTopMargin(0.05);
   Canvas_1_n2->SetBottomMargin(0.15);
   Canvas_1_n2->SetFrameBorderMode(0);
   
   Double_t AlgEffVsInvPt_fx3001[16] = {
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
   Double_t AlgEffVsInvPt_fy3001[16] = {
   0.9843428,
   0.9824326,
   0.9804974,
   0.9772416,
   0.9775281,
   0.9770078,
   0.9716352,
   0.9663626,
   0.959115,
   0.9540089,
   0.9443812,
   0.9288293,
   0.9036691,
   0.8743849,
   0.8237648,
   0.6725502};
   Double_t AlgEffVsInvPt_felx3001[16] = {
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
   Double_t AlgEffVsInvPt_fely3001[16] = {
   0.002437307,
   0.001656729,
   0.001557427,
   0.001635949,
   0.001623638,
   0.001656634,
   0.001876731,
   0.00203736,
   0.002288692,
   0.002441902,
   0.002697716,
   0.003040567,
   0.003529684,
   0.003995042,
   0.00459029,
   0.005891031};
   Double_t AlgEffVsInvPt_fehx3001[16] = {
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
   Double_t AlgEffVsInvPt_fehy3001[16] = {
   0.002131338,
   0.001521637,
   0.001448152,
   0.001531923,
   0.001519883,
   0.001551093,
   0.001766725,
   0.00192786,
   0.002175222,
   0.002327292,
   0.002582621,
   0.002927552,
   0.003419866,
   0.003890898,
   0.004499556,
   0.005837835};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,AlgEffVsInvPt_fx3001,AlgEffVsInvPt_fy3001,AlgEffVsInvPt_felx3001,AlgEffVsInvPt_fehx3001,AlgEffVsInvPt_fely3001,AlgEffVsInvPt_fehy3001);
   grae->SetName("AlgEffVsInvPt_1");
   grae->SetTitle("; Simulated track 1/p_{T} [GeV^{-1}]; Efficiency");
   grae->SetLineColor(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(2);
   
   TH1F *Graph_AlgEffVsInvPt3001 = new TH1F("Graph_AlgEffVsInvPt3001","",100,0,0.55);
   Graph_AlgEffVsInvPt3001->SetMinimum(0.53);
   Graph_AlgEffVsInvPt3001->SetMaximum(1);
   Graph_AlgEffVsInvPt3001->SetDirectory(0);
   Graph_AlgEffVsInvPt3001->SetStats(0);

   Graph_AlgEffVsInvPt3001->SetLineColor(4);
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetTitle(" Simulated track 1/p_{T} [GeV^{-1}]");
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetLabelSize(0.05);
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetTitleSize(0.05);
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetTitleOffset(1.3);
   Graph_AlgEffVsInvPt3001->GetXaxis()->SetTitleFont(42);
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetTitle(" Efficiency");
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetLabelSize(0.05);
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetTitleSize(0.05);
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetTitleOffset(1.3);
   Graph_AlgEffVsInvPt3001->GetYaxis()->SetTitleFont(42);
   Graph_AlgEffVsInvPt3001->GetZaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3001->GetZaxis()->SetLabelSize(0.035);
   Graph_AlgEffVsInvPt3001->GetZaxis()->SetTitleSize(0.035);
   Graph_AlgEffVsInvPt3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_AlgEffVsInvPt3001);
   
   grae->Draw("AP");
   
   Double_t AlgEffVsInvPt_fx3002[16] = {
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
   Double_t AlgEffVsInvPt_fy3002[16] = {
   0.9843428,
   0.9828349,
   0.9804974,
   0.9774523,
   0.9778431,
   0.9771147,
   0.9718612,
   0.9665906,
   0.9599567,
   0.9546237,
   0.9469094,
   0.9368231,
   0.9226151,
   0.9084199,
   0.8706873,
   0.7684114};
   Double_t AlgEffVsInvPt_felx3002[16] = {
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
   Double_t AlgEffVsInvPt_fely3002[16] = {
   0.002437307,
   0.001639618,
   0.001557427,
   0.001629044,
   0.001613249,
   0.001653127,
   0.001869927,
   0.002031084,
   0.002267292,
   0.002427158,
   0.002642216,
   0.00288471,
   0.003210844,
   0.003497515,
   0.004062865,
   0.005320848};
   Double_t AlgEffVsInvPt_fehx3002[16] = {
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
   Double_t AlgEffVsInvPt_fehy3002[16] = {
   0.002131338,
   0.001504348,
   0.001448152,
   0.001524956,
   0.001509401,
   0.001547555,
   0.001759854,
   0.00192152,
   0.002153583,
   0.002312374,
   0.002526405,
   0.002769446,
   0.003095641,
   0.003383609,
   0.003958767,
   0.005237978};
   grae = new TGraphAsymmErrors(16,AlgEffVsInvPt_fx3002,AlgEffVsInvPt_fy3002,AlgEffVsInvPt_felx3002,AlgEffVsInvPt_fehx3002,AlgEffVsInvPt_fely3002,AlgEffVsInvPt_fehy3002);
   grae->SetName("AlgEffVsInvPt_2");
   grae->SetTitle("; 1/p_{T}; Efficiency");
   grae->SetLineColor(4);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(2);
   
   TH1F *Graph_AlgEffVsInvPt3002 = new TH1F("Graph_AlgEffVsInvPt3002","",100,0,0.55);
   Graph_AlgEffVsInvPt3002->SetMinimum(0.7407523);
   Graph_AlgEffVsInvPt3002->SetMaximum(1.008812);
   Graph_AlgEffVsInvPt3002->SetDirectory(0);
   Graph_AlgEffVsInvPt3002->SetStats(0);

   Graph_AlgEffVsInvPt3002->SetLineColor(4);
   Graph_AlgEffVsInvPt3002->GetXaxis()->SetTitle(" 1/p_{T}");
   Graph_AlgEffVsInvPt3002->GetXaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3002->GetXaxis()->SetLabelSize(0.035);
   Graph_AlgEffVsInvPt3002->GetXaxis()->SetTitleSize(0.035);
   Graph_AlgEffVsInvPt3002->GetXaxis()->SetTitleFont(42);
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetTitle(" Efficiency");
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetLabelSize(0.035);
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetTitleSize(0.035);
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetTitleOffset(0);
   Graph_AlgEffVsInvPt3002->GetYaxis()->SetTitleFont(42);
   Graph_AlgEffVsInvPt3002->GetZaxis()->SetLabelFont(42);
   Graph_AlgEffVsInvPt3002->GetZaxis()->SetLabelSize(0.035);
   Graph_AlgEffVsInvPt3002->GetZaxis()->SetTitleSize(0.035);
   Graph_AlgEffVsInvPt3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_AlgEffVsInvPt3002);
   
   grae->Draw(" p");
   
   TLegend *leg = new TLegend(0.2,0.27,0.33,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AlgEffVsInvPt_1","Default Configuration","PEL");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AlgEffVsInvPt_2","Low p_{T} cell merging","PEL");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(7);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
}
