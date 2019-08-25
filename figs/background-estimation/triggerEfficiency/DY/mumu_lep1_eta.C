void mumu_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:31 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-3.125,0.9392835,3.125,1.017588);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *muon1_eta_MC = new TProfile("muon1_eta_MC","",5, xAxis   muon1_eta_MC->SetBinEntries(1,3045);
   muon1_eta_MC->SetBinEntries(2,4430);
   muon1_eta_MC->SetBinEntries(3,10595);
   muon1_eta_MC->SetBinEntries(4,4421);
   muon1_eta_MC->SetBinEntries(5,2860);
   muon1_eta_MC->SetBinContent(1,2946);
   muon1_eta_MC->SetBinContent(2,4377);
   muon1_eta_MC->SetBinContent(3,10442);
   muon1_eta_MC->SetBinContent(4,4385);
   muon1_eta_MC->SetBinContent(5,2790);
   muon1_eta_MC->SetBinError(1,0.003000927);
   muon1_eta_MC->SetBinError(2,0.001584554);
   muon1_eta_MC->SetBinError(3,0.001061544);
   muon1_eta_MC->SetBinError(4,0.001350315);
   muon1_eta_MC->SetBinError(5,0.002750993);
   muon1_eta_MC->SetEntries(25351);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muon1_eta_MC->SetLineColor(ci);
   muon1_eta_MC->GetXaxis()->SetTitle(" #eta");
   muon1_eta_MC->GetXaxis()->SetLabelFont(42);
   muon1_eta_MC->GetXaxis()->SetLabelSize(0.035);
   muon1_eta_MC->GetXaxis()->SetTitleSize(0.035);
   muon1_eta_MC->GetXaxis()->SetTitleOffset(1);
   muon1_eta_MC->GetXaxis()->SetTitleFont(42);
   muon1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_MC->GetYaxis()->SetLabelFont(42);
   muon1_eta_MC->GetYaxis()->SetLabelSize(0.035);
   muon1_eta_MC->GetYaxis()->SetTitleSize(0.035);
   muon1_eta_MC->GetYaxis()->SetTitleOffset(1);
   muon1_eta_MC->GetYaxis()->SetTitleFont(42);
   muon1_eta_MC->GetZaxis()->SetLabelFont(42);
   muon1_eta_MC->GetZaxis()->SetLabelSize(0.035);
   muon1_eta_MC->GetZaxis()->SetTitleSize(0.035);
   muon1_eta_MC->GetZaxis()->SetTitleOffset(1);
   muon1_eta_MC->GetZaxis()->SetTitleFont(42);
   muon1_eta_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
