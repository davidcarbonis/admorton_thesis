void ee_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 20:33:52 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-37.5,0.7871622,337.5,1.144224);
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

   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300}; 
   
   TProfile *electron2_pT_MC = new TProfile("electron2_pT_MC","ee final state - subleading lepton",9, xAxis);
   electron2_pT_MC->SetBinEntries(1,3854);
   electron2_pT_MC->SetBinEntries(2,4690);
   electron2_pT_MC->SetBinEntries(3,5249);
   electron2_pT_MC->SetBinEntries(4,9325);
   electron2_pT_MC->SetBinEntries(5,12910);
   electron2_pT_MC->SetBinEntries(6,4145);
   electron2_pT_MC->SetBinEntries(7,1835);
   electron2_pT_MC->SetBinEntries(8,1651);
   electron2_pT_MC->SetBinEntries(9,111);
   electron2_pT_MC->SetBinContent(1,3274);
   electron2_pT_MC->SetBinContent(2,4320);
   electron2_pT_MC->SetBinContent(3,5008);
   electron2_pT_MC->SetBinContent(4,9123);
   electron2_pT_MC->SetBinContent(5,12822);
   electron2_pT_MC->SetBinContent(6,4130);
   electron2_pT_MC->SetBinContent(7,1825);
   electron2_pT_MC->SetBinContent(8,1647);
   electron2_pT_MC->SetBinContent(9,111);
   electron2_pT_MC->SetBinError(1,0.005051626);
   electron2_pT_MC->SetBinError(2,0.003494018);
   electron2_pT_MC->SetBinError(3,0.002599109);
   electron2_pT_MC->SetBinError(4,0.001365643);
   electron2_pT_MC->SetBinError(5,0.0006811775);
   electron2_pT_MC->SetBinError(6,0.001018898);
   electron2_pT_MC->SetBinError(7,0.001982094);
   electron2_pT_MC->SetBinError(8,0.001644725);
   electron2_pT_MC->SetBinError(9,0.01439483);
   electron2_pT_MC->SetEntries(43770);

   electron2_pT_MC->SetMinimum(0.5);
   electron2_pT_MC->SetMaximum(1.1);
   electron2_pT_MC->SetLineColor(1);
   electron2_pT_MC->SetLineWidth(2);
   electron2_pT_MC->SetMarkerColor(1);
   electron2_pT_MC->SetMarkerStyle(20);
   electron2_pT_MC->SetMarkerSize(1);

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
   electron2_pT_MC->Draw("E1");
   
   TProfile *electron2_pT_data = new TProfile("electron2_pT_data","",9, xAxis);
   electron2_pT_data->SetBinEntries(1,1351);
   electron2_pT_data->SetBinEntries(2,1731);
   electron2_pT_data->SetBinEntries(3,1974);
   electron2_pT_data->SetBinEntries(4,3585);
   electron2_pT_data->SetBinEntries(5,5435);
   electron2_pT_data->SetBinEntries(6,2066);
   electron2_pT_data->SetBinEntries(7,1113);
   electron2_pT_data->SetBinEntries(8,1403);
   electron2_pT_data->SetBinEntries(9,144);
   electron2_pT_data->SetBinEntries(10,32);
   electron2_pT_data->SetBinContent(1,1163);
   electron2_pT_data->SetBinContent(2,1576);
   electron2_pT_data->SetBinContent(3,1870);
   electron2_pT_data->SetBinContent(4,3471);
   electron2_pT_data->SetBinContent(5,5367);
   electron2_pT_data->SetBinContent(6,2039);
   electron2_pT_data->SetBinContent(7,1093);
   electron2_pT_data->SetBinContent(8,1375);
   electron2_pT_data->SetBinContent(9,140);
   electron2_pT_data->SetBinContent(10,16);
   electron2_pT_data->SetBinError(1,0.00851827);
   electron2_pT_data->SetBinError(2,0.006264577);
   electron2_pT_data->SetBinError(3,0.004678867);
   electron2_pT_data->SetBinError(4,0.002717451);
   electron2_pT_data->SetBinError(5,0.001439034);
   electron2_pT_data->SetBinError(6,0.002559067);
   electron2_pT_data->SetBinError(7,0.004200659);
   electron2_pT_data->SetBinError(8,0.003808637);
   electron2_pT_data->SetBinError(9,0.03614803);
   electron2_pT_data->SetBinError(10,4);
   electron2_pT_data->SetEntries(18834);

   electron2_pT_data->SetLineColor(2);
   electron2_pT_data->SetLineWidth(2);
   electron2_pT_data->SetMarkerColor(2);
   electron2_pT_data->SetMarkerStyle(22);
   electron2_pT_data->SetMarkerSize(1.2);

   electron2_pT_data->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron2_pT_data->GetXaxis()->SetLabelFont(42);
   electron2_pT_data->GetXaxis()->SetLabelSize(0.035);
   electron2_pT_data->GetXaxis()->SetTitleSize(0.035);
   electron2_pT_data->GetXaxis()->SetTitleOffset(1);
   electron2_pT_data->GetXaxis()->SetTitleFont(42);
   electron2_pT_data->GetYaxis()->SetTitle(" Efficiency");
   electron2_pT_data->GetYaxis()->SetLabelFont(42);
   electron2_pT_data->GetYaxis()->SetLabelSize(0.035);
   electron2_pT_data->GetYaxis()->SetTitleSize(0.035);
   electron2_pT_data->GetYaxis()->SetTitleOffset(1);
   electron2_pT_data->GetYaxis()->SetTitleFont(42);
   electron2_pT_data->GetZaxis()->SetLabelFont(42);
   electron2_pT_data->GetZaxis()->SetLabelSize(0.035);
   electron2_pT_data->GetZaxis()->SetTitleSize(0.035);
   electron2_pT_data->GetZaxis()->SetTitleOffset(1);
   electron2_pT_data->GetZaxis()->SetTitleFont(42);
   electron2_pT_data->Draw("same E1");
   
   TH1D *p_electron2_pT_SF__3 = new TH1D("p_electron2_pT_SF__3","",9, xAxis);
   p_electron2_pT_SF__3->SetBinContent(1,1.013345);
   p_electron2_pT_SF__3->SetBinContent(2,0.9884353);
   p_electron2_pT_SF__3->SetBinContent(3,0.9929027);
   p_electron2_pT_SF__3->SetBinContent(4,0.9896386);
   p_electron2_pT_SF__3->SetBinContent(5,0.9942658);
   p_electron2_pT_SF__3->SetBinContent(6,0.9905158);
   p_electron2_pT_SF__3->SetBinContent(7,0.9874115);
   p_electron2_pT_SF__3->SetBinContent(8,0.982423);
   p_electron2_pT_SF__3->SetBinContent(9,0.972222);
   p_electron2_pT_SF__3->SetBinError(1,0.03203939);
   p_electron2_pT_SF__3->SetBinError(2,0.02779807);
   p_electron2_pT_SF__3->SetBinError(3,0.02621523);
   p_electron2_pT_SF__3->SetBinError(4,0.01944781);
   p_electron2_pT_SF__3->SetBinError(5,0.01607676);
   p_electron2_pT_SF__3->SetBinError(6,0.02667563);
   p_electron2_pT_SF__3->SetBinError(7,0.03751425);
   p_electron2_pT_SF__3->SetBinError(8,0.03567226);
   p_electron2_pT_SF__3->SetBinError(9,0.09122132);
   p_electron2_pT_SF__3->SetEntries(5056.356);

   p_electron2_pT_SF__3->SetLineColor(8);
   p_electron2_pT_SF__3->SetLineWidth(2);
   p_electron2_pT_SF__3->SetMarkerColor(8);
   p_electron2_pT_SF__3->SetMarkerStyle(33);
   p_electron2_pT_SF__3->SetMarkerSize(1.5);

   p_electron2_pT_SF__3->GetXaxis()->SetTitle(" p_{T} (GeV)");
   p_electron2_pT_SF__3->GetXaxis()->SetLabelFont(42);
   p_electron2_pT_SF__3->GetXaxis()->SetLabelSize(0.035);
   p_electron2_pT_SF__3->GetXaxis()->SetTitleSize(0.035);
   p_electron2_pT_SF__3->GetXaxis()->SetTitleOffset(1);
   p_electron2_pT_SF__3->GetXaxis()->SetTitleFont(42);
   p_electron2_pT_SF__3->GetYaxis()->SetTitle(" Efficiency");
   p_electron2_pT_SF__3->GetYaxis()->SetLabelFont(42);
   p_electron2_pT_SF__3->GetYaxis()->SetLabelSize(0.035);
   p_electron2_pT_SF__3->GetYaxis()->SetTitleSize(0.035);
   p_electron2_pT_SF__3->GetYaxis()->SetTitleOffset(1);
   p_electron2_pT_SF__3->GetYaxis()->SetTitleFont(42);
   p_electron2_pT_SF__3->GetZaxis()->SetLabelFont(42);
   p_electron2_pT_SF__3->GetZaxis()->SetLabelSize(0.035);
   p_electron2_pT_SF__3->GetZaxis()->SetTitleSize(0.035);
   p_electron2_pT_SF__3->GetZaxis()->SetTitleOffset(1);
   p_electron2_pT_SF__3->GetZaxis()->SetTitleFont(42);
   p_electron2_pT_SF__3->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron2_pT_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("electron2_pT_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_electron2_pT_SF__3", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron2_pT_SF.pdf");
}
