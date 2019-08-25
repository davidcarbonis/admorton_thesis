void mumu_lep2_eta()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:41 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-3.125,0.9513972,3.125,1.019548);

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
   
   TProfile *muon2_eta_MC_ttbar = new TProfile("muon2_eta_MC_ttbar","#mu#mu final state - subleading muon",5, xAxis);
   muon2_eta_MC_ttbar->SetBinEntries(1,4189);
   muon2_eta_MC_ttbar->SetBinEntries(2,6054);
   muon2_eta_MC_ttbar->SetBinEntries(3,18192);
   muon2_eta_MC_ttbar->SetBinEntries(4,6105);
   muon2_eta_MC_ttbar->SetBinEntries(5,4136);
   muon2_eta_MC_ttbar->SetBinContent(1,4134);
   muon2_eta_MC_ttbar->SetBinContent(2,6008);
   muon2_eta_MC_ttbar->SetBinContent(3,18061);
   muon2_eta_MC_ttbar->SetBinContent(4,6058);
   muon2_eta_MC_ttbar->SetBinContent(5,4083);
   muon2_eta_MC_ttbar->SetBinError(1,0.001701601);
   muon2_eta_MC_ttbar->SetBinError(2,0.001093898);
   muon2_eta_MC_ttbar->SetBinError(3,0.0005781885);
   muon2_eta_MC_ttbar->SetBinError(4,0.001094698);
   muon2_eta_MC_ttbar->SetBinError(5,0.001696361);
   muon2_eta_MC_ttbar->SetEntries(38676);

   muon2_eta_MC_ttbar->SetMinimum(0.8);
   muon2_eta_MC_ttbar->SetMaximum(1.1);
   muon2_eta_MC_ttbar->SetLineColor(1);
   muon2_eta_MC_ttbar->SetLineWidth(2);
   muon2_eta_MC_ttbar->SetMarkerColor(1);
   muon2_eta_MC_ttbar->SetMarkerStyle(20);
   muon2_eta_MC_ttbar->SetMarkerSize(1);
   
   muon2_eta_MC_ttbar->GetXaxis()->SetTitle(" #eta");
   muon2_eta_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muon2_eta_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muon2_eta_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muon2_eta_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muon2_eta_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muon2_eta_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muon2_eta_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muon2_eta_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muon2_eta_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muon2_eta_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muon2_eta_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muon2_eta_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muon2_eta_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muon2_eta_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muon2_eta_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muon2_eta_MC_ttbar->Draw("E1");

   TProfile *muon2_eta_MC_DY = new TProfile("muon2_eta_MC_DY","",5, xAxis);
   muon2_eta_MC_DY->SetBinEntries(1,2923);
   muon2_eta_MC_DY->SetBinEntries(2,3669);
   muon2_eta_MC_DY->SetBinEntries(3,9388);
   muon2_eta_MC_DY->SetBinEntries(4,3708);
   muon2_eta_MC_DY->SetBinEntries(5,2722);
   muon2_eta_MC_DY->SetBinContent(1,2861);
   muon2_eta_MC_DY->SetBinContent(2,3646);
   muon2_eta_MC_DY->SetBinContent(3,9327);
   muon2_eta_MC_DY->SetBinContent(4,3683);
   muon2_eta_MC_DY->SetBinContent(5,2692);
   muon2_eta_MC_DY->SetBinError(1,0.002557033);
   muon2_eta_MC_DY->SetBinError(2,0.001356557);
   muon2_eta_MC_DY->SetBinError(3,0.000797163);
   muon2_eta_MC_DY->SetBinError(4,0.001387475);
   muon2_eta_MC_DY->SetBinError(5,0.00203022);
   muon2_eta_MC_DY->SetEntries(22410);


   muon2_eta_MC_DY->SetLineColor(2);
   muon2_eta_MC_DY->SetLineWidth(2);
   muon2_eta_MC_DY->SetMarkerColor(2);
   muon2_eta_MC_DY->SetMarkerStyle(22);
   muon2_eta_MC_DY->SetMarkerSize(1.2);

   muon2_eta_MC_DY->GetXaxis()->SetTitle(" #eta");
   muon2_eta_MC_DY->GetXaxis()->SetLabelFont(42);
   muon2_eta_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muon2_eta_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muon2_eta_MC_DY->GetXaxis()->SetTitleOffset(1);
   muon2_eta_MC_DY->GetXaxis()->SetTitleFont(42);
   muon2_eta_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_MC_DY->GetYaxis()->SetLabelFont(42);
   muon2_eta_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muon2_eta_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muon2_eta_MC_DY->GetYaxis()->SetTitleOffset(1);
   muon2_eta_MC_DY->GetYaxis()->SetTitleFont(42);
   muon2_eta_MC_DY->GetZaxis()->SetLabelFont(42);
   muon2_eta_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muon2_eta_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muon2_eta_MC_DY->GetZaxis()->SetTitleOffset(1);
   muon2_eta_MC_DY->GetZaxis()->SetTitleFont(42);
   muon2_eta_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon2_eta_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muon2_eta_MC_DY", "DY Efficiency", "PEL");

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muon2_eta_eff.pdf");
}
