void emu_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:59:55 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
   Canvas_1_n2->Range(-37.5,-0.06469541,337.5,1.925717);
   Canvas_1_n2->Range(-37.5,0.4125,337.5,1.2875);
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
   
   TProfile *muonElectron1_pT_MC_ttbar = new TProfile("muonElectron1_pT_MC_ttbar","e#mu final state - electron",9, xAxis);
   muonElectron1_pT_MC_ttbar->SetBinEntries(1,257);
   muonElectron1_pT_MC_ttbar->SetBinEntries(2,198);
   muonElectron1_pT_MC_ttbar->SetBinEntries(3,198);
   muonElectron1_pT_MC_ttbar->SetBinEntries(4,381);
   muonElectron1_pT_MC_ttbar->SetBinEntries(5,760);
   muonElectron1_pT_MC_ttbar->SetBinEntries(6,437);
   muonElectron1_pT_MC_ttbar->SetBinEntries(7,351);
   muonElectron1_pT_MC_ttbar->SetBinEntries(8,652);
   muonElectron1_pT_MC_ttbar->SetBinEntries(9,142);
   muonElectron1_pT_MC_ttbar->SetBinContent(1,180);
   muonElectron1_pT_MC_ttbar->SetBinContent(2,129);
   muonElectron1_pT_MC_ttbar->SetBinContent(3,124);
   muonElectron1_pT_MC_ttbar->SetBinContent(4,304);
   muonElectron1_pT_MC_ttbar->SetBinContent(5,717);
   muonElectron1_pT_MC_ttbar->SetBinContent(6,416);
   muonElectron1_pT_MC_ttbar->SetBinContent(7,338);
   muonElectron1_pT_MC_ttbar->SetBinContent(8,637);
   muonElectron1_pT_MC_ttbar->SetBinContent(9,142);
   muonElectron1_pT_MC_ttbar->SetBinError(1,0.0266253);
   muonElectron1_pT_MC_ttbar->SetBinError(2,0.03161999);
   muonElectron1_pT_MC_ttbar->SetBinError(3,0.03194351);
   muonElectron1_pT_MC_ttbar->SetBinError(4,0.01928317);
   muonElectron1_pT_MC_ttbar->SetBinError(5,0.008225084);
   muonElectron1_pT_MC_ttbar->SetBinError(6,0.01070048);
   muonElectron1_pT_MC_ttbar->SetBinError(7,0.01115564);
   muonElectron1_pT_MC_ttbar->SetBinError(8,0.006396549);
   muonElectron1_pT_MC_ttbar->SetBinError(9,0.01127008);
   muonElectron1_pT_MC_ttbar->SetEntries(3376);

   muonElectron1_pT_MC_ttbar->SetMinimum(0.5);
   muonElectron1_pT_MC_ttbar->SetMaximum(1.2);
   muonElectron1_pT_MC_ttbar->SetLineColor(1);
   muonElectron1_pT_MC_ttbar->SetLineWidth(2);
   muonElectron1_pT_MC_ttbar->SetMarkerColor(1);
   muonElectron1_pT_MC_ttbar->SetMarkerStyle(20);
   muonElectron1_pT_MC_ttbar->SetMarkerSize(1);

   muonElectron1_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron1_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetRange(1,1);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_ttbar->Draw("E1");
   
   TProfile *muonElectron1_pT_MC_DY = new TProfile("muonElectron1_pT_MC_DY","",9, xAxis);
   muonElectron1_pT_MC_DY->SetBinEntries(1,8);
   muonElectron1_pT_MC_DY->SetBinEntries(2,2);
   muonElectron1_pT_MC_DY->SetBinEntries(3,2);
   muonElectron1_pT_MC_DY->SetBinEntries(4,4);
   muonElectron1_pT_MC_DY->SetBinEntries(5,8);
   muonElectron1_pT_MC_DY->SetBinEntries(6,6);
   muonElectron1_pT_MC_DY->SetBinEntries(7,2);
   muonElectron1_pT_MC_DY->SetBinEntries(8,12);
   muonElectron1_pT_MC_DY->SetBinEntries(9,6);
   muonElectron1_pT_MC_DY->SetBinContent(1,8);
   muonElectron1_pT_MC_DY->SetBinContent(2,1);
   muonElectron1_pT_MC_DY->SetBinContent(3,2);
   muonElectron1_pT_MC_DY->SetBinContent(4,3);
   muonElectron1_pT_MC_DY->SetBinContent(5,8);
   muonElectron1_pT_MC_DY->SetBinContent(6,6);
   muonElectron1_pT_MC_DY->SetBinContent(7,2);
   muonElectron1_pT_MC_DY->SetBinContent(8,12);
   muonElectron1_pT_MC_DY->SetBinContent(9,5);
   muonElectron1_pT_MC_DY->SetBinError(1,0.1822346);
   muonElectron1_pT_MC_DY->SetBinError(2,0.3944272);
   muonElectron1_pT_MC_DY->SetBinError(3,0.5527864);
   muonElectron1_pT_MC_DY->SetBinError(4,0.3324536);
   muonElectron1_pT_MC_DY->SetBinError(5,0.1822346);
   muonElectron1_pT_MC_DY->SetBinError(6,0.2352755);
   muonElectron1_pT_MC_DY->SetBinError(7,0.5527864);
   muonElectron1_pT_MC_DY->SetBinError(8,0.1255147);
   muonElectron1_pT_MC_DY->SetBinError(9,0.2557809);
   muonElectron1_pT_MC_DY->SetEntries(50);

   muonElectron1_pT_MC_DY->SetLineColor(2);
   muonElectron1_pT_MC_DY->SetLineWidth(2);
   muonElectron1_pT_MC_DY->SetMarkerColor(2);
   muonElectron1_pT_MC_DY->SetMarkerStyle(22);
   muonElectron1_pT_MC_DY->SetMarkerSize(1.2);

   muonElectron1_pT_MC_DY->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron1_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_DY->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_DY->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_DY->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_DY->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_DY->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_DY->GetYaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_MC_DY->Draw("same E1");


   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron1_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron1_pT_MC_DY", "DY Efficiency", "PEL");

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron1_pT_eff.pdf");
}
