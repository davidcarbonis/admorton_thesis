void ee_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 25 20:58:34 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);

//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
   Canvas_1_n2->Range(-37.5,-0.1384346,337.5,1.245911);
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
   
   TProfile *electron1_pT_MC_ttbar = new TProfile("electron1_pT_MC_ttbar","ee final state - leading electron",9, xAxis);
   electron1_pT_MC_ttbar->SetBinEntries(1,75);
   electron1_pT_MC_ttbar->SetBinEntries(2,272);
   electron1_pT_MC_ttbar->SetBinEntries(3,566);
   electron1_pT_MC_ttbar->SetBinEntries(4,2546);
   electron1_pT_MC_ttbar->SetBinEntries(5,10467);
   electron1_pT_MC_ttbar->SetBinEntries(6,8372);
   electron1_pT_MC_ttbar->SetBinEntries(7,6548);
   electron1_pT_MC_ttbar->SetBinEntries(8,12878);
   electron1_pT_MC_ttbar->SetBinEntries(9,2046);
   electron1_pT_MC_ttbar->SetBinContent(1,38);
   electron1_pT_MC_ttbar->SetBinContent(2,31);
   electron1_pT_MC_ttbar->SetBinContent(3,235);
   electron1_pT_MC_ttbar->SetBinContent(4,2254);
   electron1_pT_MC_ttbar->SetBinContent(5,10185);
   electron1_pT_MC_ttbar->SetBinContent(6,8252);
   electron1_pT_MC_ttbar->SetBinContent(7,6472);
   electron1_pT_MC_ttbar->SetBinContent(8,12758);
   electron1_pT_MC_ttbar->SetBinContent(9,2035);
   electron1_pT_MC_ttbar->SetBinError(1,0.05498251);
   electron1_pT_MC_ttbar->SetBinError(2,0.0167941);
   electron1_pT_MC_ttbar->SetBinError(3,0.01817498);
   electron1_pT_MC_ttbar->SetBinError(4,0.005637135);
   electron1_pT_MC_ttbar->SetBinError(5,0.001417546);
   electron1_pT_MC_ttbar->SetBinError(6,0.001202607);
   electron1_pT_MC_ttbar->SetBinError(7,0.001255041);
   electron1_pT_MC_ttbar->SetBinError(8,0.0007839693);
   electron1_pT_MC_ttbar->SetBinError(9,0.001839205);
   electron1_pT_MC_ttbar->SetEntries(43770);

   electron1_pT_MC_ttbar->SetMinimum(0.5);
   electron1_pT_MC_ttbar->SetMaximum(1.1);
   electron1_pT_MC_ttbar->SetLineColor(1);
   electron1_pT_MC_ttbar->SetLineWidth(2);
   electron1_pT_MC_ttbar->SetMarkerColor(1);
   electron1_pT_MC_ttbar->SetMarkerStyle(20);
   electron1_pT_MC_ttbar->SetMarkerSize(1);

   electron1_pT_MC_ttbar->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron1_pT_MC_ttbar->GetXaxis()->SetLabelFont(42);
   electron1_pT_MC_ttbar->GetXaxis()->SetLabelSize(0.035);
   electron1_pT_MC_ttbar->GetXaxis()->SetTitleSize(0.035);
   electron1_pT_MC_ttbar->GetXaxis()->SetTitleOffset(1);
   electron1_pT_MC_ttbar->GetXaxis()->SetTitleFont(42);
   electron1_pT_MC_ttbar->GetYaxis()->SetTitle(" Efficiency");
   electron1_pT_MC_ttbar->GetYaxis()->SetLabelFont(42);
   electron1_pT_MC_ttbar->GetYaxis()->SetLabelSize(0.035);
   electron1_pT_MC_ttbar->GetYaxis()->SetTitleSize(0.035);
   electron1_pT_MC_ttbar->GetYaxis()->SetTitleOffset(1);
   electron1_pT_MC_ttbar->GetYaxis()->SetTitleFont(42);
   electron1_pT_MC_ttbar->GetZaxis()->SetLabelFont(42);
   electron1_pT_MC_ttbar->GetZaxis()->SetLabelSize(0.035);
   electron1_pT_MC_ttbar->GetZaxis()->SetTitleSize(0.035);
   electron1_pT_MC_ttbar->GetZaxis()->SetTitleOffset(1);
   electron1_pT_MC_ttbar->GetZaxis()->SetTitleFont(42);
   electron1_pT_MC_ttbar->Draw("E1");

   TProfile *electron1_pT_MC_DY = new TProfile("electron1_pT_MC_DY","",9, xAxis)
   electron1_pT_MC_DY->SetBinEntries(2,2);
   electron1_pT_MC_DY->SetBinEntries(3,7);
   electron1_pT_MC_DY->SetBinEntries(4,27);
   electron1_pT_MC_DY->SetBinEntries(5,127);
   electron1_pT_MC_DY->SetBinEntries(6,179);
   electron1_pT_MC_DY->SetBinEntries(7,250);
   electron1_pT_MC_DY->SetBinEntries(8,1535);
   electron1_pT_MC_DY->SetBinEntries(9,1203);
   electron1_pT_MC_DY->SetBinContent(3,4);
   electron1_pT_MC_DY->SetBinContent(4,23);
   electron1_pT_MC_DY->SetBinContent(5,121);
   electron1_pT_MC_DY->SetBinContent(6,175);
   electron1_pT_MC_DY->SetBinContent(7,248);
   electron1_pT_MC_DY->SetBinContent(8,1532);
   electron1_pT_MC_DY->SetBinContent(9,1142);
   electron1_pT_MC_DY->SetBinError(3,0.221335);
   electron1_pT_MC_DY->SetBinError(4,0.08828624);
   electron1_pT_MC_DY->SetBinError(5,0.02334927);
   electron1_pT_MC_DY->SetBinError(6,0.01491585);
   electron1_pT_MC_DY->SetBinError(7,0.009038229);
   electron1_pT_MC_DY->SetBinError(8,0.001635523);
   electron1_pT_MC_DY->SetBinError(9,0.006064209);
   electron1_pT_MC_DY->SetEntries(3330);

   electron1_pT_MC_DY->SetLineColor(2);
   electron1_pT_MC_DY->SetLineWidth(2);
   electron1_pT_MC_DY->SetMarkerColor(2);
   electron1_pT_MC_DY->SetMarkerStyle(22);
   electron1_pT_MC_DY->SetMarkerSize(1.2);

   electron1_pT_MC_DY->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron1_pT_MC_DY->GetXaxis()->SetLabelFont(42);
   electron1_pT_MC_DY->GetXaxis()->SetLabelSize(0.035);
   electron1_pT_MC_DY->GetXaxis()->SetTitleSize(0.035);
   electron1_pT_MC_DY->GetXaxis()->SetTitleOffset(1);
   electron1_pT_MC_DY->GetXaxis()->SetTitleFont(42);
   electron1_pT_MC_DY->GetYaxis()->SetTitle(" Efficiency");
   electron1_pT_MC_DY->GetYaxis()->SetLabelFont(42);
   electron1_pT_MC_DY->GetYaxis()->SetLabelSize(0.035);
   electron1_pT_MC_DY->GetYaxis()->SetTitleSize(0.035);
   electron1_pT_MC_DY->GetYaxis()->SetTitleOffset(1);
   electron1_pT_MC_DY->GetYaxis()->SetTitleFont(42);
   electron1_pT_MC_DY->GetZaxis()->SetLabelFont(42);
   electron1_pT_MC_DY->GetZaxis()->SetLabelSize(0.035);
   electron1_pT_MC_DY->GetZaxis()->SetTitleSize(0.035);
   electron1_pT_MC_DY->GetZaxis()->SetTitleOffset(1);
   electron1_pT_MC_DY->GetZaxis()->SetTitleFont(42);
   electron1_pT_MC_DY->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron1_pT_MC_ttbar", "t#bar{t} Efficiency", "PEL");
   entry=leg->AddEntry("electron1_pT_MC_DY", "DY Efficiency", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("electron1_pT_eff.pdf");
}
