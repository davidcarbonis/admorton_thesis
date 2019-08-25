void mumu_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:31:11 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);

//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-3.125,0.875,3.125,1.125);
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
   
   TProfile *muon2_eta_MC = new TProfile("muon2_eta_MC","#mu#mu final state - subleading muon",5, xAxis);
   muon2_eta_MC->SetBinEntries(1,4189);
   muon2_eta_MC->SetBinEntries(2,6054);
   muon2_eta_MC->SetBinEntries(3,18192);
   muon2_eta_MC->SetBinEntries(4,6105);
   muon2_eta_MC->SetBinEntries(5,4136);
   muon2_eta_MC->SetBinContent(1,4134);
   muon2_eta_MC->SetBinContent(2,6008);
   muon2_eta_MC->SetBinContent(3,18061);
   muon2_eta_MC->SetBinContent(4,6058);
   muon2_eta_MC->SetBinContent(5,4083);
   muon2_eta_MC->SetBinError(1,0.001701601);
   muon2_eta_MC->SetBinError(2,0.001093898);
   muon2_eta_MC->SetBinError(3,0.0005781885);
   muon2_eta_MC->SetBinError(4,0.001094698);
   muon2_eta_MC->SetBinError(5,0.001696361);
   muon2_eta_MC->SetEntries(38676);

   muon2_eta_MC->SetMinimum(0.8);
   muon2_eta_MC->SetMaximum(1.1);
   muon2_eta_MC->SetLineColor(1);
   muon2_eta_MC->SetLineWidth(2);
   muon2_eta_MC->SetMarkerColor(1);
   muon2_eta_MC->SetMarkerStyle(20);
   muon2_eta_MC->SetMarkerSize(1);
   
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
   muon2_eta_MC->Draw("E1");
   
   TProfile *muon2_eta_data = new TProfile("muon2_eta_data","",5, xAxis);
   muon2_eta_data->SetBinEntries(1,5679);
   muon2_eta_data->SetBinEntries(2,7845);
   muon2_eta_data->SetBinEntries(3,21332);
   muon2_eta_data->SetBinEntries(4,7751);
   muon2_eta_data->SetBinEntries(5,5629);
   muon2_eta_data->SetBinContent(1,5532);
   muon2_eta_data->SetBinContent(2,7745);
   muon2_eta_data->SetBinContent(3,21114);
   muon2_eta_data->SetBinContent(4,7632);
   muon2_eta_data->SetBinContent(5,5480);
   muon2_eta_data->SetBinError(1,0.001932334);
   muon2_eta_data->SetBinError(2,0.001183064);
   muon2_eta_data->SetBinError(3,0.0006223141);
   muon2_eta_data->SetBinError(4,0.001293315);
   muon2_eta_data->SetBinError(5,0.001960971);
   muon2_eta_data->SetEntries(48236);

   muon2_eta_data->SetLineColor(2);
   muon2_eta_data->SetLineWidth(2);
   muon2_eta_data->SetMarkerColor(2);
   muon2_eta_data->SetMarkerStyle(22);
   muon2_eta_data->SetMarkerSize(1.2);

   muon2_eta_data->GetXaxis()->SetTitle(" #eta");
   muon2_eta_data->GetXaxis()->SetLabelFont(42);
   muon2_eta_data->GetXaxis()->SetLabelSize(0.035);
   muon2_eta_data->GetXaxis()->SetTitleSize(0.035);
   muon2_eta_data->GetXaxis()->SetTitleOffset(1);
   muon2_eta_data->GetXaxis()->SetTitleFont(42);
   muon2_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_data->GetYaxis()->SetLabelFont(42);
   muon2_eta_data->GetYaxis()->SetLabelSize(0.035);
   muon2_eta_data->GetYaxis()->SetTitleSize(0.035);
   muon2_eta_data->GetYaxis()->SetTitleOffset(1);
   muon2_eta_data->GetYaxis()->SetTitleFont(42);
   muon2_eta_data->GetZaxis()->SetLabelFont(42);
   muon2_eta_data->GetZaxis()->SetLabelSize(0.035);
   muon2_eta_data->GetZaxis()->SetTitleSize(0.035);
   muon2_eta_data->GetZaxis()->SetTitleOffset(1);
   muon2_eta_data->GetZaxis()->SetTitleFont(42);
   muon2_eta_data->Draw("same E1");
   
   TH1D *p_muon2_eta_SF__4 = new TH1D("p_muon2_eta_SF__4","",5, xAxis);
   p_muon2_eta_SF__4->SetBinContent(1,0.9870751);
   p_muon2_eta_SF__4->SetBinContent(2,0.9948119);
   p_muon2_eta_SF__4->SetBinContent(3,0.9969597);
   p_muon2_eta_SF__4->SetBinContent(4,0.9922864);
   p_muon2_eta_SF__4->SetBinContent(5,0.986167);
   p_muon2_eta_SF__4->SetBinError(1,0.02010359);
   p_muon2_eta_SF__4->SetBinError(2,0.01701826);
   p_muon2_eta_SF__4->SetBinError(3,0.01006125);
   p_muon2_eta_SF__4->SetBinError(4,0.01697987);
   p_muon2_eta_SF__4->SetBinError(5,0.02019671);
   p_muon2_eta_SF__4->SetEntries(16479.6);

   p_muon2_eta_SF__4->SetLineColor(8);
   p_muon2_eta_SF__4->SetLineWidth(2);
   p_muon2_eta_SF__4->SetMarkerColor(8);
   p_muon2_eta_SF__4->SetMarkerStyle(33);
   p_muon2_eta_SF__4->SetMarkerSize(1.5);

   p_muon2_eta_SF__4->GetXaxis()->SetTitle(" #eta");
   p_muon2_eta_SF__4->GetXaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetXaxis()->SetLabelSize(0.035);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleSize(0.035);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleOffset(1);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->GetYaxis()->SetTitle(" Efficiency");
   p_muon2_eta_SF__4->GetYaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetYaxis()->SetLabelSize(0.035);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleSize(0.035);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleOffset(1);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->GetZaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetZaxis()->SetLabelSize(0.035);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleSize(0.035);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleOffset(1);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon2_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muon2_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_muon2_eta_SF__4", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muon2_eta_SF.pdf");
}
