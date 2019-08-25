void mumu_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:31 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-3.125,0.9392835,3.125,1.017588);
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

   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *muon1_eta_MC_ttbar = new TProfile("muon1_eta_MC_ttbar","#mu#mu final state - leading muon",5, xAxis);
   muon1_eta_MC_ttbar->SetBinEntries(1,4733);
   muon1_eta_MC_ttbar->SetBinEntries(2,8088);
   muon1_eta_MC_ttbar->SetBinEntries(3,25663);
   muon1_eta_MC_ttbar->SetBinEntries(4,8090);
   muon1_eta_MC_ttbar->SetBinEntries(5,4841);
   muon1_eta_MC_ttbar->SetBinContent(1,4594);
   muon1_eta_MC_ttbar->SetBinContent(2,7974);
   muon1_eta_MC_ttbar->SetBinContent(3,25277);
   muon1_eta_MC_ttbar->SetBinContent(4,7990);
   muon1_eta_MC_ttbar->SetBinContent(5,4707);
   muon1_eta_MC_ttbar->SetBinError(1,0.002255613);
   muon1_eta_MC_ttbar->SetBinError(2,0.001216416);
   muon1_eta_MC_ttbar->SetBinError(3,0.0006746801);
   muon1_eta_MC_ttbar->SetBinError(4,0.001147481);
   muon1_eta_MC_ttbar->SetBinError(5,0.002170752);
   muon1_eta_MC_ttbar->SetEntries(51415);

   muon1_eta_MC_ttbar->SetMinimum(0.8);
   muon1_eta_MC_ttbar->SetMaximum(1.1);
   muon1_eta_MC_ttbar->SetLineColor(1);
   muon1_eta_MC_ttbar->SetLineWidth(2);
   muon1_eta_MC_ttbar->SetMarkerColor(1);
   muon1_eta_MC_ttbar->SetMarkerStyle(20);
   muon1_eta_MC_ttbar->SetMarkerSize(1);
   
   muon1_eta_MC_ttbar->GetXaxis()->SetTitle(" #eta");
   muon1_eta_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muon1_eta_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muon1_eta_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muon1_eta_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muon1_eta_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muon1_eta_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muon1_eta_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muon1_eta_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muon1_eta_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muon1_eta_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muon1_eta_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muon1_eta_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muon1_eta_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muon1_eta_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muon1_eta_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muon1_eta_MC_ttbar->Draw("E1");

   TProfile *muon1_eta_MC_DY = new TProfile("muon1_eta_MC_DY","",5, xAxis);
   muon1_eta_MC_DY->SetBinEntries(1,3045);
   muon1_eta_MC_DY->SetBinEntries(2,4430);
   muon1_eta_MC_DY->SetBinEntries(3,10595);
   muon1_eta_MC_DY->SetBinEntries(4,4421);
   muon1_eta_MC_DY->SetBinEntries(5,2860);
   muon1_eta_MC_DY->SetBinContent(1,2946);
   muon1_eta_MC_DY->SetBinContent(2,4377);
   muon1_eta_MC_DY->SetBinContent(3,10442);
   muon1_eta_MC_DY->SetBinContent(4,4385);
   muon1_eta_MC_DY->SetBinContent(5,2790);
   muon1_eta_MC_DY->SetBinError(1,0.003000927);
   muon1_eta_MC_DY->SetBinError(2,0.001584554);
   muon1_eta_MC_DY->SetBinError(3,0.001061544);
   muon1_eta_MC_DY->SetBinError(4,0.001350315);
   muon1_eta_MC_DY->SetBinError(5,0.002750993);
   muon1_eta_MC_DY->SetEntries(25351);

   muon1_eta_MC_DY->SetLineColor(2);
   muon1_eta_MC_DY->SetLineWidth(2);
   muon1_eta_MC_DY->SetMarkerColor(2);
   muon1_eta_MC_DY->SetMarkerStyle(22);
   muon1_eta_MC_DY->SetMarkerSize(1.2);

   muon1_eta_MC_DY->GetXaxis()->SetTitle(" #eta");
   muon1_eta_MC_DY->GetXaxis()->SetLabelFont(42);
   muon1_eta_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muon1_eta_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muon1_eta_MC_DY->GetXaxis()->SetTitleOffset(1);
   muon1_eta_MC_DY->GetXaxis()->SetTitleFont(42);
   muon1_eta_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_MC_DY->GetYaxis()->SetLabelFont(42);
   muon1_eta_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muon1_eta_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muon1_eta_MC_DY->GetYaxis()->SetTitleOffset(1);
   muon1_eta_MC_DY->GetYaxis()->SetTitleFont(42);
   muon1_eta_MC_DY->GetZaxis()->SetLabelFont(42);
   muon1_eta_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muon1_eta_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muon1_eta_MC_DY->GetZaxis()->SetTitleOffset(1);
   muon1_eta_MC_DY->GetZaxis()->SetTitleFont(42);
   muon1_eta_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon1_eta_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muon1_eta_MC_DY", "DY Efficiency", "PEL");

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muon1_eta_eff.pdf");
}
