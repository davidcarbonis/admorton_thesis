void mumu_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:23 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,0.873714,337.5,1.070528);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *muon2_pT_MC = new TProfile("muon2_pT_MC","",9, xAxis   muon2_pT_MC->SetBinEntries(1,1677);
   muon2_pT_MC->SetBinEntries(2,1360);
   muon2_pT_MC->SetBinEntries(3,1294);
   muon2_pT_MC->SetBinEntries(4,2527);
   muon2_pT_MC->SetBinEntries(5,5228);
   muon2_pT_MC->SetBinEntries(6,3536);
   muon2_pT_MC->SetBinEntries(7,3106);
   muon2_pT_MC->SetBinEntries(8,6289);
   muon2_pT_MC->SetBinEntries(9,430);
   muon2_pT_MC->SetBinContent(1,1548);
   muon2_pT_MC->SetBinContent(2,1260);
   muon2_pT_MC->SetBinContent(3,1221);
   muon2_pT_MC->SetBinContent(4,2502);
   muon2_pT_MC->SetBinContent(5,5199);
   muon2_pT_MC->SetBinContent(6,3517);
   muon2_pT_MC->SetBinContent(7,3090);
   muon2_pT_MC->SetBinContent(8,6252);
   muon2_pT_MC->SetBinContent(9,428);
   muon2_pT_MC->SetBinError(1,0.005988433);
   muon2_pT_MC->SetBinError(2,0.006591862);
   muon2_pT_MC->SetBinError(3,0.006080497);
   muon2_pT_MC->SetBinError(4,0.002032019);
   muon2_pT_MC->SetBinError(5,0.001045892);
   muon2_pT_MC->SetBinError(6,0.001306213);
   muon2_pT_MC->SetBinError(7,0.00139202);
   muon2_pT_MC->SetBinError(8,0.0009614423);
   muon2_pT_MC->SetBinError(9,0.005273723);
   muon2_pT_MC->SetEntries(25447);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muon2_pT_MC->SetLineColor(ci);
   muon2_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muon2_pT_MC->GetXaxis()->SetLabelFont(42);
   muon2_pT_MC->GetXaxis()->SetLabelSize(0.035);
   muon2_pT_MC->GetXaxis()->SetTitleSize(0.035);
   muon2_pT_MC->GetXaxis()->SetTitleOffset(1);
   muon2_pT_MC->GetXaxis()->SetTitleFont(42);
   muon2_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   muon2_pT_MC->GetYaxis()->SetLabelFont(42);
   muon2_pT_MC->GetYaxis()->SetLabelSize(0.035);
   muon2_pT_MC->GetYaxis()->SetTitleSize(0.035);
   muon2_pT_MC->GetYaxis()->SetTitleOffset(1);
   muon2_pT_MC->GetYaxis()->SetTitleFont(42);
   muon2_pT_MC->GetZaxis()->SetLabelFont(42);
   muon2_pT_MC->GetZaxis()->SetLabelSize(0.035);
   muon2_pT_MC->GetZaxis()->SetTitleSize(0.035);
   muon2_pT_MC->GetZaxis()->SetTitleOffset(1);
   muon2_pT_MC->GetZaxis()->SetTitleFont(42);
   muon2_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
