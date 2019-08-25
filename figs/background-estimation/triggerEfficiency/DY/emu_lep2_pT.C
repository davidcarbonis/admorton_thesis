void emu_lep2_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 21:00:05 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-37.5,0.1046733,337.5,1.898581);
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

   TProfile *muonElectron2_pT_MC_DY = new TProfile("muonElectron2_pT_MC_DY","",9, xAxis);
   muonElectron2_pT_MC_DY->SetBinEntries(1,21);
   muonElectron2_pT_MC_DY->SetBinEntries(2,3);
   muonElectron2_pT_MC_DY->SetBinEntries(3,1);
   muonElectron2_pT_MC_DY->SetBinEntries(4,2);
   muonElectron2_pT_MC_DY->SetBinEntries(5,4);
   muonElectron2_pT_MC_DY->SetBinEntries(6,5);
   muonElectron2_pT_MC_DY->SetBinEntries(7,1);
   muonElectron2_pT_MC_DY->SetBinEntries(8,6);
   muonElectron2_pT_MC_DY->SetBinEntries(9,7);
   muonElectron2_pT_MC_DY->SetBinContent(1,18);
   muonElectron2_pT_MC_DY->SetBinContent(2,3);
   muonElectron2_pT_MC_DY->SetBinContent(3,1);
   muonElectron2_pT_MC_DY->SetBinContent(4,2);
   muonElectron2_pT_MC_DY->SetBinContent(5,4);
   muonElectron2_pT_MC_DY->SetBinContent(6,5);
   muonElectron2_pT_MC_DY->SetBinContent(7,1);
   muonElectron2_pT_MC_DY->SetBinContent(8,6);
   muonElectron2_pT_MC_DY->SetBinContent(9,7);
   muonElectron2_pT_MC_DY->SetBinError(1,0.1042301);
   muonElectron2_pT_MC_DY->SetBinError(2,0.4151965);
   muonElectron2_pT_MC_DY->SetBinError(3,0.8);
   muonElectron2_pT_MC_DY->SetBinError(4,0.5527864);
   muonElectron2_pT_MC_DY->SetBinError(5,0.3312597);
   muonElectron2_pT_MC_DY->SetBinError(6,0.2752203);
   muonElectron2_pT_MC_DY->SetBinError(7,0.8);
   muonElectron2_pT_MC_DY->SetBinError(8,0.2352755);
   muonElectron2_pT_MC_DY->SetBinError(9,0.2054026);
   muonElectron2_pT_MC_DY->SetEntries(50);

   muonElectron2_pT_MC_DY->SetMinimum(0.);
   muonElectron2_pT_MC_DY->SetMaximum(1.7);
   muonElectron2_pT_MC_DY->SetLineColor(2);
   muonElectron2_pT_MC_DY->SetLineWidth(2);
   muonElectron2_pT_MC_DY->SetMarkerColor(2);
   muonElectron2_pT_MC_DY->SetMarkerStyle(22);
   muonElectron2_pT_MC_DY->SetMarkerSize(1.2);

   muonElectron2_pT_MC_DY->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron2_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_DY->GetXaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_DY->GetYaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_DY->Draw("E1");

   TProfile *muonElectron2_pT_MC_ttbar = new TProfile("muonElectron2_pT_MC_ttbar","e#mu final state - muon",9, xAxis);
   muonElectron2_pT_MC_ttbar->SetBinEntries(1,1579);
   muonElectron2_pT_MC_ttbar->SetBinEntries(2,290);
   muonElectron2_pT_MC_ttbar->SetBinEntries(3,241);
   muonElectron2_pT_MC_ttbar->SetBinEntries(4,316);
   muonElectron2_pT_MC_ttbar->SetBinEntries(5,440);
   muonElectron2_pT_MC_ttbar->SetBinEntries(6,176);
   muonElectron2_pT_MC_ttbar->SetBinEntries(7,109);
   muonElectron2_pT_MC_ttbar->SetBinEntries(8,174);
   muonElectron2_pT_MC_ttbar->SetBinEntries(9,51);
   muonElectron2_pT_MC_ttbar->SetBinContent(1,1354);
   muonElectron2_pT_MC_ttbar->SetBinContent(2,238);
   muonElectron2_pT_MC_ttbar->SetBinContent(3,201);
   muonElectron2_pT_MC_ttbar->SetBinContent(4,296);
   muonElectron2_pT_MC_ttbar->SetBinContent(5,409);
   muonElectron2_pT_MC_ttbar->SetBinContent(6,163);
   muonElectron2_pT_MC_ttbar->SetBinContent(7,109);
   muonElectron2_pT_MC_ttbar->SetBinContent(8,168);
   muonElectron2_pT_MC_ttbar->SetBinContent(9,49);
   muonElectron2_pT_MC_ttbar->SetBinError(1,0.007908783);
   muonElectron2_pT_MC_ttbar->SetBinError(2,0.02162423);
   muonElectron2_pT_MC_ttbar->SetBinError(3,0.02343769);
   muonElectron2_pT_MC_ttbar->SetBinError(4,0.01437133);
   muonElectron2_pT_MC_ttbar->SetBinError(5,0.012274);
   muonElectron2_pT_MC_ttbar->SetBinError(6,0.02169155);
   muonElectron2_pT_MC_ttbar->SetBinError(7,0.01465701);
   muonElectron2_pT_MC_ttbar->SetBinError(8,0.01721327);
   muonElectron2_pT_MC_ttbar->SetBinError(9,0.04282685);
   muonElectron2_pT_MC_ttbar->SetEntries(3376);

   muonElectron2_pT_MC_ttbar->SetLineColor(1);
   muonElectron2_pT_MC_ttbar->SetLineWidth(2);
   muonElectron2_pT_MC_ttbar->SetMarkerColor(1);
   muonElectron2_pT_MC_ttbar->SetMarkerStyle(20);
   muonElectron2_pT_MC_ttbar->SetMarkerSize(1);

   muonElectron2_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron2_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muonElectron2_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muonElectron2_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muonElectron2_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muonElectron2_pT_MC_ttbar->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.17,0.52,0.38,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron2_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron2_pT_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron2_pT_eff.pdf");
}
