void ee_lep1_pT_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 20:29:06 2019) by ROOT version 6.18/00

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
   
   TProfile *electron1_pT_MC = new TProfile("electron1_pT_MC","ee final state - leading electron",9, xAxis);
   electron1_pT_MC->SetBinEntries(1,75);
   electron1_pT_MC->SetBinEntries(2,272);
   electron1_pT_MC->SetBinEntries(3,566);
   electron1_pT_MC->SetBinEntries(4,2546);
   electron1_pT_MC->SetBinEntries(5,10467);
   electron1_pT_MC->SetBinEntries(6,8372);
   electron1_pT_MC->SetBinEntries(7,6548);
   electron1_pT_MC->SetBinEntries(8,12878);
   electron1_pT_MC->SetBinEntries(9,2046);
   electron1_pT_MC->SetBinContent(1,38);
   electron1_pT_MC->SetBinContent(2,31);
   electron1_pT_MC->SetBinContent(3,235);
   electron1_pT_MC->SetBinContent(4,2254);
   electron1_pT_MC->SetBinContent(5,10185);
   electron1_pT_MC->SetBinContent(6,8252);
   electron1_pT_MC->SetBinContent(7,6472);
   electron1_pT_MC->SetBinContent(8,12758);
   electron1_pT_MC->SetBinContent(9,2035);
   electron1_pT_MC->SetBinError(1,0.05498251);
   electron1_pT_MC->SetBinError(2,0.0167941);
   electron1_pT_MC->SetBinError(3,0.01817498);
   electron1_pT_MC->SetBinError(4,0.005637135);
   electron1_pT_MC->SetBinError(5,0.001417546);
   electron1_pT_MC->SetBinError(6,0.001202607);
   electron1_pT_MC->SetBinError(7,0.001255041);
   electron1_pT_MC->SetBinError(8,0.0007839693);
   electron1_pT_MC->SetBinError(9,0.001839205);
   electron1_pT_MC->SetEntries(43770);

   electron1_pT_MC->SetMinimum(0.5);
   electron1_pT_MC->SetMaximum(1.1);
   electron1_pT_MC->SetLineColor(1);
   electron1_pT_MC->SetLineWidth(2);
   electron1_pT_MC->SetMarkerColor(1);
   electron1_pT_MC->SetMarkerStyle(20);
   electron1_pT_MC->SetMarkerSize(1);

   electron1_pT_MC->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron1_pT_MC->GetXaxis()->SetLabelFont(42);
   electron1_pT_MC->GetXaxis()->SetLabelOffset(999);
   electron1_pT_MC->GetXaxis()->SetLabelSize(0.05);
   electron1_pT_MC->GetXaxis()->SetTitleSize(0.08);
   electron1_pT_MC->GetXaxis()->SetTitleOffset(1);
   electron1_pT_MC->GetXaxis()->SetTitleFont(42);
   electron1_pT_MC->GetYaxis()->SetTitle(" Efficiency");
   electron1_pT_MC->GetYaxis()->SetLabelFont(42);
   electron1_pT_MC->GetYaxis()->SetLabelFont(42);
   electron1_pT_MC->GetYaxis()->SetLabelOffset(0.01);
   electron1_pT_MC->GetYaxis()->SetLabelSize(0.062);
   electron1_pT_MC->GetYaxis()->SetTitleSize(0.08);
   electron1_pT_MC->GetYaxis()->SetTitleOffset(0.58);
   electron1_pT_MC->GetYaxis()->SetTitleFont(42);
   electron1_pT_MC->GetZaxis()->SetLabelFont(42);
   electron1_pT_MC->GetZaxis()->SetLabelOffset(0.007);
   electron1_pT_MC->GetZaxis()->SetLabelSize(0.05);
   electron1_pT_MC->GetZaxis()->SetTitleSize(0.08);
   electron1_pT_MC->GetZaxis()->SetTitleOffset(1);
   electron1_pT_MC->GetZaxis()->SetTitleFont(42);

   electron1_pT_MC->Draw("E1");
   
   TProfile *electron1_pT_data = new TProfile("electron1_pT_data","",9, xAxis);
   electron1_pT_data->SetBinEntries(1,24);
   electron1_pT_data->SetBinEntries(2,70);
   electron1_pT_data->SetBinEntries(3,171);
   electron1_pT_data->SetBinEntries(4,883);
   electron1_pT_data->SetBinEntries(5,3573);
   electron1_pT_data->SetBinEntries(6,2994);
   electron1_pT_data->SetBinEntries(7,2529);
   electron1_pT_data->SetBinEntries(8,6539);
   electron1_pT_data->SetBinEntries(9,1514);
   electron1_pT_data->SetBinEntries(10,537);
   electron1_pT_data->SetBinContent(1,12);
   electron1_pT_data->SetBinContent(2,16);
   electron1_pT_data->SetBinContent(3,60);
   electron1_pT_data->SetBinContent(4,742);
   electron1_pT_data->SetBinContent(5,3451);
   electron1_pT_data->SetBinContent(6,2930);
   electron1_pT_data->SetBinContent(7,2480);
   electron1_pT_data->SetBinContent(8,6431);
   electron1_pT_data->SetBinContent(9,1482);
   electron1_pT_data->SetBinContent(10,470);
   electron1_pT_data->SetBinError(1,0.1044709);
   electron1_pT_data->SetBinError(2,0.04554981);
   electron1_pT_data->SetBinError(3,0.03279487);
   electron1_pT_data->SetBinError(4,0.01126395);
   electron1_pT_data->SetBinError(5,0.002808036);
   electron1_pT_data->SetBinError(6,0.002531027);
   electron1_pT_data->SetBinError(7,0.002672068);
   electron1_pT_data->SetBinError(8,0.001466313);
   electron1_pT_data->SetBinError(9,0.003725799);
   electron1_pT_data->SetBinError(10,21.67948);
   electron1_pT_data->SetEntries(18834);

   electron1_pT_data->SetLineColor(2);
   electron1_pT_data->SetLineWidth(2);
   electron1_pT_data->SetMarkerColor(2);
   electron1_pT_data->SetMarkerStyle(22);
   electron1_pT_data->SetMarkerSize(1.2);

   electron1_pT_data->GetXaxis()->SetTitle(" p_{T} (GeV)");
   electron1_pT_data->GetXaxis()->SetLabelFont(42);
   electron1_pT_data->GetXaxis()->SetLabelOffset(999);
   electron1_pT_data->GetXaxis()->SetLabelSize(0.05);
   electron1_pT_data->GetXaxis()->SetTitleSize(0.08);
   electron1_pT_data->GetXaxis()->SetTitleOffset(1);
   electron1_pT_data->GetXaxis()->SetTitleFont(42);
   electron1_pT_data->GetYaxis()->SetTitle(" Efficiency");
   electron1_pT_data->GetYaxis()->SetLabelFont(42);
   electron1_pT_data->GetYaxis()->SetLabelFont(42);
   electron1_pT_data->GetYaxis()->SetLabelOffset(0.01);
   electron1_pT_data->GetYaxis()->SetLabelSize(0.062);
   electron1_pT_data->GetYaxis()->SetTitleSize(0.08);
   electron1_pT_data->GetYaxis()->SetTitleOffset(0.6336);
   electron1_pT_data->GetYaxis()->SetTitleFont(42);
   electron1_pT_data->GetZaxis()->SetLabelFont(42);
   electron1_pT_data->GetZaxis()->SetLabelOffset(0.007);
   electron1_pT_data->GetZaxis()->SetLabelSize(0.05);
   electron1_pT_data->GetZaxis()->SetTitleSize(0.08);
   electron1_pT_data->GetZaxis()->SetTitleOffset(1);
   electron1_pT_data->GetZaxis()->SetTitleFont(42);

   electron1_pT_data->Draw("E1 same");

   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron1_pT_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("electron1_pT_MC", "MC Efficiency", "PEL");
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
   
   TH1D *p_electron1_pT_SF__1 = new TH1D("p_electron1_pT_SF__1","",9, xAxis);
   p_electron1_pT_SF__1->SetBinContent(1,0.9868421);
   p_electron1_pT_SF__1->SetBinContent(2,2.00553);
   p_electron1_pT_SF__1->SetBinContent(3,0.8450915);
   p_electron1_pT_SF__1->SetBinContent(4,0.9491781);
   p_electron1_pT_SF__1->SetBinContent(5,0.9925974);
   p_electron1_pT_SF__1->SetBinContent(6,0.992855);
   p_electron1_pT_SF__1->SetBinContent(7,0.9921401);
   p_electron1_pT_SF__1->SetBinContent(8,0.9927342);
   p_electron1_pT_SF__1->SetBinContent(9,0.9841551);
   p_electron1_pT_SF__1->SetBinError(1,0.2312711);
   p_electron1_pT_SF__1->SetBinError(2,0.2687245);
   p_electron1_pT_SF__1->SetBinError(3,0.07374329);
   p_electron1_pT_SF__1->SetBinError(4,0.03706994);
   p_electron1_pT_SF__1->SetBinError(5,0.0192322);
   p_electron1_pT_SF__1->SetBinError(6,0.02114215);
   p_electron1_pT_SF__1->SetBinError(7,0.02322819);
   p_electron1_pT_SF__1->SetBinError(8,0.01507454);
   p_electron1_pT_SF__1->SetBinError(9,0.03336359);
   p_electron1_pT_SF__1->SetEntries(701.8029);

   p_electron1_pT_SF__1->SetMinimum(0.9);
   p_electron1_pT_SF__1->SetMaximum(1.1);
   p_electron1_pT_SF__1->SetLineColor(8);
   p_electron1_pT_SF__1->SetLineWidth(2);
   p_electron1_pT_SF__1->SetMarkerColor(8);
   p_electron1_pT_SF__1->SetMarkerStyle(33);
   p_electron1_pT_SF__1->SetMarkerSize(1.5);

   p_electron1_pT_SF__1->GetXaxis()->SetTitle(" p_{T} (GeV)");
   p_electron1_pT_SF__1->GetXaxis()->SetLabelFont(42);
   p_electron1_pT_SF__1->GetXaxis()->SetLabelOffset(0.013);
   p_electron1_pT_SF__1->GetXaxis()->SetLabelSize(0.13);
   p_electron1_pT_SF__1->GetXaxis()->SetTitleSize(0.13);
   p_electron1_pT_SF__1->GetXaxis()->SetTitleOffset(1);
   p_electron1_pT_SF__1->GetXaxis()->SetTitleFont(42);
   p_electron1_pT_SF__1->GetYaxis()->SetTitle("Data/MC SF");
   p_electron1_pT_SF__1->GetYaxis()->SetNdivisions(506);
   p_electron1_pT_SF__1->GetYaxis()->CenterTitle(true);
   p_electron1_pT_SF__1->GetYaxis()->SetLabelFont(42);
   p_electron1_pT_SF__1->GetYaxis()->SetLabelOffset(0.01);
   p_electron1_pT_SF__1->GetYaxis()->SetLabelSize(0.12);
   p_electron1_pT_SF__1->GetYaxis()->SetTitleSize(0.16);
   p_electron1_pT_SF__1->GetYaxis()->SetTitleOffset(0.3);
   p_electron1_pT_SF__1->GetYaxis()->SetTitleFont(42);
   p_electron1_pT_SF__1->GetZaxis()->SetLabelFont(42);
   p_electron1_pT_SF__1->GetZaxis()->SetLabelSize(0.035);
   p_electron1_pT_SF__1->GetZaxis()->SetTitleSize(0.035);
   p_electron1_pT_SF__1->GetZaxis()->SetTitleOffset(1);
   p_electron1_pT_SF__1->GetZaxis()->SetTitleFont(42);
   p_electron1_pT_SF__1->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("electron1_pT_SF_alt.pdf");
}
