void mumu_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:29:48 2019) by ROOT version 6.18/00

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
   
   TProfile *muon1_eta_MC = new TProfile("muon1_eta_MC","#mu#mu final state - leading muon",5, xAxis);
   muon1_eta_MC->SetBinEntries(1,5161);
   muon1_eta_MC->SetBinEntries(2,8618);
   muon1_eta_MC->SetBinEntries(3,26983);
   muon1_eta_MC->SetBinEntries(4,8565);
   muon1_eta_MC->SetBinEntries(5,5312);
   muon1_eta_MC->SetBinContent(1,4909);
   muon1_eta_MC->SetBinContent(2,8375);
   muon1_eta_MC->SetBinContent(3,26296);
   muon1_eta_MC->SetBinContent(4,8339);
   muon1_eta_MC->SetBinContent(5,5050);
   muon1_eta_MC->SetBinError(1,0.002694814);
   muon1_eta_MC->SetBinError(2,0.001604695);
   muon1_eta_MC->SetBinError(3,0.0008401093);
   muon1_eta_MC->SetBinError(4,0.001562455);
   muon1_eta_MC->SetBinError(5,0.002665624);
   muon1_eta_MC->SetEntries(54639);

   muon1_eta_MC->SetMinimum(0.9);
   muon1_eta_MC->SetMaximum(1.1);
   muon1_eta_MC->SetLineColor(1);
   muon1_eta_MC->SetLineWidth(2);
   muon1_eta_MC->SetMarkerColor(1);
   muon1_eta_MC->SetMarkerStyle(20);
   muon1_eta_MC->SetMarkerSize(1);
   
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
   muon1_eta_MC->Draw("E1");
   
   TProfile *muon1_eta_data = new TProfile("muon1_eta_data","",5, xAxis);
   muon1_eta_data->SetBinEntries(1,6301);
   muon1_eta_data->SetBinEntries(2,9817);
   muon1_eta_data->SetBinEntries(3,26239);
   muon1_eta_data->SetBinEntries(4,9626);
   muon1_eta_data->SetBinEntries(5,6051);
   muon1_eta_data->SetBinContent(1,6069);
   muon1_eta_data->SetBinContent(2,9631);
   muon1_eta_data->SetBinContent(3,25560);
   muon1_eta_data->SetBinContent(4,9411);
   muon1_eta_data->SetBinContent(5,5806);
   muon1_eta_data->SetBinError(1,0.002137733);
   muon1_eta_data->SetBinError(2,0.001250408);
   muon1_eta_data->SetBinError(3,0.0008588962);
   muon1_eta_data->SetBinError(4,0.00136132);
   muon1_eta_data->SetBinError(5,0.002278845);
   muon1_eta_data->SetEntries(58034);

   muon1_eta_data->SetLineColor(2);
   muon1_eta_data->SetLineWidth(2);
   muon1_eta_data->SetMarkerColor(2);
   muon1_eta_data->SetMarkerStyle(22);
   muon1_eta_data->SetMarkerSize(1.2);

   muon1_eta_data->GetXaxis()->SetTitle(" #eta");
   muon1_eta_data->GetXaxis()->SetLabelFont(42);
   muon1_eta_data->GetXaxis()->SetLabelSize(0.035);
   muon1_eta_data->GetXaxis()->SetTitleSize(0.035);
   muon1_eta_data->GetXaxis()->SetTitleOffset(1);
   muon1_eta_data->GetXaxis()->SetTitleFont(42);
   muon1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_data->GetYaxis()->SetLabelFont(42);
   muon1_eta_data->GetYaxis()->SetLabelSize(0.035);
   muon1_eta_data->GetYaxis()->SetTitleSize(0.035);
   muon1_eta_data->GetYaxis()->SetTitleOffset(1);
   muon1_eta_data->GetYaxis()->SetTitleFont(42);
   muon1_eta_data->GetZaxis()->SetLabelFont(42);
   muon1_eta_data->GetZaxis()->SetLabelSize(0.035);
   muon1_eta_data->GetZaxis()->SetTitleSize(0.035);
   muon1_eta_data->GetZaxis()->SetTitleOffset(1);
   muon1_eta_data->GetZaxis()->SetTitleFont(42);
   muon1_eta_data->Draw("same E1");
   
   TH1D *p_muon1_eta_SF__3 = new TH1D("p_muon1_eta_SF__3","",5, xAxis);
   p_muon1_eta_SF__3->SetBinContent(1,1.012625);
   p_muon1_eta_SF__3->SetBinContent(2,1.009518);
   p_muon1_eta_SF__3->SetBinContent(3,0.9995721);
   p_muon1_eta_SF__3->SetBinContent(4,1.004161);
   p_muon1_eta_SF__3->SetBinContent(5,1.009291);
   p_muon1_eta_SF__3->SetBinError(1,0.01901109);
   p_muon1_eta_SF__3->SetBinError(2,0.01490195);
   p_muon1_eta_SF__3->SetBinError(3,0.008666444);
   p_muon1_eta_SF__3->SetBinError(4,0.01491575);
   p_muon1_eta_SF__3->SetBinError(5,0.01897669);
   p_muon1_eta_SF__3->SetEntries(20426.27);

   p_muon1_eta_SF__3->SetLineColor(8);
   p_muon1_eta_SF__3->SetLineWidth(2);
   p_muon1_eta_SF__3->SetMarkerColor(8);
   p_muon1_eta_SF__3->SetMarkerStyle(33);
   p_muon1_eta_SF__3->SetMarkerSize(1.5);

   p_muon1_eta_SF__3->GetXaxis()->SetTitle(" #eta");
   p_muon1_eta_SF__3->GetXaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetXaxis()->SetLabelSize(0.035);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleSize(0.035);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleOffset(1);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->GetYaxis()->SetTitle(" Efficiency");
   p_muon1_eta_SF__3->GetYaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetYaxis()->SetLabelSize(0.035);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleSize(0.035);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleOffset(1);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->GetZaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetZaxis()->SetLabelSize(0.035);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleSize(0.035);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleOffset(1);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muon1_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_muon1_eta_SF__3", "Data/MC SF", "PEL");
   leg->Draw();
   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
}
