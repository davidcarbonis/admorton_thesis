void emu_lep2_pT_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 21:08:35 2019) by ROOT version 6.18/00

   // Set up cavas
   int W = 1280;
   int H = 1024;
   int H_ref = 925; 
   int W_ref = 1024; 

   // references for T, B, L, R
   float T = 0.08*H_ref;
   float B = 0.12*H_ref; 
   float L = 0.12*W_ref;
   float R = 0.04*W_ref;

   TCanvas *c1 = new TCanvas("c1","c1",50,50,W,H);
   gStyle->SetOptStat(0);
   c1->cd();
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetLeftMargin( L/W );
   c1->SetRightMargin( R/W );
   c1->SetTopMargin( T/H );
   c1->SetBottomMargin( B/H );
   c1->SetTickx(0);
   c1->SetTicky(0);

// ------------>Primitives in pad: canvy_1
   TPad *canvy_1 = new TPad("canvy_1", "newpad",0.01,0.315,0.99,0.99);
   canvy_1->Draw();
   canvy_1->cd();
   canvy_1->SetFillColor(0);
   canvy_1->SetBorderMode(0);

   canvy_1->SetLeftMargin( L/W );
   canvy_1->SetRightMargin( R/W );
   canvy_1->SetTopMargin( T/H );
   canvy_1->SetBottomMargin( B/H * 0.3 );

   canvy_1->SetFrameFillStyle(0);
   canvy_1->SetFrameBorderMode(0);
   canvy_1->SetGridy();

   Double_t xAxis[10] = {0, 15, 20, 25, 35, 60, 80, 100, 200, 300};

   TProfile *muonElectron2_pT_MC = new TProfile("muonElectron2_pT_MC","e#mu final state - muon",9, xAxis);
   muonElectron2_pT_MC->SetBinEntries(1,1579);
   muonElectron2_pT_MC->SetBinEntries(2,290);
   muonElectron2_pT_MC->SetBinEntries(3,241);
   muonElectron2_pT_MC->SetBinEntries(4,316);
   muonElectron2_pT_MC->SetBinEntries(5,440);
   muonElectron2_pT_MC->SetBinEntries(6,176);
   muonElectron2_pT_MC->SetBinEntries(7,109);
   muonElectron2_pT_MC->SetBinEntries(8,174);
   muonElectron2_pT_MC->SetBinEntries(9,51);
   muonElectron2_pT_MC->SetBinContent(1,1354);
   muonElectron2_pT_MC->SetBinContent(2,238);
   muonElectron2_pT_MC->SetBinContent(3,201);
   muonElectron2_pT_MC->SetBinContent(4,296);
   muonElectron2_pT_MC->SetBinContent(5,409);
   muonElectron2_pT_MC->SetBinContent(6,163);
   muonElectron2_pT_MC->SetBinContent(7,109);
   muonElectron2_pT_MC->SetBinContent(8,168);
   muonElectron2_pT_MC->SetBinContent(9,49);
   muonElectron2_pT_MC->SetBinError(1,0.007908783);
   muonElectron2_pT_MC->SetBinError(2,0.02162423);
   muonElectron2_pT_MC->SetBinError(3,0.02343769);
   muonElectron2_pT_MC->SetBinError(4,0.01437133);
   muonElectron2_pT_MC->SetBinError(5,0.012274);
   muonElectron2_pT_MC->SetBinError(6,0.02169155);
   muonElectron2_pT_MC->SetBinError(7,0.01465701);
   muonElectron2_pT_MC->SetBinError(8,0.01721327);
   muonElectron2_pT_MC->SetBinError(9,0.04282685);
   muonElectron2_pT_MC->SetEntries(3376);

   muonElectron2_pT_MC->SetMinimum(0.5);
   muonElectron2_pT_MC->SetMaximum(1.2);
   muonElectron2_pT_MC->SetLineColor(1);
   muonElectron2_pT_MC->SetLineWidth(2);
   muonElectron2_pT_MC->SetMarkerColor(1);
   muonElectron2_pT_MC->SetMarkerStyle(20);
   muonElectron2_pT_MC->SetMarkerSize(1);

   muonElectron2_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron2_pT_MC->GetXaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetXaxis()->SetLabelOffset(999);
   muonElectron2_pT_MC->GetXaxis()->SetLabelSize(0.05);
   muonElectron2_pT_MC->GetXaxis()->SetTitleSize(0.08);
   muonElectron2_pT_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC->GetXaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->GetYaxis()->SetTitle(" Efficiency");
//   muonElectron2_pT_MC->GetYaxis()->SetNdivisions(506);
   muonElectron2_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetYaxis()->SetLabelOffset(0.01);
   muonElectron2_pT_MC->GetYaxis()->SetLabelSize(0.062);
   muonElectron2_pT_MC->GetYaxis()->SetTitleSize(0.08);
   muonElectron2_pT_MC->GetYaxis()->SetTitleOffset(0.58);
   muonElectron2_pT_MC->GetYaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->GetZaxis()->SetLabelFont(42);
   muonElectron2_pT_MC->GetZaxis()->SetLabelOffset(0.007);
   muonElectron2_pT_MC->GetZaxis()->SetLabelSize(0.05);
   muonElectron2_pT_MC->GetZaxis()->SetTitleSize(0.08);
   muonElectron2_pT_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron2_pT_MC->GetZaxis()->SetTitleFont(42);
   muonElectron2_pT_MC->Draw("E1");
   
   TProfile *muonElectron2_pT_data = new TProfile("muonElectron2_pT_data","",9, xAxis);
   muonElectron2_pT_data->SetBinEntries(1,735);
   muonElectron2_pT_data->SetBinEntries(2,180);
   muonElectron2_pT_data->SetBinEntries(3,164);
   muonElectron2_pT_data->SetBinEntries(4,213);
   muonElectron2_pT_data->SetBinEntries(5,338);
   muonElectron2_pT_data->SetBinEntries(6,135);
   muonElectron2_pT_data->SetBinEntries(7,97);
   muonElectron2_pT_data->SetBinEntries(8,230);
   muonElectron2_pT_data->SetBinEntries(9,104);
   muonElectron2_pT_data->SetBinEntries(10,39);
   muonElectron2_pT_data->SetBinContent(1,574);
   muonElectron2_pT_data->SetBinContent(2,142);
   muonElectron2_pT_data->SetBinContent(3,138);
   muonElectron2_pT_data->SetBinContent(4,205);
   muonElectron2_pT_data->SetBinContent(5,327);
   muonElectron2_pT_data->SetBinContent(6,129);
   muonElectron2_pT_data->SetBinContent(7,94);
   muonElectron2_pT_data->SetBinContent(8,219);
   muonElectron2_pT_data->SetBinContent(9,102);
   muonElectron2_pT_data->SetBinContent(10,38);
   muonElectron2_pT_data->SetBinError(1,0.01383624);
   muonElectron2_pT_data->SetBinError(2,0.02973811);
   muonElectron2_pT_data->SetBinError(3,0.02887152);
   muonElectron2_pT_data->SetBinError(4,0.01544262);
   muonElectron2_pT_data->SetBinError(5,0.01092856);
   muonElectron2_pT_data->SetBinError(6,0.02201397);
   muonElectron2_pT_data->SetBinError(7,0.02519335);
   muonElectron2_pT_data->SetBinError(8,0.01589039);
   muonElectron2_pT_data->SetBinError(9,0.02146468);
   muonElectron2_pT_data->SetBinError(10,6.164414);
   muonElectron2_pT_data->SetEntries(2235);

   muonElectron2_pT_data->SetLineColor(2);
   muonElectron2_pT_data->SetLineWidth(2);
   muonElectron2_pT_data->SetMarkerColor(2);
   muonElectron2_pT_data->SetMarkerStyle(22);
   muonElectron2_pT_data->SetMarkerSize(1.2);

   muonElectron2_pT_data->GetXaxis()->SetTitle(" p_{T} (GeV)");
   muonElectron2_pT_data->GetXaxis()->SetLabelFont(42);
   muonElectron2_pT_data->GetXaxis()->SetLabelOffset(999);
   muonElectron2_pT_data->GetXaxis()->SetLabelSize(0.05);
   muonElectron2_pT_data->GetXaxis()->SetTitleSize(0.08);
   muonElectron2_pT_data->GetXaxis()->SetTitleOffset(1);
   muonElectron2_pT_data->GetXaxis()->SetTitleFont(42);
   muonElectron2_pT_data->GetYaxis()->SetTitle(" Efficiency");
//   muonElectron2_pT_data->GetYaxis()->SetNdivisions(506);
   muonElectron2_pT_data->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_data->GetYaxis()->SetLabelFont(42);
   muonElectron2_pT_data->GetYaxis()->SetLabelOffset(0.01);
   muonElectron2_pT_data->GetYaxis()->SetLabelSize(0.062);
   muonElectron2_pT_data->GetYaxis()->SetTitleSize(0.08);
   muonElectron2_pT_data->GetYaxis()->SetTitleOffset(0.6336);
   muonElectron2_pT_data->GetYaxis()->SetTitleFont(42);
   muonElectron2_pT_data->GetZaxis()->SetLabelFont(42);
   muonElectron2_pT_data->GetZaxis()->SetLabelOffset(0.007);
   muonElectron2_pT_data->GetZaxis()->SetLabelSize(0.05);
   muonElectron2_pT_data->GetZaxis()->SetTitleSize(0.08);
   muonElectron2_pT_data->GetZaxis()->SetTitleOffset(1);
   muonElectron2_pT_data->GetZaxis()->SetTitleFont(42);
   muonElectron2_pT_data->Draw("same E1");

   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron2_pT_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron2_pT_MC", "MC Efficiency", "PEL");
   leg->Draw();

/*   TLatex *   tex = new TLatex(0.968,0.9429101,"35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06792969);
   tex->SetLineWidth(2);
   tex->Draw();*/

   canvy_1->Modified();
   c1->cd();

// ------------>Primitives in pad: canvy_2
   TPad *canvy_2 = new TPad("canvy_2", "newpad2",0.01,0.01,0.99,0.322);
   canvy_2->Draw();
   canvy_2->cd();
   canvy_2->SetFillColor(0);
   canvy_2->SetBorderMode(0);
   canvy_2->SetGridy();

   canvy_2->SetLeftMargin( L/W );
   canvy_2->SetRightMargin( R/W );
   canvy_2->SetTopMargin( T/H );
   canvy_2->SetBottomMargin( B/H * 2.6 );
   canvy_2->SetFrameFillStyle(0);
   canvy_2->SetFrameBorderMode(0);
   
   TH1D *p_muonElectron2_pT_SF__12 = new TH1D("p_muonElectron2_pT_SF__12","",9, xAxis);
   p_muonElectron2_pT_SF__12->SetBinContent(1,0.9107266);
   p_muonElectron2_pT_SF__12->SetBinContent(2,0.9612512);
   p_muonElectron2_pT_SF__12->SetBinContent(3,1.008919);
   p_muonElectron2_pT_SF__12->SetBinContent(4,1.027471);
   p_muonElectron2_pT_SF__12->SetBinContent(5,1.040784);
   p_muonElectron2_pT_SF__12->SetBinContent(6,1.031766);
   p_muonElectron2_pT_SF__12->SetBinContent(7,0.9690722);
   p_muonElectron2_pT_SF__12->SetBinContent(8,0.9861801);
   p_muonElectron2_pT_SF__12->SetBinContent(9,1.020801);
   p_muonElectron2_pT_SF__12->SetBinError(1,0.04066632);
   p_muonElectron2_pT_SF__12->SetBinError(2,0.09121144);
   p_muonElectron2_pT_SF__12->SetBinError(3,0.1021297);
   p_muonElectron2_pT_SF__12->SetBinError(4,0.09108857);
   p_muonElectron2_pT_SF__12->SetBinError(5,0.07527755);
   p_muonElectron2_pT_SF__12->SetBinError(6,0.1180422);
   p_muonElectron2_pT_SF__12->SetBinError(7,0.1352663);
   p_muonElectron2_pT_SF__12->SetBinError(8,0.09908503);
   p_muonElectron2_pT_SF__12->SetBinError(9,0.1745014);
   p_muonElectron2_pT_SF__12->SetEntries(750.7203);

   p_muonElectron2_pT_SF__12->SetMinimum(0.9);
   p_muonElectron2_pT_SF__12->SetMaximum(1.1);
   p_muonElectron2_pT_SF__12->SetLineColor(8);
   p_muonElectron2_pT_SF__12->SetLineWidth(2);
   p_muonElectron2_pT_SF__12->SetMarkerColor(8);
   p_muonElectron2_pT_SF__12->SetMarkerStyle(33);
   p_muonElectron2_pT_SF__12->SetMarkerSize(1.5);

   p_muonElectron2_pT_SF__12->GetXaxis()->SetTitle(" p_{T} (GeV)");
   p_muonElectron2_pT_SF__12->GetXaxis()->SetLabelFont(42);
   p_muonElectron2_pT_SF__12->GetXaxis()->SetLabelOffset(0.013);
   p_muonElectron2_pT_SF__12->GetXaxis()->SetLabelSize(0.13);
   p_muonElectron2_pT_SF__12->GetXaxis()->SetTitleSize(0.13);
   p_muonElectron2_pT_SF__12->GetXaxis()->SetTitleOffset(1);
   p_muonElectron2_pT_SF__12->GetXaxis()->SetTitleFont(42);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetTitle("Data/MC SF");
   p_muonElectron2_pT_SF__12->GetYaxis()->SetNdivisions(506);
   p_muonElectron2_pT_SF__12->GetYaxis()->CenterTitle(true);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetLabelFont(42);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetLabelOffset(0.01);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetLabelSize(0.12);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetTitleSize(0.16);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetTitleOffset(0.3);
   p_muonElectron2_pT_SF__12->GetYaxis()->SetTitleFont(42);
   p_muonElectron2_pT_SF__12->GetZaxis()->SetLabelFont(42);
   p_muonElectron2_pT_SF__12->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron2_pT_SF__12->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron2_pT_SF__12->GetZaxis()->SetTitleOffset(1);
   p_muonElectron2_pT_SF__12->GetZaxis()->SetTitleFont(42);
   p_muonElectron2_pT_SF__12->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("muonElectron2_pT_SF_alt.pdf");
}
