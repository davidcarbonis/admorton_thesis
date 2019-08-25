void mumu_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:41 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-3.125,0.9513972,3.125,1.019548);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *muon2_eta_MC = new TProfile("muon2_eta_MC","",5, xAxis   muon2_eta_MC->SetBinEntries(1,2923);
   muon2_eta_MC->SetBinEntries(2,3669);
   muon2_eta_MC->SetBinEntries(3,9388);
   muon2_eta_MC->SetBinEntries(4,3708);
   muon2_eta_MC->SetBinEntries(5,2722);
   muon2_eta_MC->SetBinContent(1,2861);
   muon2_eta_MC->SetBinContent(2,3646);
   muon2_eta_MC->SetBinContent(3,9327);
   muon2_eta_MC->SetBinContent(4,3683);
   muon2_eta_MC->SetBinContent(5,2692);
   muon2_eta_MC->SetBinError(1,0.002557033);
   muon2_eta_MC->SetBinError(2,0.001356557);
   muon2_eta_MC->SetBinError(3,0.000797163);
   muon2_eta_MC->SetBinError(4,0.001387475);
   muon2_eta_MC->SetBinError(5,0.00203022);
   muon2_eta_MC->SetEntries(22410);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muon2_eta_MC->SetLineColor(ci);
   muon2_eta_MC->GetXaxis()->SetTitle(" #eta");
   muon2_eta_MC->GetXaxis()->SetLabelFont(42);
   muon2_eta_MC->GetXaxis()->SetLabelSize(0.035);
   muon2_eta_MC->GetXaxis()->SetTitleSize(0.035);
   muon2_eta_MC->GetXaxis()->SetTitleOffset(1);
   muon2_eta_MC->GetXaxis()->SetTitleFont(42);
   muon2_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_MC->GetYaxis()->SetLabelFont(42);
   muon2_eta_MC->GetYaxis()->SetLabelSize(0.035);
   muon2_eta_MC->GetYaxis()->SetTitleSize(0.035);
   muon2_eta_MC->GetYaxis()->SetTitleOffset(1);
   muon2_eta_MC->GetYaxis()->SetTitleFont(42);
   muon2_eta_MC->GetZaxis()->SetLabelFont(42);
   muon2_eta_MC->GetZaxis()->SetLabelSize(0.035);
   muon2_eta_MC->GetZaxis()->SetTitleSize(0.035);
   muon2_eta_MC->GetZaxis()->SetTitleOffset(1);
   muon2_eta_MC->GetZaxis()->SetTitleFont(42);
   muon2_eta_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
