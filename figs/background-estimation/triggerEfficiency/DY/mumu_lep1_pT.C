void mumu_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:14 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,0.2563142,337.5,1.19387);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *muon1_pT_MC = new TProfile("muon1_pT_MC","",9, xAxis   muon1_pT_MC->SetBinEntries(1,11);
   muon1_pT_MC->SetBinEntries(2,25);
   muon1_pT_MC->SetBinEntries(3,55);
   muon1_pT_MC->SetBinEntries(4,113);
   muon1_pT_MC->SetBinEntries(5,337);
   muon1_pT_MC->SetBinEntries(6,234);
   muon1_pT_MC->SetBinEntries(7,343);
   muon1_pT_MC->SetBinEntries(8,10307);
   muon1_pT_MC->SetBinEntries(9,14022);
   muon1_pT_MC->SetBinContent(1,9);
   muon1_pT_MC->SetBinContent(2,12);
   muon1_pT_MC->SetBinContent(3,51);
   muon1_pT_MC->SetBinContent(4,109);
   muon1_pT_MC->SetBinContent(5,327);
   muon1_pT_MC->SetBinContent(6,224);
   muon1_pT_MC->SetBinContent(7,333);
   muon1_pT_MC->SetBinContent(8,10103);
   muon1_pT_MC->SetBinContent(9,13849);
   muon1_pT_MC->SetBinError(1,0.1682485);
   muon1_pT_MC->SetBinError(2,0.1012234);
   muon1_pT_MC->SetBinError(3,0.04645692);
   muon1_pT_MC->SetBinError(4,0.02336427);
   muon1_pT_MC->SetBinError(5,0.01061306);
   muon1_pT_MC->SetBinError(6,0.01514467);
   muon1_pT_MC->SetBinError(7,0.0104312);
   muon1_pT_MC->SetBinError(8,0.001242451);
   muon1_pT_MC->SetBinError(9,0.0008496728);
   muon1_pT_MC->SetEntries(25447);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muon1_pT_MC->SetLineColor(ci);
   muon1_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muon1_pT_MC->GetXaxis()->SetLabelFont(42);
   muon1_pT_MC->GetXaxis()->SetLabelSize(0.035);
   muon1_pT_MC->GetXaxis()->SetTitleSize(0.035);
   muon1_pT_MC->GetXaxis()->SetTitleOffset(1);
   muon1_pT_MC->GetXaxis()->SetTitleFont(42);
   muon1_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   muon1_pT_MC->GetYaxis()->SetLabelFont(42);
   muon1_pT_MC->GetYaxis()->SetLabelSize(0.035);
   muon1_pT_MC->GetYaxis()->SetTitleSize(0.035);
   muon1_pT_MC->GetYaxis()->SetTitleOffset(1);
   muon1_pT_MC->GetYaxis()->SetTitleFont(42);
   muon1_pT_MC->GetZaxis()->SetLabelFont(42);
   muon1_pT_MC->GetZaxis()->SetLabelSize(0.035);
   muon1_pT_MC->GetZaxis()->SetTitleSize(0.035);
   muon1_pT_MC->GetZaxis()->SetTitleOffset(1);
   muon1_pT_MC->GetZaxis()->SetTitleFont(42);
   muon1_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
