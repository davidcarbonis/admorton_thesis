void ee_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:53 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,0.4772701,337.5,1.150692);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *electron2_pT_MC = new TProfile("electron2_pT_MC","",9, xAxis   electron2_pT_MC->SetBinEntries(1,105);
   electron2_pT_MC->SetBinEntries(2,132);
   electron2_pT_MC->SetBinEntries(3,170);
   electron2_pT_MC->SetBinEntries(4,338);
   electron2_pT_MC->SetBinEntries(5,861);
   electron2_pT_MC->SetBinEntries(6,562);
   electron2_pT_MC->SetBinEntries(7,340);
   electron2_pT_MC->SetBinEntries(8,714);
   electron2_pT_MC->SetBinEntries(9,108);
   electron2_pT_MC->SetBinContent(1,97);
   electron2_pT_MC->SetBinContent(2,126);
   electron2_pT_MC->SetBinContent(3,167);
   electron2_pT_MC->SetBinContent(4,332);
   electron2_pT_MC->SetBinContent(5,860);
   electron2_pT_MC->SetBinContent(6,560);
   electron2_pT_MC->SetBinContent(7,340);
   electron2_pT_MC->SetBinContent(8,695);
   electron2_pT_MC->SetBinContent(9,68);
   electron2_pT_MC->SetBinError(1,0.03043539);
   electron2_pT_MC->SetBinError(2,0.02249644);
   electron2_pT_MC->SetBinError(3,0.01455481);
   electron2_pT_MC->SetBinError(4,0.008976564);
   electron2_pT_MC->SetBinError(5,0.002312245);
   electron2_pT_MC->SetBinError(6,0.004039786);
   electron2_pT_MC->SetBinError(7,0.004722455);
   electron2_pT_MC->SetBinError(8,0.006382764);
   electron2_pT_MC->SetBinError(9,0.04461767);
   electron2_pT_MC->SetEntries(3330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   electron2_pT_MC->SetLineColor(ci);
   electron2_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron2_pT_MC->GetXaxis()->SetLabelFont(42);
   electron2_pT_MC->GetXaxis()->SetLabelSize(0.035);
   electron2_pT_MC->GetXaxis()->SetTitleSize(0.035);
   electron2_pT_MC->GetXaxis()->SetTitleOffset(1);
   electron2_pT_MC->GetXaxis()->SetTitleFont(42);
   electron2_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   electron2_pT_MC->GetYaxis()->SetLabelFont(42);
   electron2_pT_MC->GetYaxis()->SetLabelSize(0.035);
   electron2_pT_MC->GetYaxis()->SetTitleSize(0.035);
   electron2_pT_MC->GetYaxis()->SetTitleOffset(1);
   electron2_pT_MC->GetYaxis()->SetTitleFont(42);
   electron2_pT_MC->GetZaxis()->SetLabelFont(42);
   electron2_pT_MC->GetZaxis()->SetLabelSize(0.035);
   electron2_pT_MC->GetZaxis()->SetTitleSize(0.035);
   electron2_pT_MC->GetZaxis()->SetTitleOffset(1);
   electron2_pT_MC->GetZaxis()->SetTitleFont(42);
   electron2_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
