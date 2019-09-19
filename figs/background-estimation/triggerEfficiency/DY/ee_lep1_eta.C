void ee_lep1_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:42 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-3.125,0.8521957,3.125,1.095077);
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
   
   TProfile *electron1_eta_MC_DY= new TProfile("electron1_eta_MC_DY","",5, xAxis);
   electron1_eta_MC_DY->SetBinEntries(1,132);
   electron1_eta_MC_DY->SetBinEntries(2,443);
   electron1_eta_MC_DY->SetBinEntries(3,2107);
   electron1_eta_MC_DY->SetBinEntries(4,474);
   electron1_eta_MC_DY->SetBinEntries(5,138);
   electron1_eta_MC_DY->SetBinContent(1,128);
   electron1_eta_MC_DY->SetBinContent(2,430);
   electron1_eta_MC_DY->SetBinContent(3,2059);
   electron1_eta_MC_DY->SetBinContent(4,466);
   electron1_eta_MC_DY->SetBinContent(5,135);
   electron1_eta_MC_DY->SetBinError(1,0.02008927);
   electron1_eta_MC_DY->SetBinError(2,0.008884818);
   electron1_eta_MC_DY->SetBinError(3,0.003172727);
   electron1_eta_MC_DY->SetBinError(4,0.007044642);
   electron1_eta_MC_DY->SetBinError(5,0.01786154);
   electron1_eta_MC_DY->SetEntries(3294);

   electron1_eta_MC_DY->SetLineColor(2);
   electron1_eta_MC_DY->SetLineWidth(2);
   electron1_eta_MC_DY->SetMarkerColor(2);
   electron1_eta_MC_DY->SetMarkerStyle(22);
   electron1_eta_MC_DY->SetMarkerSize(1.2);
   electron1_eta_MC_DY->SetMinimum(0.8);
   electron1_eta_MC_DY->SetMaximum(1.1);

   electron1_eta_MC_DY->GetXaxis()->SetTitle(" Leading electron #eta");
   electron1_eta_MC_DY->GetXaxis()->SetLabelFont(42);
   electron1_eta_MC_DY->GetXaxis()->SetLabelSize(0.035);
   electron1_eta_MC_DY->GetXaxis()->SetTitleSize(0.035);
   electron1_eta_MC_DY->GetXaxis()->SetTitleOffset(1);
   electron1_eta_MC_DY->GetXaxis()->SetTitleFont(42);
   electron1_eta_MC_DY->GetYaxis()->SetTitle(" Trigger Efficiency");
   electron1_eta_MC_DY->GetYaxis()->SetLabelFont(42);
   electron1_eta_MC_DY->GetYaxis()->SetLabelSize(0.035);
   electron1_eta_MC_DY->GetYaxis()->SetTitleSize(0.035);
   electron1_eta_MC_DY->GetYaxis()->SetTitleOffset(1);
   electron1_eta_MC_DY->GetYaxis()->SetTitleFont(42);
   electron1_eta_MC_DY->GetZaxis()->SetLabelFont(42);
   electron1_eta_MC_DY->GetZaxis()->SetLabelSize(0.035);
   electron1_eta_MC_DY->GetZaxis()->SetTitleSize(0.035);
   electron1_eta_MC_DY->GetZaxis()->SetTitleOffset(1);
   electron1_eta_MC_DY->GetZaxis()->SetTitleFont(42);
   electron1_eta_MC_DY->Draw("E1");

   TProfile *electron1_eta_MC_ttbar = new TProfile("electron1_eta_MC_ttbar","ee final state - leading electron",5, xAxis);
   electron1_eta_MC_ttbar->SetBinEntries(0,10);
   electron1_eta_MC_ttbar->SetBinEntries(1,2773);
   electron1_eta_MC_ttbar->SetBinEntries(2,6071);
   electron1_eta_MC_ttbar->SetBinEntries(3,22338);
   electron1_eta_MC_ttbar->SetBinEntries(4,6186);
   electron1_eta_MC_ttbar->SetBinEntries(5,2933);
   electron1_eta_MC_ttbar->SetBinContent(0,9);
   electron1_eta_MC_ttbar->SetBinContent(1,2694);
   electron1_eta_MC_ttbar->SetBinContent(2,5988);
   electron1_eta_MC_ttbar->SetBinContent(3,22055);
   electron1_eta_MC_ttbar->SetBinContent(4,6115);
   electron1_eta_MC_ttbar->SetBinContent(5,2841);
   electron1_eta_MC_ttbar->SetBinError(0,3);
   electron1_eta_MC_ttbar->SetBinError(1,0.002986221);
   electron1_eta_MC_ttbar->SetBinError(2,0.001405928);
   electron1_eta_MC_ttbar->SetBinError(3,0.0006704477);
   electron1_eta_MC_ttbar->SetBinError(4,0.001289299);
   electron1_eta_MC_ttbar->SetBinError(5,0.003016682);
   electron1_eta_MC_ttbar->SetEntries(40311);

   electron1_eta_MC_ttbar->SetLineColor(1);
   electron1_eta_MC_ttbar->SetLineWidth(2);
   electron1_eta_MC_ttbar->SetMarkerColor(1);
   electron1_eta_MC_ttbar->SetMarkerStyle(20);
   electron1_eta_MC_ttbar->SetMarkerSize(1);

   electron1_eta_MC_ttbar->GetXaxis()->SetTitle(" #eta");
   electron1_eta_MC_ttbar->GetXaxis()->SetLabelFont(42);
   electron1_eta_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   electron1_eta_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   electron1_eta_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   electron1_eta_MC_ttbar->GetXaxis()->SetTitleFont(42);
   electron1_eta_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   electron1_eta_MC_ttbar->GetYaxis()->SetLabelFont(42);
   electron1_eta_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   electron1_eta_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   electron1_eta_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   electron1_eta_MC_ttbar->GetYaxis()->SetTitleFont(42);
   electron1_eta_MC_ttbar->GetZaxis()->SetLabelFont(42);
   electron1_eta_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   electron1_eta_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   electron1_eta_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   electron1_eta_MC_ttbar->GetZaxis()->SetTitleFont(42);
   electron1_eta_MC_ttbar->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron1_eta_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("electron1_eta_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron1_eta_eff.pdf");
}
