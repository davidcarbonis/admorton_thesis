void mumu_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:23 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-37.5,0.873714,337.5,1.070528);
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
   
   TProfile *muon2_pT_MC_DY = new TProfile("muon2_pT_MC_DY","",9, xAxis);
   muon2_pT_MC_DY->SetBinEntries(1,1677);
   muon2_pT_MC_DY->SetBinEntries(2,1360);
   muon2_pT_MC_DY->SetBinEntries(3,1294);
   muon2_pT_MC_DY->SetBinEntries(4,2527);
   muon2_pT_MC_DY->SetBinEntries(5,5228);
   muon2_pT_MC_DY->SetBinEntries(6,3536);
   muon2_pT_MC_DY->SetBinEntries(7,3106);
   muon2_pT_MC_DY->SetBinEntries(8,6289);
   muon2_pT_MC_DY->SetBinEntries(9,430);
   muon2_pT_MC_DY->SetBinContent(1,1548);
   muon2_pT_MC_DY->SetBinContent(2,1260);
   muon2_pT_MC_DY->SetBinContent(3,1221);
   muon2_pT_MC_DY->SetBinContent(4,2502);
   muon2_pT_MC_DY->SetBinContent(5,5199);
   muon2_pT_MC_DY->SetBinContent(6,3517);
   muon2_pT_MC_DY->SetBinContent(7,3090);
   muon2_pT_MC_DY->SetBinContent(8,6252);
   muon2_pT_MC_DY->SetBinContent(9,428);
   muon2_pT_MC_DY->SetBinError(1,0.005988433);
   muon2_pT_MC_DY->SetBinError(2,0.006591862);
   muon2_pT_MC_DY->SetBinError(3,0.006080497);
   muon2_pT_MC_DY->SetBinError(4,0.002032019);
   muon2_pT_MC_DY->SetBinError(5,0.001045892);
   muon2_pT_MC_DY->SetBinError(6,0.001306213);
   muon2_pT_MC_DY->SetBinError(7,0.00139202);
   muon2_pT_MC_DY->SetBinError(8,0.0009614423);
   muon2_pT_MC_DY->SetBinError(9,0.005273723);
   muon2_pT_MC_DY->SetEntries(25447);

   muon2_pT_MC_DY->SetMinimum(0.);
   muon2_pT_MC_DY->SetMaximum(1.1);
   muon2_pT_MC_DY->SetLineColor(2);
   muon2_pT_MC_DY->SetLineWidth(2);
   muon2_pT_MC_DY->SetMarkerColor(2);
   muon2_pT_MC_DY->SetMarkerStyle(22);
   muon2_pT_MC_DY->SetMarkerSize(1.2);

   muon2_pT_MC_DY->GetXaxis()->SetTitle(" Subleading muon p_{T} (GeV)");
   muon2_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   muon2_pT_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muon2_pT_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muon2_pT_MC_DY->GetXaxis()->SetTitleOffset(1);
   muon2_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   muon2_pT_MC_DY->GetYaxis()->SetTitle(" Trigger Efficiency");
   muon2_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   muon2_pT_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muon2_pT_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muon2_pT_MC_DY->GetYaxis()->SetTitleOffset(1);
   muon2_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   muon2_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   muon2_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muon2_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muon2_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   muon2_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   muon2_pT_MC_DY->Draw("E1");

   TProfile *muon2_pT_MC_ttbar = new TProfile("muon2_pT_MC_ttbar","#mu#mu final state - subleading muon",9, xAxis);
   muon2_pT_MC_ttbar->SetBinEntries(1,9205);
   muon2_pT_MC_ttbar->SetBinEntries(2,6758);
   muon2_pT_MC_ttbar->SetBinEntries(3,6510);
   muon2_pT_MC_ttbar->SetBinEntries(4,10493);
   muon2_pT_MC_ttbar->SetBinEntries(5,13726);
   muon2_pT_MC_ttbar->SetBinEntries(6,4285);
   muon2_pT_MC_ttbar->SetBinEntries(7,1864);
   muon2_pT_MC_ttbar->SetBinEntries(8,1707);
   muon2_pT_MC_ttbar->SetBinEntries(9,91);
   muon2_pT_MC_ttbar->SetBinContent(1,8170);
   muon2_pT_MC_ttbar->SetBinContent(2,6455);
   muon2_pT_MC_ttbar->SetBinContent(3,6329);
   muon2_pT_MC_ttbar->SetBinContent(4,10428);
   muon2_pT_MC_ttbar->SetBinContent(5,13672);
   muon2_pT_MC_ttbar->SetBinContent(6,4270);
   muon2_pT_MC_ttbar->SetBinContent(7,1854);
   muon2_pT_MC_ttbar->SetBinContent(8,1700);
   muon2_pT_MC_ttbar->SetBinContent(9,91);
   muon2_pT_MC_ttbar->SetBinError(1,0.002859985);
   muon2_pT_MC_ttbar->SetBinError(2,0.002248869);
   muon2_pT_MC_ttbar->SetBinError(3,0.001853022);
   muon2_pT_MC_ttbar->SetBinError(4,0.0007333853);
   muon2_pT_MC_ttbar->SetBinError(5,0.0005179148);
   muon2_pT_MC_ttbar->SetBinError(6,0.0009856831);
   muon2_pT_MC_ttbar->SetBinError(7,0.00195137);
   muon2_pT_MC_ttbar->SetBinError(8,0.001888019);
   muon2_pT_MC_ttbar->SetBinError(9,0.01753065);
   muon2_pT_MC_ttbar->SetEntries(54639);

   muon2_pT_MC_ttbar->SetLineColor(1);
   muon2_pT_MC_ttbar->SetLineWidth(2);
   muon2_pT_MC_ttbar->SetMarkerColor(1);
   muon2_pT_MC_ttbar->SetMarkerStyle(20);
   muon2_pT_MC_ttbar->SetMarkerSize(1);

   muon2_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muon2_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muon2_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muon2_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muon2_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muon2_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muon2_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muon2_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muon2_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muon2_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muon2_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muon2_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muon2_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muon2_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muon2_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muon2_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muon2_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muon2_pT_MC_ttbar->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon2_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muon2_pT_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muon2_pT_eff.pdf");
}
