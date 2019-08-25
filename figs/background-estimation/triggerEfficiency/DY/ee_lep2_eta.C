void ee_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:03 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-3.125,0.865988,3.125,1.087292);
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

   TProfile *electron2_eta_MC_ttbar = new TProfile("electron2_eta_MC_ttbar","ee final state - subleading electron",5, xAxis);
   electron2_eta_MC_ttbar->SetBinEntries(0,10);
   electron2_eta_MC_ttbar->SetBinEntries(1,3537);
   electron2_eta_MC_ttbar->SetBinEntries(2,6104);
   electron2_eta_MC_ttbar->SetBinEntries(3,20290);
   electron2_eta_MC_ttbar->SetBinEntries(4,6280);
   electron2_eta_MC_ttbar->SetBinEntries(5,3695);
   electron2_eta_MC_ttbar->SetBinContent(0,9);
   electron2_eta_MC_ttbar->SetBinContent(1,3445);
   electron2_eta_MC_ttbar->SetBinContent(2,5965);
   electron2_eta_MC_ttbar->SetBinContent(3,19841);
   electron2_eta_MC_ttbar->SetBinContent(4,6131);
   electron2_eta_MC_ttbar->SetBinContent(5,3595);
   electron2_eta_MC_ttbar->SetBinError(0,3);
   electron2_eta_MC_ttbar->SetBinError(1,0.002509107);
   electron2_eta_MC_ttbar->SetBinError(2,0.001755377);
   electron2_eta_MC_ttbar->SetBinError(3,0.000913363);
   electron2_eta_MC_ttbar->SetBinError(4,0.00176035);
   electron2_eta_MC_ttbar->SetBinError(5,0.002491849);
   electron2_eta_MC_ttbar->SetEntries(39916);

   electron2_eta_MC_ttbar->SetMinimum(0.8);
   electron2_eta_MC_ttbar->SetMaximum(1.1);
   electron2_eta_MC_ttbar->SetLineColor(1);
   electron2_eta_MC_ttbar->SetLineWidth(2);
   electron2_eta_MC_ttbar->SetMarkerColor(1);
   electron2_eta_MC_ttbar->SetMarkerStyle(20);
   electron2_eta_MC_ttbar->SetMarkerSize(1);

   electron2_eta_MC_ttbar->GetXaxis()->SetTitle(" #eta");
   electron2_eta_MC_ttbar->GetXaxis()->SetLabelFont(42);
   electron2_eta_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   electron2_eta_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   electron2_eta_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   electron2_eta_MC_ttbar->GetXaxis()->SetTitleFont(42);
   electron2_eta_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   electron2_eta_MC_ttbar->GetYaxis()->SetLabelFont(42);
   electron2_eta_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   electron2_eta_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   electron2_eta_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   electron2_eta_MC_ttbar->GetYaxis()->SetTitleFont(42);
   electron2_eta_MC_ttbar->GetZaxis()->SetLabelFont(42);
   electron2_eta_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   electron2_eta_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   electron2_eta_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   electron2_eta_MC_ttbar->GetZaxis()->SetTitleFont(42);
   electron2_eta_MC_ttbar->Draw("E1");

   TProfile *electron2_eta_MC_DY = new TProfile("electron2_eta_MC_DY","",5, xAxis);
   electron2_eta_MC_DY->SetBinEntries(1,179);
   electron2_eta_MC_DY->SetBinEntries(2,415);
   electron2_eta_MC_DY->SetBinEntries(3,1922);
   electron2_eta_MC_DY->SetBinEntries(4,539);
   electron2_eta_MC_DY->SetBinEntries(5,170);
   electron2_eta_MC_DY->SetBinContent(1,176);
   electron2_eta_MC_DY->SetBinContent(2,404);
   electron2_eta_MC_DY->SetBinContent(3,1872);
   electron2_eta_MC_DY->SetBinContent(4,531);
   electron2_eta_MC_DY->SetBinContent(5,165);
   electron2_eta_MC_DY->SetBinError(1,0.01383443);
   electron2_eta_MC_DY->SetBinError(2,0.008937963);
   electron2_eta_MC_DY->SetBinError(3,0.003532921);
   electron2_eta_MC_DY->SetBinError(4,0.006204198);
   electron2_eta_MC_DY->SetBinError(5,0.01669658);
   electron2_eta_MC_DY->SetEntries(3225);

   electron2_eta_MC_DY->SetLineColor(2);
   electron2_eta_MC_DY->SetLineWidth(2);
   electron2_eta_MC_DY->SetMarkerColor(2);
   electron2_eta_MC_DY->SetMarkerStyle(22);
   electron2_eta_MC_DY->SetMarkerSize(1.2);

   electron2_eta_MC_DY->GetXaxis()->SetTitle(" #eta");
   electron2_eta_MC_DY->GetXaxis()->SetLabelFont(42);
   electron2_eta_MC_DY->GetXaxis()->SetLabelSize(0.035);
   electron2_eta_MC_DY->GetXaxis()->SetTitleSize(0.035);
   electron2_eta_MC_DY->GetXaxis()->SetTitleOffset(1);
   electron2_eta_MC_DY->GetXaxis()->SetTitleFont(42);
   electron2_eta_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   electron2_eta_MC_DY->GetYaxis()->SetLabelFont(42);
   electron2_eta_MC_DY->GetYaxis()->SetLabelSize(0.035);
   electron2_eta_MC_DY->GetYaxis()->SetTitleSize(0.035);
   electron2_eta_MC_DY->GetYaxis()->SetTitleOffset(1);
   electron2_eta_MC_DY->GetYaxis()->SetTitleFont(42);
   electron2_eta_MC_DY->GetZaxis()->SetLabelFont(42);
   electron2_eta_MC_DY->GetZaxis()->SetLabelSize(0.035);
   electron2_eta_MC_DY->GetZaxis()->SetTitleSize(0.035);
   electron2_eta_MC_DY->GetZaxis()->SetTitleOffset(1);
   electron2_eta_MC_DY->GetZaxis()->SetTitleFont(42);
   electron2_eta_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron2_eta_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("electron2_eta_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron2_eta_eff.pdf");
}

