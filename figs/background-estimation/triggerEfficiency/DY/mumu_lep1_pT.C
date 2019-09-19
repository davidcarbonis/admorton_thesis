void mumu_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:14 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-37.5,0.2563142,337.5,1.19387);
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
   
   TProfile *muon1_pT_MC_DY = new TProfile("muon1_pT_MC_DY","",9, xAxis);
   muon1_pT_MC_DY->SetBinEntries(1,11);
   muon1_pT_MC_DY->SetBinEntries(2,25);
   muon1_pT_MC_DY->SetBinEntries(3,55);
   muon1_pT_MC_DY->SetBinEntries(4,113);
   muon1_pT_MC_DY->SetBinEntries(5,337);
   muon1_pT_MC_DY->SetBinEntries(6,234);
   muon1_pT_MC_DY->SetBinEntries(7,343);
   muon1_pT_MC_DY->SetBinEntries(8,10307);
   muon1_pT_MC_DY->SetBinEntries(9,14022);
   muon1_pT_MC_DY->SetBinContent(1,9);
   muon1_pT_MC_DY->SetBinContent(2,12);
   muon1_pT_MC_DY->SetBinContent(3,51);
   muon1_pT_MC_DY->SetBinContent(4,109);
   muon1_pT_MC_DY->SetBinContent(5,327);
   muon1_pT_MC_DY->SetBinContent(6,224);
   muon1_pT_MC_DY->SetBinContent(7,333);
   muon1_pT_MC_DY->SetBinContent(8,10103);
   muon1_pT_MC_DY->SetBinContent(9,13849);
   muon1_pT_MC_DY->SetBinError(1,0.1682485);
   muon1_pT_MC_DY->SetBinError(2,0.1012234);
   muon1_pT_MC_DY->SetBinError(3,0.04645692);
   muon1_pT_MC_DY->SetBinError(4,0.02336427);
   muon1_pT_MC_DY->SetBinError(5,0.01061306);
   muon1_pT_MC_DY->SetBinError(6,0.01514467);
   muon1_pT_MC_DY->SetBinError(7,0.0104312);
   muon1_pT_MC_DY->SetBinError(8,0.001242451);
   muon1_pT_MC_DY->SetBinError(9,0.0008496728);
   muon1_pT_MC_DY->SetEntries(25447);

   muon1_pT_MC_DY->SetMinimum(0.);
   muon1_pT_MC_DY->SetMaximum(1.1);
   muon1_pT_MC_DY->SetLineColor(2);
   muon1_pT_MC_DY->SetLineWidth(2);
   muon1_pT_MC_DY->SetMarkerColor(2);
   muon1_pT_MC_DY->SetMarkerStyle(22);
   muon1_pT_MC_DY->SetMarkerSize(1.2);

   muon1_pT_MC_DY->GetXaxis()->SetTitle(" Leading muon p_{T} (GeV)");
   muon1_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   muon1_pT_MC_DY->GetXaxis()->SetLabelSize(0.045);
   muon1_pT_MC_DY->GetXaxis()->SetLabelOffset(0.01);
   muon1_pT_MC_DY->GetXaxis()->SetTitleSize(0.045);
   muon1_pT_MC_DY->GetXaxis()->SetTitleOffset(1.2);
   muon1_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   muon1_pT_MC_DY->GetYaxis()->SetTitle(" Trigger Efficiency");
   muon1_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   muon1_pT_MC_DY->GetYaxis()->SetLabelSize(0.045);
   muon1_pT_MC_DY->GetYaxis()->SetLabelOffset(0.01);
   muon1_pT_MC_DY->GetYaxis()->SetTitleSize(0.045);
   muon1_pT_MC_DY->GetYaxis()->SetTitleOffset(1.2);
   muon1_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   muon1_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   muon1_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muon1_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muon1_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   muon1_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   muon1_pT_MC_DY->Draw("E1");

   TProfile *muon1_pT_MC_ttbar = new TProfile("muon1_pT_MC_ttbar","#mu#mu final state - leading muon",9, xAxis);
   muon1_pT_MC_ttbar->SetBinEntries(1,330);
   muon1_pT_MC_ttbar->SetBinEntries(2,938);
   muon1_pT_MC_ttbar->SetBinEntries(3,1572);
   muon1_pT_MC_ttbar->SetBinEntries(4,4957);
   muon1_pT_MC_ttbar->SetBinEntries(5,15808);
   muon1_pT_MC_ttbar->SetBinEntries(6,9869);
   muon1_pT_MC_ttbar->SetBinEntries(7,6494);
   muon1_pT_MC_ttbar->SetBinEntries(8,11754);
   muon1_pT_MC_ttbar->SetBinEntries(9,2917);
   muon1_pT_MC_ttbar->SetBinContent(1,59);
   muon1_pT_MC_ttbar->SetBinContent(2,586);
   muon1_pT_MC_ttbar->SetBinContent(3,1411);
   muon1_pT_MC_ttbar->SetBinContent(4,4811);
   muon1_pT_MC_ttbar->SetBinContent(5,15506);
   muon1_pT_MC_ttbar->SetBinContent(6,9732);
   muon1_pT_MC_ttbar->SetBinContent(7,6387);
   muon1_pT_MC_ttbar->SetBinContent(8,11597);
   muon1_pT_MC_ttbar->SetBinContent(9,2880);
   muon1_pT_MC_ttbar->SetBinError(1,0.01841018);
   muon1_pT_MC_ttbar->SetBinError(2,0.01394319);
   muon1_pT_MC_ttbar->SetBinError(3,0.006966787);
   muon1_pT_MC_ttbar->SetBinError(4,0.002202527);
   muon1_pT_MC_ttbar->SetBinError(5,0.0009734048);
   muon1_pT_MC_ttbar->SetBinError(6,0.001083821);
   muon1_pT_MC_ttbar->SetBinError(7,0.001470326);
   muon1_pT_MC_ttbar->SetBinError(8,0.0009688384);
   muon1_pT_MC_ttbar->SetBinError(9,0.002064594);
   muon1_pT_MC_ttbar->SetEntries(54639);

   muon1_pT_MC_ttbar->SetLineColor(1);
   muon1_pT_MC_ttbar->SetLineWidth(2);
   muon1_pT_MC_ttbar->SetMarkerColor(1);
   muon1_pT_MC_ttbar->SetMarkerStyle(20);
   muon1_pT_MC_ttbar->SetMarkerSize(1);

   muon1_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muon1_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muon1_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muon1_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muon1_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muon1_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muon1_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muon1_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muon1_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muon1_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muon1_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muon1_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muon1_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muon1_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muon1_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muon1_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muon1_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muon1_pT_MC_ttbar->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon1_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muon1_pT_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muon1_pT_eff.pdf");
}
