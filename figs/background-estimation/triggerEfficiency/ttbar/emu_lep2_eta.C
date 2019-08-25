void emu_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:33:46 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);

//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-3.125,0.80625,3.125,1.24375);
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
   
   TProfile *muonElectron2_eta_MC = new TProfile("muonElectron2_eta_MC","e#mu final state - muon",5, xAxis);
   muonElectron2_eta_MC->SetBinEntries(1,158);
   muonElectron2_eta_MC->SetBinEntries(2,200);
   muonElectron2_eta_MC->SetBinEntries(3,500);
   muonElectron2_eta_MC->SetBinEntries(4,193);
   muonElectron2_eta_MC->SetBinEntries(5,176);
   muonElectron2_eta_MC->SetBinContent(1,144);
   muonElectron2_eta_MC->SetBinContent(2,187);
   muonElectron2_eta_MC->SetBinContent(3,483);
   muonElectron2_eta_MC->SetBinContent(4,177);
   muonElectron2_eta_MC->SetBinContent(5,165);
   muonElectron2_eta_MC->SetBinError(1,0.02459496);
   muonElectron2_eta_MC->SetBinError(2,0.01920679);
   muonElectron2_eta_MC->SetBinError(3,0.008687613);
   muonElectron2_eta_MC->SetBinError(4,0.02127899);
   muonElectron2_eta_MC->SetBinError(5,0.02055208);
   muonElectron2_eta_MC->SetEntries(1227);

   muonElectron2_eta_MC->SetMinimum(0.7);
   muonElectron2_eta_MC->SetMaximum(1.2);
   muonElectron2_eta_MC->SetLineColor(1);
   muonElectron2_eta_MC->SetLineWidth(2);
   muonElectron2_eta_MC->SetMarkerColor(1);
   muonElectron2_eta_MC->SetMarkerStyle(20);
   muonElectron2_eta_MC->SetMarkerSize(1);
   
   muonElectron2_eta_MC->GetXaxis()->SetTitle(" #eta");
   muonElectron2_eta_MC->GetXaxis()->SetLabelFont(42);
   muonElectron2_eta_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC->GetXaxis()->SetTitleFont(42);
   muonElectron2_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_eta_MC->GetYaxis()->SetLabelFont(42);
   muonElectron2_eta_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC->GetYaxis()->SetTitleFont(42);
   muonElectron2_eta_MC->GetZaxis()->SetLabelFont(42);
   muonElectron2_eta_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_eta_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_eta_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron2_eta_MC->GetZaxis()->SetTitleFont(42);
   muonElectron2_eta_MC->Draw("E1");
   
   TProfile *muonElectron2_eta_data = new TProfile("muonElectron2_eta_data","",5, xAxis);
   muonElectron2_eta_data->SetBinEntries(1,177);
   muonElectron2_eta_data->SetBinEntries(2,164);
   muonElectron2_eta_data->SetBinEntries(3,490);
   muonElectron2_eta_data->SetBinEntries(4,168);
   muonElectron2_eta_data->SetBinEntries(5,136);
   muonElectron2_eta_data->SetBinContent(1,166);
   muonElectron2_eta_data->SetBinContent(2,160);
   muonElectron2_eta_data->SetBinContent(3,476);
   muonElectron2_eta_data->SetBinContent(4,163);
   muonElectron2_eta_data->SetBinContent(5,128);
   muonElectron2_eta_data->SetBinError(1,0.02044108);
   muonElectron2_eta_data->SetBinError(2,0.01625167);
   muonElectron2_eta_data->SetBinError(3,0.008262352);
   muonElectron2_eta_data->SetBinError(4,0.01689056);
   muonElectron2_eta_data->SetBinError(5,0.02380765);
   muonElectron2_eta_data->SetEntries(1135);

   muonElectron2_eta_data->SetLineColor(2);
   muonElectron2_eta_data->SetLineWidth(2);
   muonElectron2_eta_data->SetMarkerColor(2);
   muonElectron2_eta_data->SetMarkerStyle(22);
   muonElectron2_eta_data->SetMarkerSize(1.2);

   muonElectron2_eta_data->GetXaxis()->SetTitle(" #eta");
   muonElectron2_eta_data->GetXaxis()->SetLabelFont(42);
   muonElectron2_eta_data->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_eta_data->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_eta_data->GetXaxis()->SetTitleOffset(1);
   muonElectron2_eta_data->GetXaxis()->SetTitleFont(42);
   muonElectron2_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_eta_data->GetYaxis()->SetLabelFont(42);
   muonElectron2_eta_data->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_eta_data->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_eta_data->GetYaxis()->SetTitleOffset(1);
   muonElectron2_eta_data->GetYaxis()->SetTitleFont(42);
   muonElectron2_eta_data->GetZaxis()->SetLabelFont(42);
   muonElectron2_eta_data->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_eta_data->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_eta_data->GetZaxis()->SetTitleOffset(1);
   muonElectron2_eta_data->GetZaxis()->SetTitleFont(42);
   muonElectron2_eta_data->Draw("same E1");
   
   TH1D *p_muonElectron2_eta_SF__6 = new TH1D("p_muonElectron2_eta_SF__6","",5, xAxis);
   p_muonElectron2_eta_SF__6->SetBinContent(1,1.029033);
   p_muonElectron2_eta_SF__6->SetBinContent(2,1.043433);
   p_muonElectron2_eta_SF__6->SetBinContent(3,1.00562);
   p_muonElectron2_eta_SF__6->SetBinContent(4,1.057943);
   p_muonElectron2_eta_SF__6->SetBinContent(5,1.003922);
   p_muonElectron2_eta_SF__6->SetBinError(1,0.1126253);
   p_muonElectron2_eta_SF__6->SetBinError(2,0.1099203);
   p_muonElectron2_eta_SF__6->SetBinError(3,0.06392464);
   p_muonElectron2_eta_SF__6->SetBinError(4,0.1116303);
   p_muonElectron2_eta_SF__6->SetBinError(5,0.1146174);
   p_muonElectron2_eta_SF__6->SetEntries(485.1835);

   p_muonElectron2_eta_SF__6->SetLineColor(8);
   p_muonElectron2_eta_SF__6->SetLineWidth(2);
   p_muonElectron2_eta_SF__6->SetMarkerColor(8);
   p_muonElectron2_eta_SF__6->SetMarkerStyle(33);
   p_muonElectron2_eta_SF__6->SetMarkerSize(1.5);

   p_muonElectron2_eta_SF__6->GetXaxis()->SetTitle(" #eta");
   p_muonElectron2_eta_SF__6->GetXaxis()->SetLabelFont(42);
   p_muonElectron2_eta_SF__6->GetXaxis()->SetLabelSize(0.035);
   p_muonElectron2_eta_SF__6->GetXaxis()->SetTitleSize(0.035);
   p_muonElectron2_eta_SF__6->GetXaxis()->SetTitleOffset(1);
   p_muonElectron2_eta_SF__6->GetXaxis()->SetTitleFont(42);
   p_muonElectron2_eta_SF__6->GetYaxis()->SetTitle(" Efficiency");
   p_muonElectron2_eta_SF__6->GetYaxis()->SetLabelFont(42);
   p_muonElectron2_eta_SF__6->GetYaxis()->SetLabelSize(0.035);
   p_muonElectron2_eta_SF__6->GetYaxis()->SetTitleSize(0.035);
   p_muonElectron2_eta_SF__6->GetYaxis()->SetTitleOffset(1);
   p_muonElectron2_eta_SF__6->GetYaxis()->SetTitleFont(42);
   p_muonElectron2_eta_SF__6->GetZaxis()->SetLabelFont(42);
   p_muonElectron2_eta_SF__6->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron2_eta_SF__6->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron2_eta_SF__6->GetZaxis()->SetTitleOffset(1);
   p_muonElectron2_eta_SF__6->GetZaxis()->SetTitleFont(42);
   p_muonElectron2_eta_SF__6->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron2_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron2_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_muonElectron2_eta_SF__6", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron2_eta_SF.pdf");
}
