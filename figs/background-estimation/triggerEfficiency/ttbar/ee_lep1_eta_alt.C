void ee_lep1_eta_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:27:17 2019) by ROOT version 6.18/00

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

   Double_t xAxis[6] = {-2.5, -1.5, -0.8, 0.8, 1.5, 2.5}; 
   
   TProfile *electron1_eta_MC = new TProfile("electron1_eta_MC","ee final state - leading electron",5, xAxis);
   electron1_eta_MC->SetBinEntries(0,10);
   electron1_eta_MC->SetBinEntries(1,2773);
   electron1_eta_MC->SetBinEntries(2,6071);
   electron1_eta_MC->SetBinEntries(3,22338);
   electron1_eta_MC->SetBinEntries(4,6186);
   electron1_eta_MC->SetBinEntries(5,2933);
   electron1_eta_MC->SetBinContent(0,9);
   electron1_eta_MC->SetBinContent(1,2694);
   electron1_eta_MC->SetBinContent(2,5988);
   electron1_eta_MC->SetBinContent(3,22055);
   electron1_eta_MC->SetBinContent(4,6115);
   electron1_eta_MC->SetBinContent(5,2841);
   electron1_eta_MC->SetBinError(0,3);
   electron1_eta_MC->SetBinError(1,0.002986221);
   electron1_eta_MC->SetBinError(2,0.001405928);
   electron1_eta_MC->SetBinError(3,0.0006704477);
   electron1_eta_MC->SetBinError(4,0.001289299);
   electron1_eta_MC->SetBinError(5,0.003016682);
   electron1_eta_MC->SetEntries(40311);

   electron1_eta_MC->SetMinimum(0.8);
   electron1_eta_MC->SetMaximum(1.1);
   electron1_eta_MC->SetLineColor(1);
   electron1_eta_MC->SetLineWidth(2);
   electron1_eta_MC->SetMarkerColor(1);
   electron1_eta_MC->SetMarkerStyle(20);
   electron1_eta_MC->SetMarkerSize(1);

   electron1_eta_MC->GetXaxis()->SetTitle(" #eta");
   electron1_eta_MC->GetXaxis()->SetLabelFont(42);
   electron1_eta_MC->GetXaxis()->SetLabelOffset(999);
   electron1_eta_MC->GetXaxis()->SetLabelSize(0.05);
   electron1_eta_MC->GetXaxis()->SetTitleSize(0.08);
   electron1_eta_MC->GetXaxis()->SetTitleOffset(1);
   electron1_eta_MC->GetXaxis()->SetTitleFont(42);
   electron1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   electron1_eta_MC->GetYaxis()->SetLabelFont(42);
   electron1_eta_MC->GetYaxis()->SetLabelFont(42);
   electron1_eta_MC->GetYaxis()->SetLabelOffset(0.01);
   electron1_eta_MC->GetYaxis()->SetLabelSize(0.062);
   electron1_eta_MC->GetYaxis()->SetTitleSize(0.08);
   electron1_eta_MC->GetYaxis()->SetTitleOffset(0.58);
   electron1_eta_MC->GetYaxis()->SetTitleFont(42);
   electron1_eta_MC->GetZaxis()->SetLabelFont(42);
   electron1_eta_MC->GetZaxis()->SetLabelOffset(0.007);
   electron1_eta_MC->GetZaxis()->SetLabelSize(0.05);
   electron1_eta_MC->GetZaxis()->SetTitleSize(0.08);
   electron1_eta_MC->GetZaxis()->SetTitleOffset(1);
   electron1_eta_MC->GetZaxis()->SetTitleFont(42);
   electron1_eta_MC->Draw("E1");
   
   TProfile *electron1_eta_data = new TProfile("electron1_eta_data","",5, xAxis);
   electron1_eta_data->SetBinEntries(0,2);
   electron1_eta_data->SetBinEntries(1,1178);
   electron1_eta_data->SetBinEntries(2,2662);
   electron1_eta_data->SetBinEntries(3,10104);
   electron1_eta_data->SetBinEntries(4,2620);
   electron1_eta_data->SetBinEntries(5,1119);
   electron1_eta_data->SetBinEntries(6,1);
   electron1_eta_data->SetBinContent(0,2);
   electron1_eta_data->SetBinContent(1,1133);
   electron1_eta_data->SetBinContent(2,2601);
   electron1_eta_data->SetBinContent(3,9880);
   electron1_eta_data->SetBinContent(4,2559);
   electron1_eta_data->SetBinContent(5,1068);
   electron1_eta_data->SetBinContent(6,1);
   electron1_eta_data->SetBinError(0,1.414214);
   electron1_eta_data->SetBinError(1,0.00547046);
   electron1_eta_data->SetBinError(2,0.002785173);
   electron1_eta_data->SetBinError(3,0.00132202);
   electron1_eta_data->SetBinError(4,0.002829225);
   electron1_eta_data->SetBinError(5,0.006050119);
   electron1_eta_data->SetBinError(6,1);
   electron1_eta_data->SetEntries(17686);

   electron1_eta_data->SetLineColor(2);
   electron1_eta_data->SetLineWidth(2);
   electron1_eta_data->SetMarkerColor(2);
   electron1_eta_data->SetMarkerStyle(22);
   electron1_eta_data->SetMarkerSize(1.2);

   electron1_eta_data->GetXaxis()->SetTitle(" #eta");
   electron1_eta_data->GetXaxis()->SetLabelFont(42);
   electron1_eta_data->GetXaxis()->SetLabelOffset(999);
   electron1_eta_data->GetXaxis()->SetLabelSize(0.05);
   electron1_eta_data->GetXaxis()->SetTitleSize(0.08);
   electron1_eta_data->GetXaxis()->SetTitleOffset(1);
   electron1_eta_data->GetXaxis()->SetTitleFont(42);
   electron1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   electron1_eta_data->GetYaxis()->SetLabelFont(42);
   electron1_eta_data->GetYaxis()->SetLabelFont(42);
   electron1_eta_data->GetYaxis()->SetLabelOffset(0.01);
   electron1_eta_data->GetYaxis()->SetLabelSize(0.062);
   electron1_eta_data->GetYaxis()->SetTitleSize(0.08);
   electron1_eta_data->GetYaxis()->SetTitleOffset(0.6336);
   electron1_eta_data->GetYaxis()->SetTitleFont(42);
   electron1_eta_data->GetZaxis()->SetLabelFont(42);
   electron1_eta_data->GetZaxis()->SetLabelOffset(0.007);
   electron1_eta_data->GetZaxis()->SetLabelSize(0.05);
   electron1_eta_data->GetZaxis()->SetTitleSize(0.08);
   electron1_eta_data->GetZaxis()->SetTitleOffset(1);
   electron1_eta_data->GetZaxis()->SetTitleFont(42);
   electron1_eta_data->Draw("same E1");
   
   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("electron1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("electron1_eta_MC", "MC Efficiency", "PEL");
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

   TH1D *p_electron1_eta_SF__1 = new TH1D("p_electron1_eta_SF__1","",5, xAxis);
   p_electron1_eta_SF__1->SetBinContent(0,1.111111);
   p_electron1_eta_SF__1->SetBinContent(1,0.9900039);
   p_electron1_eta_SF__1->SetBinContent(2,0.9906283);
   p_electron1_eta_SF__1->SetBinContent(3,0.9903777);
   p_electron1_eta_SF__1->SetBinContent(4,0.988058);
   p_electron1_eta_SF__1->SetBinContent(5,0.9853307);
   p_electron1_eta_SF__1->SetBinError(0,0.1171214);
   p_electron1_eta_SF__1->SetBinError(1,0.03443046);
   p_electron1_eta_SF__1->SetBinError(2,0.02302811);
   p_electron1_eta_SF__1->SetBinError(3,0.01187369);
   p_electron1_eta_SF__1->SetBinError(4,0.02303118);
   p_electron1_eta_SF__1->SetBinError(5,0.03462148);
   p_electron1_eta_SF__1->SetEntries(6817.714);

   p_electron1_eta_SF__1->SetMinimum(0.9);
   p_electron1_eta_SF__1->SetMaximum(1.1);
   p_electron1_eta_SF__1->SetLineColor(8);
   p_electron1_eta_SF__1->SetLineWidth(2);
   p_electron1_eta_SF__1->SetMarkerColor(8);
   p_electron1_eta_SF__1->SetMarkerStyle(33);
   p_electron1_eta_SF__1->SetMarkerSize(1.5);

   p_electron1_eta_SF__1->GetXaxis()->SetTitle(" #eta");
   p_electron1_eta_SF__1->GetXaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetXaxis()->SetLabelOffset(0.013);
   p_electron1_eta_SF__1->GetXaxis()->SetLabelSize(0.13);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleSize(0.13);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleOffset(1);
   p_electron1_eta_SF__1->GetXaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->GetYaxis()->SetTitle("Data/MC SF");
   p_electron1_eta_SF__1->GetYaxis()->SetNdivisions(506);
   p_electron1_eta_SF__1->GetYaxis()->CenterTitle(true);
   p_electron1_eta_SF__1->GetYaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetYaxis()->SetLabelOffset(0.01);
   p_electron1_eta_SF__1->GetYaxis()->SetLabelSize(0.12);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleSize(0.16);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleOffset(0.3);
   p_electron1_eta_SF__1->GetYaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->GetZaxis()->SetLabelFont(42);
   p_electron1_eta_SF__1->GetZaxis()->SetLabelSize(0.035);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleSize(0.035);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleOffset(1);
   p_electron1_eta_SF__1->GetZaxis()->SetTitleFont(42);
   p_electron1_eta_SF__1->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("electron1_eta_SF_alt.pdf");
}
