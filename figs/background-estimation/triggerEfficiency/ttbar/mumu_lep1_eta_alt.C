void mumu_lep1_eta_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:29:48 2019) by ROOT version 6.18/00

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

   Double_t xAxis[6] = {-2.4, -1.5, -0.8, 0.8, 1.5, 2.4}; 
   
   TProfile *muon1_eta_MC = new TProfile("muon1_eta_MC","#mu#mu final state - leading muon",5, xAxis);
   muon1_eta_MC->SetBinEntries(1,4733);
   muon1_eta_MC->SetBinEntries(2,8088);
   muon1_eta_MC->SetBinEntries(3,25663);
   muon1_eta_MC->SetBinEntries(4,8090);
   muon1_eta_MC->SetBinEntries(5,4841);
   muon1_eta_MC->SetBinContent(1,4594);
   muon1_eta_MC->SetBinContent(2,7974);
   muon1_eta_MC->SetBinContent(3,25277);
   muon1_eta_MC->SetBinContent(4,7990);
   muon1_eta_MC->SetBinContent(5,4707);
   muon1_eta_MC->SetBinError(1,0.002255613);
   muon1_eta_MC->SetBinError(2,0.001216416);
   muon1_eta_MC->SetBinError(3,0.0006746801);
   muon1_eta_MC->SetBinError(4,0.001147481);
   muon1_eta_MC->SetBinError(5,0.002170752);
   muon1_eta_MC->SetEntries(51415);

   muon1_eta_MC->SetMinimum(0.8);
   muon1_eta_MC->SetMaximum(1.1);
   muon1_eta_MC->SetLineColor(1);
   muon1_eta_MC->SetLineWidth(2);
   muon1_eta_MC->SetMarkerColor(1);
   muon1_eta_MC->SetMarkerStyle(20);
   muon1_eta_MC->SetMarkerSize(1);
   
   muon1_eta_MC->GetXaxis()->SetTitle(" #eta");
   muon1_eta_MC->GetXaxis()->SetLabelFont(42);
   muon1_eta_MC->GetXaxis()->SetLabelOffset(999);
   muon1_eta_MC->GetXaxis()->SetLabelSize(0.05);
   muon1_eta_MC->GetXaxis()->SetTitleSize(0.08);
   muon1_eta_MC->GetXaxis()->SetTitleOffset(1);
   muon1_eta_MC->GetXaxis()->SetTitleFont(42);
   muon1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_MC->GetYaxis()->SetLabelFont(42);
   muon1_eta_MC->GetYaxis()->SetLabelFont(42);
   muon1_eta_MC->GetYaxis()->SetLabelOffset(0.01);
   muon1_eta_MC->GetYaxis()->SetLabelSize(0.05);
   muon1_eta_MC->GetYaxis()->SetTitleSize(0.06);
   muon1_eta_MC->GetYaxis()->SetTitleOffset(0.8);
   muon1_eta_MC->GetYaxis()->SetTitleFont(42);
   muon1_eta_MC->GetZaxis()->SetLabelFont(42);
   muon1_eta_MC->GetZaxis()->SetLabelOffset(0.007);
   muon1_eta_MC->GetZaxis()->SetLabelSize(0.05);
   muon1_eta_MC->GetZaxis()->SetTitleSize(0.08);
   muon1_eta_MC->GetZaxis()->SetTitleOffset(1);
   muon1_eta_MC->GetZaxis()->SetTitleFont(42);
   muon1_eta_MC->Draw("E1");
   
   TProfile *muon1_eta_data = new TProfile("muon1_eta_data","",5, xAxis);
   muon1_eta_data->SetBinEntries(1,6301);
   muon1_eta_data->SetBinEntries(2,9817);
   muon1_eta_data->SetBinEntries(3,26239);
   muon1_eta_data->SetBinEntries(4,9626);
   muon1_eta_data->SetBinEntries(5,6051);
   muon1_eta_data->SetBinContent(1,6069);
   muon1_eta_data->SetBinContent(2,9631);
   muon1_eta_data->SetBinContent(3,25560);
   muon1_eta_data->SetBinContent(4,9411);
   muon1_eta_data->SetBinContent(5,5806);
   muon1_eta_data->SetBinError(1,0.002137733);
   muon1_eta_data->SetBinError(2,0.001250408);
   muon1_eta_data->SetBinError(3,0.0008588962);
   muon1_eta_data->SetBinError(4,0.00136132);
   muon1_eta_data->SetBinError(5,0.002278845);
   muon1_eta_data->SetEntries(58034);

   muon1_eta_data->SetLineColor(2);
   muon1_eta_data->SetLineWidth(2);
   muon1_eta_data->SetMarkerColor(2);
   muon1_eta_data->SetMarkerStyle(22);
   muon1_eta_data->SetMarkerSize(1.2);

   muon1_eta_data->GetXaxis()->SetTitle(" #eta");
   muon1_eta_data->GetXaxis()->SetLabelFont(42);
   muon1_eta_data->GetXaxis()->SetLabelOffset(999);
   muon1_eta_data->GetXaxis()->SetLabelSize(0.05);
   muon1_eta_data->GetXaxis()->SetTitleSize(0.08);
   muon1_eta_data->GetXaxis()->SetTitleOffset(1);
   muon1_eta_data->GetXaxis()->SetTitleFont(42);
   muon1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muon1_eta_data->GetYaxis()->SetLabelFont(42);
   muon1_eta_data->GetYaxis()->SetLabelFont(42);
   muon1_eta_data->GetYaxis()->SetLabelOffset(0.01);
   muon1_eta_data->GetYaxis()->SetLabelSize(0.062);
   muon1_eta_data->GetYaxis()->SetTitleSize(0.08);
   muon1_eta_data->GetYaxis()->SetTitleOffset(0.6336);
   muon1_eta_data->GetYaxis()->SetTitleFont(42);
   muon1_eta_data->GetZaxis()->SetLabelFont(42);
   muon1_eta_data->GetZaxis()->SetLabelOffset(0.007);
   muon1_eta_data->GetZaxis()->SetLabelSize(0.05);
   muon1_eta_data->GetZaxis()->SetTitleSize(0.08);
   muon1_eta_data->GetZaxis()->SetTitleOffset(1);
   muon1_eta_data->GetZaxis()->SetTitleFont(42);
   muon1_eta_data->Draw("same E1");
   
   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muon1_eta_MC", "MC Efficiency", "PEL");
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

   TH1D *p_muon1_eta_SF__3 = new TH1D("p_muon1_eta_SF__3","",5, xAxis);
   p_muon1_eta_SF__3->SetBinContent(1,0.9923233);
   p_muon1_eta_SF__3->SetBinContent(2,0.9950789);
   p_muon1_eta_SF__3->SetBinContent(3,0.9889981);
   p_muon1_eta_SF__3->SetBinContent(4,0.9899008);
   p_muon1_eta_SF__3->SetBinContent(5,0.9868264);
   p_muon1_eta_SF__3->SetBinError(1,0.0190874);
   p_muon1_eta_SF__3->SetBinError(2,0.01494289);
   p_muon1_eta_SF__3->SetBinError(3,0.008682807);
   p_muon1_eta_SF__3->SetBinError(4,0.0149306);
   p_muon1_eta_SF__3->SetBinError(5,0.01902889);
   p_muon1_eta_SF__3->SetEntries(19657.74);

   p_muon1_eta_SF__3->SetMinimum(0.9);
   p_muon1_eta_SF__3->SetMaximum(1.1);
   p_muon1_eta_SF__3->SetLineColor(8);
   p_muon1_eta_SF__3->SetLineWidth(2);
   p_muon1_eta_SF__3->SetMarkerColor(8);
   p_muon1_eta_SF__3->SetMarkerStyle(33);
   p_muon1_eta_SF__3->SetMarkerSize(1.5);

   p_muon1_eta_SF__3->GetXaxis()->SetTitle(" #eta");
   p_muon1_eta_SF__3->GetXaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetXaxis()->SetLabelOffset(0.013);
   p_muon1_eta_SF__3->GetXaxis()->SetLabelSize(0.10);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleSize(0.13);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleOffset(1);
   p_muon1_eta_SF__3->GetXaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->GetYaxis()->SetTitle("Data/MC SF");
   p_muon1_eta_SF__3->GetYaxis()->SetNdivisions(506);
   p_muon1_eta_SF__3->GetYaxis()->CenterTitle(true);
   p_muon1_eta_SF__3->GetYaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetYaxis()->SetLabelOffset(0.01);
   p_muon1_eta_SF__3->GetYaxis()->SetLabelSize(0.10);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleSize(0.12);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleOffset(0.4);
   p_muon1_eta_SF__3->GetYaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->GetZaxis()->SetLabelFont(42);
   p_muon1_eta_SF__3->GetZaxis()->SetLabelSize(0.035);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleSize(0.035);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleOffset(1);
   p_muon1_eta_SF__3->GetZaxis()->SetTitleFont(42);
   p_muon1_eta_SF__3->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("muon1_eta_SF_alt.pdf");
}
