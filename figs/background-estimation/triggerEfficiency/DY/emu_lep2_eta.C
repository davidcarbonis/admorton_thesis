void emu_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 21:00:30 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-3.125,0.1046733,3.125,1.898581);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetLeftMargin(0.15);
   Canvas_1_n2->SetRightMargin(0.05);
   Canvas_1_n2->SetTopMargin(0.08);
   Canvas_1_n2->SetBottomMargin(0.15);
   Canvas_1_n2->SetGridy();
   Canvas_1_n2->SetTickx(1);
   Canvas_1_n2->SetTicky(1);
   Canvas_1_n2->SetFrameBorderMode(0);
   Double_t xAxis[6] = {-2.4, -1.5, -0.8, 0.8, 1.5, 2.4}; 
   
   TProfile *muonElectron2_eta_MC_ttbar = new TProfile("muonElectron2_eta_MC_ttbar","e#mu final state - muon",5, xAxis);
   muonElectron2_eta_MC_ttbar->SetBinEntries(1,158);
   muonElectron2_eta_MC_ttbar->SetBinEntries(2,200);
   muonElectron2_eta_MC_ttbar->SetBinEntries(3,500);
   muonElectron2_eta_MC_ttbar->SetBinEntries(4,193);
   muonElectron2_eta_MC_ttbar->SetBinEntries(5,176);
   muonElectron2_eta_MC_ttbar->SetBinContent(1,144);
   muonElectron2_eta_MC_ttbar->SetBinContent(2,187);
   muonElectron2_eta_MC_ttbar->SetBinContent(3,483);
   muonElectron2_eta_MC_ttbar->SetBinContent(4,177);
   muonElectron2_eta_MC_ttbar->SetBinContent(5,165);
   muonElectron2_eta_MC_ttbar->SetBinError(1,0.02459496);
   muonElectron2_eta_MC_ttbar->SetBinError(2,0.01920679);
   muonElectron2_eta_MC_ttbar->SetBinError(3,0.008687613);
   muonElectron2_eta_MC_ttbar->SetBinError(4,0.02127899);
   muonElectron2_eta_MC_ttbar->SetBinError(5,0.02055208);
   muonElectron2_eta_MC_ttbar->SetEntries(1227);

   muonElectron2_eta_MC_ttbar->SetMinimum(0.7);
   muonElectron2_eta_MC_ttbar->SetMaximum(1.2);
   muonElectron2_eta_MC_ttbar->SetLineColor(1);
   muonElectron2_eta_MC_ttbar->SetLineWidth(2);
   muonElectron2_eta_MC_ttbar->SetMarkerColor(1);
   muonElectron2_eta_MC_ttbar->SetMarkerStyle(20);
   muonElectron2_eta_MC_ttbar->SetMarkerSize(1);
   
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetTitle(" #eta");
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_ttbar->Draw("E1");

   TProfile *muonElectron2_eta_MC_DY = new TProfile("muonElectron2_eta_MC_DY","",5, xAxis);
   muonElectron2_eta_MC_DY->SetBinEntries(1,3);
   muonElectron2_eta_MC_DY->SetBinEntries(2,2);
   muonElectron2_eta_MC_DY->SetBinEntries(3,6);
   muonElectron2_eta_MC_DY->SetBinEntries(4,10);
   muonElectron2_eta_MC_DY->SetBinEntries(5,3);
   muonElectron2_eta_MC_DY->SetBinContent(1,3);
   muonElectron2_eta_MC_DY->SetBinContent(2,2);
   muonElectron2_eta_MC_DY->SetBinContent(3,6);
   muonElectron2_eta_MC_DY->SetBinContent(4,10);
   muonElectron2_eta_MC_DY->SetBinContent(5,3);
   muonElectron2_eta_MC_DY->SetBinError(1,0.4151965);
   muonElectron2_eta_MC_DY->SetBinError(2,0.5527864);
   muonElectron2_eta_MC_DY->SetBinError(3,0.2352755);
   muonElectron2_eta_MC_DY->SetBinError(4,0.1486601);
   muonElectron2_eta_MC_DY->SetBinError(5,0.4151965);
   muonElectron2_eta_MC_DY->SetEntries(24);

   muonElectron2_eta_MC_DY->SetLineColor(2);
   muonElectron2_eta_MC_DY->SetLineWidth(2);
   muonElectron2_eta_MC_DY->SetMarkerColor(2);
   muonElectron2_eta_MC_DY->SetMarkerStyle(22);
   muonElectron2_eta_MC_DY->SetMarkerSize(1.2);

   muonElectron2_eta_MC_DY->GetXaxis()->SetTitle(" #eta");
   muonElectron2_eta_MC_DY->GetXaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_DY->GetXaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_DY->GetXaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_eta_MC_DY->GetYaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_DY->GetYaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_DY->GetYaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_DY->GetZaxis()->SetLabelFont(42);
   muonElectron2_eta_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC_DY->GetZaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC_DY->GetZaxis()->SetTitleFont(42);
   muonElectron2_eta_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron2_eta_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron2_eta_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron2_eta_eff.pdf");
}
