void emu_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:32:22 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);

//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-3.125,0.81875,3.125,1.13125);
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
   
   TProfile *muonElectron1_eta_MC = new TProfile("muonElectron1_eta_MC","e#mu final state - electron",5, xAxis);
   muonElectron1_eta_MC->SetBinEntries(0,1);
   muonElectron1_eta_MC->SetBinEntries(1,329);
   muonElectron1_eta_MC->SetBinEntries(2,362);
   muonElectron1_eta_MC->SetBinEntries(3,986);
   muonElectron1_eta_MC->SetBinEntries(4,324);
   muonElectron1_eta_MC->SetBinEntries(5,340);
   muonElectron1_eta_MC->SetBinContent(0,1);
   muonElectron1_eta_MC->SetBinContent(1,309);
   muonElectron1_eta_MC->SetBinContent(2,354);
   muonElectron1_eta_MC->SetBinContent(3,952);
   muonElectron1_eta_MC->SetBinContent(4,313);
   muonElectron1_eta_MC->SetBinContent(5,321);
   muonElectron1_eta_MC->SetBinError(0,1);
   muonElectron1_eta_MC->SetBinError(1,0.01382608);
   muonElectron1_eta_MC->SetBinError(2,0.009189442);
   muonElectron1_eta_MC->SetBinError(3,0.005819732);
   muonElectron1_eta_MC->SetBinError(4,0.0113897);
   muonElectron1_eta_MC->SetBinError(5,0.01315283);
   muonElectron1_eta_MC->SetEntries(2342);

   muonElectron1_eta_MC->SetMinimum(0.7);
   muonElectron1_eta_MC->SetMaximum(1.2);
   muonElectron1_eta_MC->SetLineColor(1);
   muonElectron1_eta_MC->SetLineWidth(2);
   muonElectron1_eta_MC->SetMarkerColor(1);
   muonElectron1_eta_MC->SetMarkerStyle(20);
   muonElectron1_eta_MC->SetMarkerSize(1);
   
   muonElectron1_eta_MC->GetXaxis()->SetTitle(" #eta");
   muonElectron1_eta_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_eta_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_eta_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_eta_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetZaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->Draw("E1");
   
   TProfile *muonElectron1_eta_data = new TProfile("muonElectron1_eta_data","",5, xAxis);
   muonElectron1_eta_data->SetBinEntries(0,2);
   muonElectron1_eta_data->SetBinEntries(1,239);
   muonElectron1_eta_data->SetBinEntries(2,235);
   muonElectron1_eta_data->SetBinEntries(3,687);
   muonElectron1_eta_data->SetBinEntries(4,235);
   muonElectron1_eta_data->SetBinEntries(5,199);
   muonElectron1_eta_data->SetBinContent(0,2);
   muonElectron1_eta_data->SetBinContent(1,221);
   muonElectron1_eta_data->SetBinContent(2,227);
   muonElectron1_eta_data->SetBinContent(3,663);
   muonElectron1_eta_data->SetBinContent(4,225);
   muonElectron1_eta_data->SetBinContent(5,186);
   muonElectron1_eta_data->SetBinError(0,1.414214);
   muonElectron1_eta_data->SetBinError(1,0.01808359);
   muonElectron1_eta_data->SetBinError(2,0.01403305);
   muonElectron1_eta_data->SetBinError(3,0.007239845);
   muonElectron1_eta_data->SetBinError(4,0.01508216);
   muonElectron1_eta_data->SetBinError(5,0.01929893);
   muonElectron1_eta_data->SetEntries(1597);

   muonElectron1_eta_data->SetLineColor(2);
   muonElectron1_eta_data->SetLineWidth(2);
   muonElectron1_eta_data->SetMarkerColor(2);
   muonElectron1_eta_data->SetMarkerStyle(22);
   muonElectron1_eta_data->SetMarkerSize(1.2);

   muonElectron1_eta_data->GetXaxis()->SetTitle(" #eta");
   muonElectron1_eta_data->GetXaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_eta_data->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_eta_data->GetXaxis()->SetTitleOffset(1);
   muonElectron1_eta_data->GetXaxis()->SetTitleFont(42);
   muonElectron1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_eta_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_eta_data->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_eta_data->GetYaxis()->SetTitleOffset(1);
   muonElectron1_eta_data->GetYaxis()->SetTitleFont(42);
   muonElectron1_eta_data->GetZaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_eta_data->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_eta_data->GetZaxis()->SetTitleOffset(1);
   muonElectron1_eta_data->GetZaxis()->SetTitleFont(42);
   muonElectron1_eta_data->Draw("same E1");
   
   TH1D *p_muonElectron1_eta_SF__5 = new TH1D("p_muonElectron1_eta_SF__5","",5, xAxis);
   p_muonElectron1_eta_SF__5->SetBinContent(0,1);
   p_muonElectron1_eta_SF__5->SetBinContent(1,0.9845364);
   p_muonElectron1_eta_SF__5->SetBinContent(2,0.987787);
   p_muonElectron1_eta_SF__5->SetBinContent(3,0.9995321);
   p_muonElectron1_eta_SF__5->SetBinContent(4,0.9910951);
   p_muonElectron1_eta_SF__5->SetBinContent(5,0.9899967);
   p_muonElectron1_eta_SF__5->SetBinError(1,0.08367752);
   p_muonElectron1_eta_SF__5->SetBinError(2,0.08274888);
   p_muonElectron1_eta_SF__5->SetBinError(3,0.04967386);
   p_muonElectron1_eta_SF__5->SetBinError(4,0.08492091);
   p_muonElectron1_eta_SF__5->SetBinError(5,0.08836124);
   p_muonElectron1_eta_SF__5->SetEntries(782.8579);

   p_muonElectron1_eta_SF__5->SetLineColor(8);
   p_muonElectron1_eta_SF__5->SetLineWidth(2);
   p_muonElectron1_eta_SF__5->SetMarkerColor(8);
   p_muonElectron1_eta_SF__5->SetMarkerStyle(33);
   p_muonElectron1_eta_SF__5->SetMarkerSize(1.5);

   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitle(" #eta");
   p_muonElectron1_eta_SF__5->GetXaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetLabelSize(0.035);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleSize(0.035);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleOffset(1);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitle(" Efficiency");
   p_muonElectron1_eta_SF__5->GetYaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetLabelSize(0.035);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleSize(0.035);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleOffset(1);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleOffset(1);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron1_eta_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_muonElectron1_eta_SF__5", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron1_eta_SF.pdf");
}
