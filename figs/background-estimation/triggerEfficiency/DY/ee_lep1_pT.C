void ee_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:34 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,-0.1384346,337.5,1.245911);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *electron1_pT_MC = new TProfile("electron1_pT_MC","",9, xAxis   electron1_pT_MC->SetBinEntries(2,2);
   electron1_pT_MC->SetBinEntries(3,7);
   electron1_pT_MC->SetBinEntries(4,27);
   electron1_pT_MC->SetBinEntries(5,127);
   electron1_pT_MC->SetBinEntries(6,179);
   electron1_pT_MC->SetBinEntries(7,250);
   electron1_pT_MC->SetBinEntries(8,1535);
   electron1_pT_MC->SetBinEntries(9,1203);
   electron1_pT_MC->SetBinContent(3,4);
   electron1_pT_MC->SetBinContent(4,23);
   electron1_pT_MC->SetBinContent(5,121);
   electron1_pT_MC->SetBinContent(6,175);
   electron1_pT_MC->SetBinContent(7,248);
   electron1_pT_MC->SetBinContent(8,1532);
   electron1_pT_MC->SetBinContent(9,1142);
   electron1_pT_MC->SetBinError(3,0.221335);
   electron1_pT_MC->SetBinError(4,0.08828624);
   electron1_pT_MC->SetBinError(5,0.02334927);
   electron1_pT_MC->SetBinError(6,0.01491585);
   electron1_pT_MC->SetBinError(7,0.009038229);
   electron1_pT_MC->SetBinError(8,0.001635523);
   electron1_pT_MC->SetBinError(9,0.006064209);
   electron1_pT_MC->SetEntries(3330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   electron1_pT_MC->SetLineColor(ci);
   electron1_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron1_pT_MC->GetXaxis()->SetLabelFont(42);
   electron1_pT_MC->GetXaxis()->SetLabelSize(0.035);
   electron1_pT_MC->GetXaxis()->SetTitleSize(0.035);
   electron1_pT_MC->GetXaxis()->SetTitleOffset(1);
   electron1_pT_MC->GetXaxis()->SetTitleFont(42);
   electron1_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   electron1_pT_MC->GetYaxis()->SetLabelFont(42);
   electron1_pT_MC->GetYaxis()->SetLabelSize(0.035);
   electron1_pT_MC->GetYaxis()->SetTitleSize(0.035);
   electron1_pT_MC->GetYaxis()->SetTitleOffset(1);
   electron1_pT_MC->GetYaxis()->SetTitleFont(42);
   electron1_pT_MC->GetZaxis()->SetLabelFont(42);
   electron1_pT_MC->GetZaxis()->SetLabelSize(0.035);
   electron1_pT_MC->GetZaxis()->SetTitleSize(0.035);
   electron1_pT_MC->GetZaxis()->SetTitleOffset(1);
   electron1_pT_MC->GetZaxis()->SetTitleFont(42);
   electron1_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
