void emu_lep1_pT()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 20:50:28 2019) by ROOT version 6.18/00

   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,1280,925);
   gStyle->SetOptStat(0);
//   Canvas_1_n2->Range(-0.4860759,-0.2025316,2.551899,1.063291); // tmtt plot range
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
   
   TProfile *muonElectron1_pT_MC = new TProfile("muonElectron1_pT_MC","e#mu final state - electron",9, xAxis);
   muonElectron1_pT_MC->SetBinEntries(1,257);
   muonElectron1_pT_MC->SetBinEntries(2,198);
   muonElectron1_pT_MC->SetBinEntries(3,198);
   muonElectron1_pT_MC->SetBinEntries(4,381);
   muonElectron1_pT_MC->SetBinEntries(5,760);
   muonElectron1_pT_MC->SetBinEntries(6,437);
   muonElectron1_pT_MC->SetBinEntries(7,351);
   muonElectron1_pT_MC->SetBinEntries(8,652);
   muonElectron1_pT_MC->SetBinEntries(9,142);
   muonElectron1_pT_MC->SetBinContent(1,180);
   muonElectron1_pT_MC->SetBinContent(2,129);
   muonElectron1_pT_MC->SetBinContent(3,124);
   muonElectron1_pT_MC->SetBinContent(4,304);
   muonElectron1_pT_MC->SetBinContent(5,717);
   muonElectron1_pT_MC->SetBinContent(6,416);
   muonElectron1_pT_MC->SetBinContent(7,338);
   muonElectron1_pT_MC->SetBinContent(8,637);
   muonElectron1_pT_MC->SetBinContent(9,142);
   muonElectron1_pT_MC->SetBinError(1,0.0266253);
   muonElectron1_pT_MC->SetBinError(2,0.03161999);
   muonElectron1_pT_MC->SetBinError(3,0.03194351);
   muonElectron1_pT_MC->SetBinError(4,0.01928317);
   muonElectron1_pT_MC->SetBinError(5,0.008225084);
   muonElectron1_pT_MC->SetBinError(6,0.01070048);
   muonElectron1_pT_MC->SetBinError(7,0.01115564);
   muonElectron1_pT_MC->SetBinError(8,0.006396549);
   muonElectron1_pT_MC->SetBinError(9,0.01127008);
   muonElectron1_pT_MC->SetEntries(3376);

   muonElectron1_pT_MC->SetMinimum(0.5);
   muonElectron1_pT_MC->SetMaximum(1.1);
   muonElectron1_pT_MC->SetLineColor(1);
   muonElectron1_pT_MC->SetLineWidth(2);
   muonElectron1_pT_MC->SetMarkerColor(1);
   muonElectron1_pT_MC->SetMarkerStyle(20);
   muonElectron1_pT_MC->SetMarkerSize(1);

   muonElectron1_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron1_pT_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_MC->GetYaxis()->SetRange(1,1);
   muonElectron1_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetYaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_pT_MC->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_pT_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->Draw("E1");
   
   TProfile *muonElectron1_pT_data = new TProfile("muonElectron1_pT_data","",9, xAxis);
   muonElectron1_pT_data->SetBinEntries(1,129);
   muonElectron1_pT_data->SetBinEntries(2,124);
   muonElectron1_pT_data->SetBinEntries(3,139);
   muonElectron1_pT_data->SetBinEntries(4,246);
   muonElectron1_pT_data->SetBinEntries(5,453);
   muonElectron1_pT_data->SetBinEntries(6,260);
   muonElectron1_pT_data->SetBinEntries(7,185);
   muonElectron1_pT_data->SetBinEntries(8,516);
   muonElectron1_pT_data->SetBinEntries(9,146);
   muonElectron1_pT_data->SetBinEntries(10,37);
   muonElectron1_pT_data->SetBinContent(1,84);
   muonElectron1_pT_data->SetBinContent(2,70);
   muonElectron1_pT_data->SetBinContent(3,88);
   muonElectron1_pT_data->SetBinContent(4,202);
   muonElectron1_pT_data->SetBinContent(5,419);
   muonElectron1_pT_data->SetBinContent(6,247);
   muonElectron1_pT_data->SetBinContent(7,179);
   muonElectron1_pT_data->SetBinContent(8,499);
   muonElectron1_pT_data->SetBinContent(9,143);
   muonElectron1_pT_data->SetBinContent(10,37);
   muonElectron1_pT_data->SetBinError(1,0.04008989);
   muonElectron1_pT_data->SetBinError(2,0.04180873);
   muonElectron1_pT_data->SetBinError(3,0.03871977);
   muonElectron1_pT_data->SetBinError(4,0.02371274);
   muonElectron1_pT_data->SetBinError(5,0.01235394);
   muonElectron1_pT_data->SetBinError(6,0.01492792);
   muonElectron1_pT_data->SetBinError(7,0.0162156);
   muonElectron1_pT_data->SetBinError(8,0.008423999);
   muonElectron1_pT_data->SetBinError(9,0.01690161);
   muonElectron1_pT_data->SetBinError(10,6.082763);
   muonElectron1_pT_data->SetEntries(2235);

   muonElectron1_pT_data->SetLineColor(2);
   muonElectron1_pT_data->SetLineWidth(2);
   muonElectron1_pT_data->SetMarkerColor(2);
   muonElectron1_pT_data->SetMarkerStyle(22);
   muonElectron1_pT_data->SetMarkerSize(1.2);

   muonElectron1_pT_data->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron1_pT_data->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetXaxis()->SetLabelSize(0.035);
   muonElectron1_pT_data->GetXaxis()->SetTitleSize(0.035);
   muonElectron1_pT_data->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_data->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_data->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetYaxis()->SetLabelSize(0.035);
   muonElectron1_pT_data->GetYaxis()->SetTitleSize(0.035);
   muonElectron1_pT_data->GetYaxis()->SetTitleOffset(1);
   muonElectron1_pT_data->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_data->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetZaxis()->SetLabelSize(0.035);
   muonElectron1_pT_data->GetZaxis()->SetTitleSize(0.035);
   muonElectron1_pT_data->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_data->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_data->Draw("same E1");;
   
   TH1D *p_muonElectron1_pT_SF__10 = new TH1D("p_muonElectron1_pT_SF__10","",9, xAxis);
   p_muonElectron1_pT_SF__10->SetBinContent(1,0.9297158);
   p_muonElectron1_pT_SF__10->SetBinContent(2,0.8664666);
   p_muonElectron1_pT_SF__10->SetBinContent(3,1.010907);
   p_muonElectron1_pT_SF__10->SetBinContent(4,1.029124);
   p_muonElectron1_pT_SF__10->SetBinContent(5,0.9804157);
   p_muonElectron1_pT_SF__10->SetBinContent(6,0.9979567);
   p_muonElectron1_pT_SF__10->SetBinContent(7,1.004782);
   p_muonElectron1_pT_SF__10->SetBinContent(8,0.9898263);
   p_muonElectron1_pT_SF__10->SetBinContent(9,0.9794521);
   p_muonElectron1_pT_SF__10->SetBinError(1,0.1003177);
   p_muonElectron1_pT_SF__10->SetBinError(2,0.0992269);
   p_muonElectron1_pT_SF__10->SetBinError(3,0.1118618);
   p_muonElectron1_pT_SF__10->SetBinError(4,0.08417261);
   p_muonElectron1_pT_SF__10->SetBinError(5,0.05819487);
   p_muonElectron1_pT_SF__10->SetBinError(6,0.07816288);
   p_muonElectron1_pT_SF__10->SetBinError(7,0.09128816);
   p_muonElectron1_pT_SF__10->SetBinError(8,0.05832191);
   p_muonElectron1_pT_SF__10->SetBinError(9,0.1154406);
   p_muonElectron1_pT_SF__10->SetEntries(1042.868);

   p_muonElectron1_pT_SF__10->SetLineColor(8);
   p_muonElectron1_pT_SF__10->SetLineWidth(2);
   p_muonElectron1_pT_SF__10->SetMarkerColor(8);
   p_muonElectron1_pT_SF__10->SetMarkerStyle(33);
   p_muonElectron1_pT_SF__10->SetMarkerSize(1.5);

   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitle(" p_{T} (GeV)");
   p_muonElectron1_pT_SF__10->GetXaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetLabelSize(0.035);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleSize(0.035);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleOffset(1);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitle(" Efficiency");
   p_muonElectron1_pT_SF__10->GetYaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetLabelSize(0.035);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleSize(0.035);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleOffset(1);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleOffset(1);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->Draw("same E1");;

   TLegend *leg = new TLegend(0.45,0.27,0.52,0.48,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron1_pT_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron1_pT_MC", "MC Efficiency", "PEL");
   entry=leg->AddEntry("p_muonElectron1_pT_SF__10", "Data/MC SF", "PEL");
   leg->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
   Canvas_1_n2->SaveAs("muonElectron1_pT_SF.pdf");
}
