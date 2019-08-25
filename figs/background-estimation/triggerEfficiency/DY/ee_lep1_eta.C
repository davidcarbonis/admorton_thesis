void ee_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:42 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-3.125,0.8521957,3.125,1.095077);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *electron1_eta_MC = new TProfile("electron1_eta_MC","",5, xAxis   electron1_eta_MC->SetBinEntries(1,132);
   electron1_eta_MC->SetBinEntries(2,443);
   electron1_eta_MC->SetBinEntries(3,2107);
   electron1_eta_MC->SetBinEntries(4,474);
   electron1_eta_MC->SetBinEntries(5,138);
   electron1_eta_MC->SetBinContent(1,128);
   electron1_eta_MC->SetBinContent(2,430);
   electron1_eta_MC->SetBinContent(3,2059);
   electron1_eta_MC->SetBinContent(4,466);
   electron1_eta_MC->SetBinContent(5,135);
   electron1_eta_MC->SetBinError(1,0.02008927);
   electron1_eta_MC->SetBinError(2,0.008884818);
   electron1_eta_MC->SetBinError(3,0.003172727);
   electron1_eta_MC->SetBinError(4,0.007044642);
   electron1_eta_MC->SetBinError(5,0.01786154);
   electron1_eta_MC->SetEntries(3294);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   electron1_eta_MC->SetLineColor(ci);
   electron1_eta_MC->GetXaxis()->SetTitle(" #eta");
   electron1_eta_MC->GetXaxis()->SetLabelFont(42);
   electron1_eta_MC->GetXaxis()->SetLabelSize(0.035);
   electron1_eta_MC->GetXaxis()->SetTitleSize(0.035);
   electron1_eta_MC->GetXaxis()->SetTitleOffset(1);
   electron1_eta_MC->GetXaxis()->SetTitleFont(42);
   electron1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   electron1_eta_MC->GetYaxis()->SetLabelFont(42);
   electron1_eta_MC->GetYaxis()->SetLabelSize(0.035);
   electron1_eta_MC->GetYaxis()->SetTitleSize(0.035);
   electron1_eta_MC->GetYaxis()->SetTitleOffset(1);
   electron1_eta_MC->GetYaxis()->SetTitleFont(42);
   electron1_eta_MC->GetZaxis()->SetLabelFont(42);
   electron1_eta_MC->GetZaxis()->SetLabelSize(0.035);
   electron1_eta_MC->GetZaxis()->SetTitleSize(0.035);
   electron1_eta_MC->GetZaxis()->SetTitleOffset(1);
   electron1_eta_MC->GetZaxis()->SetTitleFont(42);
   electron1_eta_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
