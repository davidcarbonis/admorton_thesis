void ee_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:27:17 2019) by ROOT version 6.18/00

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
   
   TProfile *electron1_eta_MC = new TProfile("electron1_eta_MC","ee final state - leading electron",5, xAxis);
   electron1_eta_MC->SetBinEntries(0,10);
   electron1_eta_MC->SetBinEntries(1,2773);
   electron1_eta_MC->SetBinEntries(2,6071);
   electron1_eta_MC->SetBinEntries(3,22338);
   electron1_eta_MC->SetBinEntries(4,6186);
   electron1_eta_MC->SetBinEntries(5,2933);
   electron1_eta_MC->SetBinContent(0,9);
   electron1_eta_MC->SetBinContent(1,2694);
   electron1_eta_MC->SetBinContent(2,5988);
   electron1_eta_MC->SetBinContent(3,22055);
   electron1_eta_MC->SetBinContent(4,6115);
   electron1_eta_MC->SetBinContent(5,2841);
   electron1_eta_MC->SetBinError(0,3);
   electron1_eta_MC->SetBinError(1,0.002986221);
   electron1_eta_MC->SetBinError(2,0.001405928);
   electron1_eta_MC->SetBinError(3,0.0006704477);
   electron1_eta_MC->SetBinError(4,0.001289299);
   electron1_eta_MC->SetBinError(5,0.003016682);
   electron1_eta_MC->SetEntries(40311);

   electron1_eta_MC->SetMinimum(0.8);
   electron1_eta_MC->SetMaximum(1.1);
   electron1_eta_MC->SetLineColor(1);
   electron1_eta_MC->SetLineWidth(2);
   electron1_eta_MC->SetMarkerColor(1);
   electron1_eta_MC->SetMarkerStyle(20);
   electron1_eta_MC->SetMarkerSize(1);

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
   electron1_eta_MC->Draw("E1");
   
   TProfile *electron1_eta_data = new TProfile("electron1_eta_data","",5, xAxis);
   electron1_eta_data->SetBinEntries(0,2);
   electron1_eta_data->SetBinEntries(1,1178);
   electron1_eta_data->SetBinEntries(2,2662);
   electron1_eta_data->SetBinEntries(3,10104);
   electron1_eta_data->SetBinEntries(4,2620);
   electron1_eta_data->SetBinEntries(5,1119);
   electron1_eta_data->SetBinEntries(6,1);
   electron1_eta_data->SetBinContent(0,2);
   electron1_eta_data->SetBinContent(1,1133);
   electron1_eta_data->SetBinContent(2,2601);
   electron1_eta_data->SetBinContent(3,9880);
   electron1_eta_data->SetBinContent(4,2559);
   electron1_eta_data->SetBinContent(5,1068);
   electron1_eta_data->SetBinContent(6,1);
   electron1_eta_data->SetBinError(0,1.414214);
   electron1_eta_data->SetBinError(1,0.00547046);
   electron1_eta_data->SetBinError(2,0.002785173);
   electron1_eta_data->SetBinError(3,0.00132202);
   electron1_eta_data->SetBinError(4,0.002829225);
   electron1_eta_data->SetBinError(5,0.006050119);
   electron1_eta_data->SetBinError(6,1);
   electron1_eta_data->SetEntries(17686);

   electron1_eta_data->SetLineColor(2);
   electron1_eta_data->SetLineWidth(2);
   electron1_eta_data->SetMarkerColor(2);
   electron1_eta_data->SetMarkerStyle(22);
   electron1_eta_data->SetMarkerSize(1.2);

   electron1_eta_data->GetXaxis()->SetTitle(" #eta");
   electron1_eta_data->GetXaxis()->SetLabelFont(42);
   electron1_eta_data->GetXaxis()->SetLabelSize(0.035);
   electron1_eta_data->GetXaxis()->SetTitleSize(0.035);
   electron1_eta_data->GetXaxis()->SetTitleOffset(1);
   electron1_eta_data->GetXaxis()->SetTitleFont(42);
   electron1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   electron1_eta_data->GetYaxis()->SetLabelFont(42);
   electron1_eta_data->GetYaxis()->SetLabelSize(0.035);
   electron1_eta_data->GetYaxis()->SetTitleSize(0.035);
   electron1_eta_data->GetYaxis()->SetTitleOffset(1);
   electron1_eta_data->GetYaxis()->SetTitleFont(42);
   electron1_eta_data->GetZaxis()->SetLabelFont(42);
   electron1_eta_data->GetZaxis()->SetLabelSize(0.035);
   electron1_eta_data->GetZaxis()->SetTitleSize(0.035);
   electron1_eta_data->GetZaxis()->SetTitleOffset(1);
   electron1_eta_data->GetZaxis()->SetTitleFont(42);
   electron1_eta_data->Draw("same E1");
   
   TH1D *p_electron1_eta_SF__1 = new TH1D("p_electron1_eta_SF__1","",5, xAxis);
   p_electron1_eta_SF__1->SetBinContent(0,1.111111);
   p_electron1_eta_SF__1->SetBinContent(1,0.9900039);
   p_electron1_eta_SF__1->SetBinContent(2,0.9906283);
   p_electron1_eta_SF__1->SetBinContent(3,0.9903777);
   p_electron1_eta_SF__1->SetBinContent(4,0.988058);
   p_electron1_eta_SF__1->SetBinContent(5,0.9853307);
   p_electron1_eta_SF__1->SetBinError(0,0.1171214);
   p_electron1_eta_SF__1->SetBinError(1,0.03443046);
   p_electron1_eta_SF__1->SetBinError(2,0.02302811);
   p_electron1_eta_SF__1->SetBinError(3,0.01187369);
   p_electron1_eta_SF__1->SetBinError(4,0.02303118);
   p_electron1_eta_SF__1->SetBinError(5,0.03462148);
   p_electron1_eta_SF__1->SetEntries(6817.714);

   p_electron1_eta_SF__1->SetLineColor(8);
   p_electron1_eta_SF__1->SetLineWidth(2);
   p_electron1_eta_SF__1->SetMarkerColor(8);
   p_electron1_eta_SF__1->SetMarkerStyle(33);
   p_electron1_eta_SF__1->SetMarkerSize(1.5);

   p_electron1_eta_SF__1->GetXaxis()->SetTitle(" #eta");
   p_electron1_eta_SF__1->GetXaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetXaxis()->SetLabelSize(0.035);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleSize(0.035);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleOffset(1);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->GetYaxis()->SetTitle(" Efficiency");
   p_electron1_eta_SF__1->GetYaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetYaxis()->SetLabelSize(0.035);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleSize(0.035);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleOffset(1);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->GetZaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetZaxis()->SetLabelSize(0.035);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleSize(0.035);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleOffset(1);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("electron1_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_electron1_eta_SF__1", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron1_eta_SF.pdf");
}
