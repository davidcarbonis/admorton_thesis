void emu_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 21:00:05 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,0.1046733,337.5,1.898581);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *muonElectron2_pT_MC = new TProfile("muonElectron2_pT_MC","",9, xAxis   muonElectron2_pT_MC->SetBinEntries(1,21);
   muonElectron2_pT_MC->SetBinEntries(2,3);
   muonElectron2_pT_MC->SetBinEntries(3,1);
   muonElectron2_pT_MC->SetBinEntries(4,2);
   muonElectron2_pT_MC->SetBinEntries(5,4);
   muonElectron2_pT_MC->SetBinEntries(6,5);
   muonElectron2_pT_MC->SetBinEntries(7,1);
   muonElectron2_pT_MC->SetBinEntries(8,6);
   muonElectron2_pT_MC->SetBinEntries(9,7);
   muonElectron2_pT_MC->SetBinContent(1,18);
   muonElectron2_pT_MC->SetBinContent(2,3);
   muonElectron2_pT_MC->SetBinContent(3,1);
   muonElectron2_pT_MC->SetBinContent(4,2);
   muonElectron2_pT_MC->SetBinContent(5,4);
   muonElectron2_pT_MC->SetBinContent(6,5);
   muonElectron2_pT_MC->SetBinContent(7,1);
   muonElectron2_pT_MC->SetBinContent(8,6);
   muonElectron2_pT_MC->SetBinContent(9,7);
   muonElectron2_pT_MC->SetBinError(1,0.1042301);
   muonElectron2_pT_MC->SetBinError(2,0.4151965);
   muonElectron2_pT_MC->SetBinError(3,0.8);
   muonElectron2_pT_MC->SetBinError(4,0.5527864);
   muonElectron2_pT_MC->SetBinError(5,0.3312597);
   muonElectron2_pT_MC->SetBinError(6,0.2752203);
   muonElectron2_pT_MC->SetBinError(7,0.8);
   muonElectron2_pT_MC->SetBinError(8,0.2352755);
   muonElectron2_pT_MC->SetBinError(9,0.2054026);
   muonElectron2_pT_MC->SetEntries(50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muonElectron2_pT_MC->SetLineColor(ci);
   muonElectron2_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron2_pT_MC->GetXaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC->GetXaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC->GetYaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->GetZaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC->GetZaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
