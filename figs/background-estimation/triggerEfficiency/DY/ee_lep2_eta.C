void ee_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:03 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-3.125,0.865988,3.125,1.087292);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *electron2_eta_MC = new TProfile("electron2_eta_MC","",5, xAxis   electron2_eta_MC->SetBinEntries(1,179);
   electron2_eta_MC->SetBinEntries(2,415);
   electron2_eta_MC->SetBinEntries(3,1922);
   electron2_eta_MC->SetBinEntries(4,539);
   electron2_eta_MC->SetBinEntries(5,170);
   electron2_eta_MC->SetBinContent(1,176);
   electron2_eta_MC->SetBinContent(2,404);
   electron2_eta_MC->SetBinContent(3,1872);
   electron2_eta_MC->SetBinContent(4,531);
   electron2_eta_MC->SetBinContent(5,165);
   electron2_eta_MC->SetBinError(1,0.01383443);
   electron2_eta_MC->SetBinError(2,0.008937963);
   electron2_eta_MC->SetBinError(3,0.003532921);
   electron2_eta_MC->SetBinError(4,0.006204198);
   electron2_eta_MC->SetBinError(5,0.01669658);
   electron2_eta_MC->SetEntries(3225);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   electron2_eta_MC->SetLineColor(ci);
   electron2_eta_MC->GetXaxis()->SetTitle(" #eta");
   electron2_eta_MC->GetXaxis()->SetLabelFont(42);
   electron2_eta_MC->GetXaxis()->SetLabelSize(0.035);
   electron2_eta_MC->GetXaxis()->SetTitleSize(0.035);
   electron2_eta_MC->GetXaxis()->SetTitleOffset(1);
   electron2_eta_MC->GetXaxis()->SetTitleFont(42);
   electron2_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   electron2_eta_MC->GetYaxis()->SetLabelFont(42);
   electron2_eta_MC->GetYaxis()->SetLabelSize(0.035);
   electron2_eta_MC->GetYaxis()->SetTitleSize(0.035);
   electron2_eta_MC->GetYaxis()->SetTitleOffset(1);
   electron2_eta_MC->GetYaxis()->SetTitleFont(42);
   electron2_eta_MC->GetZaxis()->SetLabelFont(42);
   electron2_eta_MC->GetZaxis()->SetLabelSize(0.035);
   electron2_eta_MC->GetZaxis()->SetTitleSize(0.035);
   electron2_eta_MC->GetZaxis()->SetTitleOffset(1);
   electron2_eta_MC->GetZaxis()->SetTitleFont(42);
   electron2_eta_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
