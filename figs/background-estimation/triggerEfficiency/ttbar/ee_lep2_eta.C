void ee_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:28:33 2019) by ROOT version 6.18/00

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

   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *electron2_eta_MC = new TProfile("electron2_eta_MC","ee final state - subleading electron",5, xAxis);
   electron2_eta_MC->SetBinEntries(0,10);
   electron2_eta_MC->SetBinEntries(1,3537);
   electron2_eta_MC->SetBinEntries(2,6104);
   electron2_eta_MC->SetBinEntries(3,20290);
   electron2_eta_MC->SetBinEntries(4,6280);
   electron2_eta_MC->SetBinEntries(5,3695);
   electron2_eta_MC->SetBinContent(0,9);
   electron2_eta_MC->SetBinContent(1,3445);
   electron2_eta_MC->SetBinContent(2,5965);
   electron2_eta_MC->SetBinContent(3,19841);
   electron2_eta_MC->SetBinContent(4,6131);
   electron2_eta_MC->SetBinContent(5,3595);
   electron2_eta_MC->SetBinError(0,3);
   electron2_eta_MC->SetBinError(1,0.002509107);
   electron2_eta_MC->SetBinError(2,0.001755377);
   electron2_eta_MC->SetBinError(3,0.000913363);
   electron2_eta_MC->SetBinError(4,0.00176035);
   electron2_eta_MC->SetBinError(5,0.002491849);
   electron2_eta_MC->SetEntries(39916);

   electron2_eta_MC->SetMinimum(0.5);
   electron2_eta_MC->SetMaximum(1.1);
   electron2_eta_MC->SetLineColor(1);
   electron2_eta_MC->SetLineWidth(2);
   electron2_eta_MC->SetMarkerColor(1);
   electron2_eta_MC->SetMarkerStyle(20);
   electron2_eta_MC->SetMarkerSize(1);

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
   electron2_eta_MC->Draw("E1");
   
   TProfile *electron2_eta_data = new TProfile("electron2_eta_data","",5, xAxis);
   electron2_eta_data->SetBinEntries(0,1);
   electron2_eta_data->SetBinEntries(1,1493);
   electron2_eta_data->SetBinEntries(2,2698);
   electron2_eta_data->SetBinEntries(3,9227);
   electron2_eta_data->SetBinEntries(4,2665);
   electron2_eta_data->SetBinEntries(5,1397);
   electron2_eta_data->SetBinEntries(6,2);
   electron2_eta_data->SetBinContent(0,1);
   electron2_eta_data->SetBinContent(1,1458);
   electron2_eta_data->SetBinContent(2,2615);
   electron2_eta_data->SetBinContent(3,8933);
   electron2_eta_data->SetBinContent(4,2565);
   electron2_eta_data->SetBinContent(5,1337);
   electron2_eta_data->SetBinContent(6,2);
   electron2_eta_data->SetBinError(0,1);
   electron2_eta_data->SetBinError(1,0.003916086);
   electron2_eta_data->SetBinError(2,0.003133267);
   electron2_eta_data->SetBinError(3,0.001635463);
   electron2_eta_data->SetBinError(4,0.003434604);
   electron2_eta_data->SetBinError(5,0.005208214);
   electron2_eta_data->SetBinError(6,1.414214);
   electron2_eta_data->SetEntries(17483);

   electron2_eta_data->SetLineColor(2);
   electron2_eta_data->SetLineWidth(2);
   electron2_eta_data->SetMarkerColor(2);
   electron2_eta_data->SetMarkerStyle(22);
   electron2_eta_data->SetMarkerSize(1.2);

   electron2_eta_data->GetXaxis()->SetTitle(" #eta");
   electron2_eta_data->GetXaxis()->SetLabelFont(42);
   electron2_eta_data->GetXaxis()->SetLabelSize(0.035);
   electron2_eta_data->GetXaxis()->SetTitleSize(0.035);
   electron2_eta_data->GetXaxis()->SetTitleOffset(1);
   electron2_eta_data->GetXaxis()->SetTitleFont(42);
   electron2_eta_data->GetYaxis()->SetTitle(" Efficiency");
   electron2_eta_data->GetYaxis()->SetLabelFont(42);
   electron2_eta_data->GetYaxis()->SetLabelSize(0.035);
   electron2_eta_data->GetYaxis()->SetTitleSize(0.035);
   electron2_eta_data->GetYaxis()->SetTitleOffset(1);
   electron2_eta_data->GetYaxis()->SetTitleFont(42);
   electron2_eta_data->GetZaxis()->SetLabelFont(42);
   electron2_eta_data->GetZaxis()->SetLabelSize(0.035);
   electron2_eta_data->GetZaxis()->SetTitleSize(0.035);
   electron2_eta_data->GetZaxis()->SetTitleOffset(1);
   electron2_eta_data->GetZaxis()->SetTitleFont(42);
   electron2_eta_data->Draw("E1 same");
   
   TH1D *p_electron2_eta_SF__2 = new TH1D("p_electron2_eta_SF__2","",5, xAxis);
   p_electron2_eta_SF__2->SetBinContent(0,1.111111);
   p_electron2_eta_SF__2->SetBinContent(1,1.002637);
   p_electron2_eta_SF__2->SetBinContent(2,0.9918222);
   p_electron2_eta_SF__2->SetBinContent(3,0.9900458);
   p_electron2_eta_SF__2->SetBinContent(4,0.9858673);
   p_electron2_eta_SF__2->SetBinContent(5,0.9836725);
   p_electron2_eta_SF__2->SetBinError(0,0.1171214);
   p_electron2_eta_SF__2->SetBinError(1,0.03094426);
   p_electron2_eta_SF__2->SetBinError(2,0.02292959);
   p_electron2_eta_SF__2->SetBinError(3,0.0124314);
   p_electron2_eta_SF__2->SetBinError(4,0.02279188);
   p_electron2_eta_SF__2->SetBinError(5,0.03089508);
   p_electron2_eta_SF__2->SetEntries(7886.859);

   p_electron2_eta_SF__2->SetLineColor(8);
   p_electron2_eta_SF__2->SetLineWidth(2);
   p_electron2_eta_SF__2->SetMarkerColor(8);
   p_electron2_eta_SF__2->SetMarkerStyle(33);
   p_electron2_eta_SF__2->SetMarkerSize(1.5);

   p_electron2_eta_SF__2->GetXaxis()->SetTitle(" #eta");
   p_electron2_eta_SF__2->GetXaxis()->SetLabelFont(42);
   p_electron2_eta_SF__2->GetXaxis()->SetLabelSize(0.035);
   p_electron2_eta_SF__2->GetXaxis()->SetTitleSize(0.035);
   p_electron2_eta_SF__2->GetXaxis()->SetTitleOffset(1);
   p_electron2_eta_SF__2->GetXaxis()->SetTitleFont(42);
   p_electron2_eta_SF__2->GetYaxis()->SetTitle(" Efficiency");
   p_electron2_eta_SF__2->GetYaxis()->SetLabelFont(42);
   p_electron2_eta_SF__2->GetYaxis()->SetLabelSize(0.035);
   p_electron2_eta_SF__2->GetYaxis()->SetTitleSize(0.035);
   p_electron2_eta_SF__2->GetYaxis()->SetTitleOffset(1);
   p_electron2_eta_SF__2->GetYaxis()->SetTitleFont(42);
   p_electron2_eta_SF__2->GetZaxis()->SetLabelFont(42);
   p_electron2_eta_SF__2->GetZaxis()->SetLabelSize(0.035);
   p_electron2_eta_SF__2->GetZaxis()->SetTitleSize(0.035);
   p_electron2_eta_SF__2->GetZaxis()->SetTitleOffset(1);
   p_electron2_eta_SF__2->GetZaxis()->SetTitleFont(42);
   p_electron2_eta_SF__2->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron2_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("electron2_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_electron2_eta_SF__2", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron2_eta_SF.pdf");
}
