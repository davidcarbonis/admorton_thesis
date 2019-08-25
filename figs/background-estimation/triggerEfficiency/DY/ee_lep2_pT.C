void ee_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:53 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-37.5,0.4772701,337.5,1.150692);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetLeftMargin(0.15);
   Canvas_1_n2->SetRightMargin(0.05);
   Canvas_1_n2->SetTopMargin(0.08);
   Canvas_1_n2->SetBottomMargin(0.15);
   Canvas_1_n2->SetGridy();
   Canvas_1_n2->SetTickx(1);
   Canvas_1_n2->SetTicky(1);
   Canvas_1_n2->SetFrameBorderMode(0);

   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *electron2_pT_MC_ttbar = new TProfile("electron2_pT_MC_ttbar","ee final state - subleading lepton",9, xAxis);
   electron2_pT_MC_ttbar->SetBinEntries(1,3854);
   electron2_pT_MC_ttbar->SetBinEntries(2,4690);
   electron2_pT_MC_ttbar->SetBinEntries(3,5249);
   electron2_pT_MC_ttbar->SetBinEntries(4,9325);
   electron2_pT_MC_ttbar->SetBinEntries(5,12910);
   electron2_pT_MC_ttbar->SetBinEntries(6,4145);
   electron2_pT_MC_ttbar->SetBinEntries(7,1835);
   electron2_pT_MC_ttbar->SetBinEntries(8,1651);
   electron2_pT_MC_ttbar->SetBinEntries(9,111);
   electron2_pT_MC_ttbar->SetBinContent(1,3274);
   electron2_pT_MC_ttbar->SetBinContent(2,4320);
   electron2_pT_MC_ttbar->SetBinContent(3,5008);
   electron2_pT_MC_ttbar->SetBinContent(4,9123);
   electron2_pT_MC_ttbar->SetBinContent(5,12822);
   electron2_pT_MC_ttbar->SetBinContent(6,4130);
   electron2_pT_MC_ttbar->SetBinContent(7,1825);
   electron2_pT_MC_ttbar->SetBinContent(8,1647);
   electron2_pT_MC_ttbar->SetBinContent(9,111);
   electron2_pT_MC_ttbar->SetBinError(1,0.005051626);
   electron2_pT_MC_ttbar->SetBinError(2,0.003494018);
   electron2_pT_MC_ttbar->SetBinError(3,0.002599109);
   electron2_pT_MC_ttbar->SetBinError(4,0.001365643);
   electron2_pT_MC_ttbar->SetBinError(5,0.0006811775);
   electron2_pT_MC_ttbar->SetBinError(6,0.001018898);
   electron2_pT_MC_ttbar->SetBinError(7,0.001982094);
   electron2_pT_MC_ttbar->SetBinError(8,0.001644725);
   electron2_pT_MC_ttbar->SetBinError(9,0.01439483);
   electron2_pT_MC_ttbar->SetEntries(43770);

   electron2_pT_MC_ttbar->SetMinimum(0.5);
   electron2_pT_MC_ttbar->SetMaximum(1.1);
   electron2_pT_MC_ttbar->SetLineColor(1);
   electron2_pT_MC_ttbar->SetLineWidth(2);
   electron2_pT_MC_ttbar->SetMarkerColor(1);
   electron2_pT_MC_ttbar->SetMarkerStyle(20);
   electron2_pT_MC_ttbar->SetMarkerSize(1);

   electron2_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron2_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   electron2_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   electron2_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   electron2_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   electron2_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   electron2_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   electron2_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   electron2_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   electron2_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   electron2_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   electron2_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   electron2_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   electron2_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   electron2_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   electron2_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   electron2_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   electron2_pT_MC_ttbar->Draw("E1");

   TProfile *electron2_pT_MC_DY = new TProfile("electron2_pT_MC_DY","",9, xAxis);
   electron2_pT_MC_DY->SetBinEntries(1,105);
   electron2_pT_MC_DY->SetBinEntries(2,132);
   electron2_pT_MC_DY->SetBinEntries(3,170);
   electron2_pT_MC_DY->SetBinEntries(4,338);
   electron2_pT_MC_DY->SetBinEntries(5,861);
   electron2_pT_MC_DY->SetBinEntries(6,562);
   electron2_pT_MC_DY->SetBinEntries(7,340);
   electron2_pT_MC_DY->SetBinEntries(8,714);
   electron2_pT_MC_DY->SetBinEntries(9,108);
   electron2_pT_MC_DY->SetBinContent(1,97);
   electron2_pT_MC_DY->SetBinContent(2,126);
   electron2_pT_MC_DY->SetBinContent(3,167);
   electron2_pT_MC_DY->SetBinContent(4,332);
   electron2_pT_MC_DY->SetBinContent(5,860);
   electron2_pT_MC_DY->SetBinContent(6,560);
   electron2_pT_MC_DY->SetBinContent(7,340);
   electron2_pT_MC_DY->SetBinContent(8,695);
   electron2_pT_MC_DY->SetBinContent(9,68);
   electron2_pT_MC_DY->SetBinError(1,0.03043539);
   electron2_pT_MC_DY->SetBinError(2,0.02249644);
   electron2_pT_MC_DY->SetBinError(3,0.01455481);
   electron2_pT_MC_DY->SetBinError(4,0.008976564);
   electron2_pT_MC_DY->SetBinError(5,0.002312245);
   electron2_pT_MC_DY->SetBinError(6,0.004039786);
   electron2_pT_MC_DY->SetBinError(7,0.004722455);
   electron2_pT_MC_DY->SetBinError(8,0.006382764);
   electron2_pT_MC_DY->SetBinError(9,0.04461767);
   electron2_pT_MC_DY->SetEntries(3330);

   electron2_pT_MC_DY->SetLineColor(2);
   electron2_pT_MC_DY->SetLineWidth(2);
   electron2_pT_MC_DY->SetMarkerColor(2);
   electron2_pT_MC_DY->SetMarkerStyle(22);
   electron2_pT_MC_DY->SetMarkerSize(1.2);

   electron2_pT_MC_DY->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron2_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   electron2_pT_MC_DY->GetXaxis()->SetLabelSize(0.035);
   electron2_pT_MC_DY->GetXaxis()->SetTitleSize(0.035);
   electron2_pT_MC_DY->GetXaxis()->SetTitleOffset(1);
   electron2_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   electron2_pT_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   electron2_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   electron2_pT_MC_DY->GetYaxis()->SetLabelSize(0.035);
   electron2_pT_MC_DY->GetYaxis()->SetTitleSize(0.035);
   electron2_pT_MC_DY->GetYaxis()->SetTitleOffset(1);
   electron2_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   electron2_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   electron2_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   electron2_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   electron2_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   electron2_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   electron2_pT_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron2_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("electron2_pT_MC_DY", "DY Efficiency", "PEL");

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron2_pT_eff.pdf");
}
