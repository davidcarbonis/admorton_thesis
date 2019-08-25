void emu_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 21:00:21 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-3.125,0.3640936,3.125,1.616807);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *muonElectron1_eta_MC = new TProfile("muonElectron1_eta_MC","",5, xAxis   muonElectron1_eta_MC->SetBinEntries(1,5);
   muonElectron1_eta_MC->SetBinEntries(2,5);
   muonElectron1_eta_MC->SetBinEntries(3,7);
   muonElectron1_eta_MC->SetBinEntries(4,7);
   muonElectron1_eta_MC->SetBinEntries(5,10);
   muonElectron1_eta_MC->SetBinContent(1,5);
   muonElectron1_eta_MC->SetBinContent(2,5);
   muonElectron1_eta_MC->SetBinContent(3,6);
   muonElectron1_eta_MC->SetBinContent(4,7);
   muonElectron1_eta_MC->SetBinContent(5,10);
   muonElectron1_eta_MC->SetBinError(1,0.2752203);
   muonElectron1_eta_MC->SetBinError(2,0.2752203);
   muonElectron1_eta_MC->SetBinError(3,0.2280044);
   muonElectron1_eta_MC->SetBinError(4,0.2054026);
   muonElectron1_eta_MC->SetBinError(5,0.1486601);
   muonElectron1_eta_MC->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muonElectron1_eta_MC->SetLineColor(ci);
   muonElectron1_eta_MC->GetXaxis()->SetTitle(" #eta");
   muonElectron1_eta_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_eta_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetZaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
