void emu_lep1_pT_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 20:50:28 2019) by ROOT version 6.18/00

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
   
   TProfile *muonElectron1_pT_MC = new TProfile("muonElectron1_pT_MC","",9, xAxis);
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

   muonElectron1_pT_MC->SetMinimum(0.8);
   muonElectron1_pT_MC->SetMaximum(1.1);
   muonElectron1_pT_MC->SetMinimum(0.5);
   muonElectron1_pT_MC->SetMaximum(1.2);
   muonElectron1_pT_MC->SetLineColor(1);
   muonElectron1_pT_MC->SetLineWidth(2);
   muonElectron1_pT_MC->SetMarkerColor(1);
   muonElectron1_pT_MC->SetMarkerStyle(20);
   muonElectron1_pT_MC->SetMarkerSize(1);

   muonElectron1_pT_MC->GetXaxis()->SetTitle(" Electron p_{T} (GeV)");
   muonElectron1_pT_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetXaxis()->SetLabelOffset(999);
   muonElectron1_pT_MC->GetXaxis()->SetLabelSize(0.05);
   muonElectron1_pT_MC->GetXaxis()->SetTitleSize(0.08);
   muonElectron1_pT_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetTitle(" Trigger Efficiency");
   muonElectron1_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetYaxis()->SetLabelOffset(0.01);
   muonElectron1_pT_MC->GetYaxis()->SetLabelSize(0.056);
   muonElectron1_pT_MC->GetYaxis()->SetTitleSize(0.0645);
   muonElectron1_pT_MC->GetYaxis()->SetTitleOffset(0.785);
   muonElectron1_pT_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_MC->GetZaxis()->SetLabelOffset(0.007);
   muonElectron1_pT_MC->GetZaxis()->SetLabelSize(0.05);
   muonElectron1_pT_MC->GetZaxis()->SetTitleSize(0.08);
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
   muonElectron1_pT_data->GetXaxis()->SetLabelOffset(999);
   muonElectron1_pT_data->GetXaxis()->SetLabelSize(0.05);
   muonElectron1_pT_data->GetXaxis()->SetTitleSize(0.08);
   muonElectron1_pT_data->GetXaxis()->SetTitleOffset(1);
   muonElectron1_pT_data->GetXaxis()->SetTitleFont(42);
   muonElectron1_pT_data->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_pT_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetYaxis()->SetLabelOffset(0.01);
   muonElectron1_pT_data->GetYaxis()->SetLabelSize(0.062);
   muonElectron1_pT_data->GetYaxis()->SetTitleSize(0.08);
   muonElectron1_pT_data->GetYaxis()->SetTitleOffset(0.6336);
   muonElectron1_pT_data->GetYaxis()->SetTitleFont(42);
   muonElectron1_pT_data->GetZaxis()->SetLabelFont(42);
   muonElectron1_pT_data->GetZaxis()->SetLabelOffset(0.007);
   muonElectron1_pT_data->GetZaxis()->SetLabelSize(0.05);
   muonElectron1_pT_data->GetZaxis()->SetTitleSize(0.08);
   muonElectron1_pT_data->GetZaxis()->SetTitleOffset(1);
   muonElectron1_pT_data->GetZaxis()->SetTitleFont(42);
   muonElectron1_pT_data->Draw("same E1");
   
   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.055);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron1_pT_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron1_pT_MC", "MC Efficiency", "PEL");
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
 
   p_muonElectron1_pT_SF__10->SetMinimum(0.8);
   p_muonElectron1_pT_SF__10->SetMaximum(1.2);
   p_muonElectron1_pT_SF__10->SetLineColor(8);
   p_muonElectron1_pT_SF__10->SetLineWidth(2);
   p_muonElectron1_pT_SF__10->SetMarkerColor(8);
   p_muonElectron1_pT_SF__10->SetMarkerStyle(33);
   p_muonElectron1_pT_SF__10->SetMarkerSize(1.5);

   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitle(" p_{T} (GeV)");
   p_muonElectron1_pT_SF__10->GetXaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetLabelOffset(0.013);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetLabelSize(0.12);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleSize(0.135);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleOffset(1);
   p_muonElectron1_pT_SF__10->GetXaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitle("Data/MC SF");
   p_muonElectron1_pT_SF__10->GetYaxis()->SetNdivisions(506);
   p_muonElectron1_pT_SF__10->GetYaxis()->CenterTitle(true);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetLabelOffset(0.01);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetLabelSize(0.12);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleSize(0.135);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleOffset(0.39);
   p_muonElectron1_pT_SF__10->GetYaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetLabelFont(42);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleOffset(1);
   p_muonElectron1_pT_SF__10->GetZaxis()->SetTitleFont(42);
   p_muonElectron1_pT_SF__10->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
//   c1->SetSelected(zPairPt_SingleTop_wMass_emu);
   c1->SaveAs("muonElectron1_pT_SF_alt.pdf");
}
