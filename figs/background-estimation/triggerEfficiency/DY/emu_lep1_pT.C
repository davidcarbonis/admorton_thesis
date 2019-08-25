void emu_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:55 2019) by ROOT version 6.18/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,536,324);
   gStyle->SetOptStat(0);
   Canvas_1->Range(-37.5,-0.06469541,337.5,1.925717);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *muonElectron1_pT_MC = new TProfile("muonElectron1_pT_MC","",9, xAxis   muonElectron1_pT_MC->SetBinEntries(1,8);
   muonElectron1_pT_MC->SetBinEntries(2,2);
   muonElectron1_pT_MC->SetBinEntries(3,2);
   muonElectron1_pT_MC->SetBinEntries(4,4);
   muonElectron1_pT_MC->SetBinEntries(5,8);
   muonElectron1_pT_MC->SetBinEntries(6,6);
   muonElectron1_pT_MC->SetBinEntries(7,2);
   muonElectron1_pT_MC->SetBinEntries(8,12);
   muonElectron1_pT_MC->SetBinEntries(9,6);
   muonElectron1_pT_MC->SetBinContent(1,8);
   muonElectron1_pT_MC->SetBinContent(2,1);
   muonElectron1_pT_MC->SetBinContent(3,2);
   muonElectron1_pT_MC->SetBinContent(4,3);
   muonElectron1_pT_MC->SetBinContent(5,8);
   muonElectron1_pT_MC->SetBinContent(6,6);
   muonElectron1_pT_MC->SetBinContent(7,2);
   muonElectron1_pT_MC->SetBinContent(8,12);
   muonElectron1_pT_MC->SetBinContent(9,5);
   muonElectron1_pT_MC->SetBinError(1,0.1822346);
   muonElectron1_pT_MC->SetBinError(2,0.3944272);
   muonElectron1_pT_MC->SetBinError(3,0.5527864);
   muonElectron1_pT_MC->SetBinError(4,0.3324536);
   muonElectron1_pT_MC->SetBinError(5,0.1822346);
   muonElectron1_pT_MC->SetBinError(6,0.2352755);
   muonElectron1_pT_MC->SetBinError(7,0.5527864);
   muonElectron1_pT_MC->SetBinError(8,0.1255147);
   muonElectron1_pT_MC->SetBinError(9,0.2557809);
   muonElectron1_pT_MC->SetEntries(50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   muonElectron1_pT_MC->SetLineColor(ci);
   muonElectron1_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron1_pT_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
