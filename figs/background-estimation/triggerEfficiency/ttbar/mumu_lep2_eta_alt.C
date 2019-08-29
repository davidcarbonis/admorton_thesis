void mumu_lep2_eta_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:31:11 2019) by ROOT version 6.18/00

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
   
   TProfile *muon2_eta_MC = new TProfile("muon2_eta_MC","#mu#mu final state - subleading muon",5, xAxis);
   muon2_eta_MC->SetBinEntries(1,4189);
   muon2_eta_MC->SetBinEntries(2,6054);
   muon2_eta_MC->SetBinEntries(3,18192);
   muon2_eta_MC->SetBinEntries(4,6105);
   muon2_eta_MC->SetBinEntries(5,4136);
   muon2_eta_MC->SetBinContent(1,4134);
   muon2_eta_MC->SetBinContent(2,6008);
   muon2_eta_MC->SetBinContent(3,18061);
   muon2_eta_MC->SetBinContent(4,6058);
   muon2_eta_MC->SetBinContent(5,4083);
   muon2_eta_MC->SetBinError(1,0.001701601);
   muon2_eta_MC->SetBinError(2,0.001093898);
   muon2_eta_MC->SetBinError(3,0.0005781885);
   muon2_eta_MC->SetBinError(4,0.001094698);
   muon2_eta_MC->SetBinError(5,0.001696361);
   muon2_eta_MC->SetEntries(38676);

   muon2_eta_MC->SetMinimum(0.8);
   muon2_eta_MC->SetMaximum(1.1);
   muon2_eta_MC->SetLineColor(1);
   muon2_eta_MC->SetLineWidth(2);
   muon2_eta_MC->SetMarkerColor(1);
   muon2_eta_MC->SetMarkerStyle(20);
   muon2_eta_MC->SetMarkerSize(1);
   
   muon2_eta_MC->GetXaxis()->SetTitle(" #eta");
   muon2_eta_MC->GetXaxis()->SetLabelFont(42);
   muon2_eta_MC->GetXaxis()->SetLabelOffset(999);
   muon2_eta_MC->GetXaxis()->SetLabelSize(0.05);
   muon2_eta_MC->GetXaxis()->SetTitleSize(0.08);
   muon2_eta_MC->GetXaxis()->SetTitleOffset(1);
   muon2_eta_MC->GetXaxis()->SetTitleFont(42);
   muon2_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_MC->GetYaxis()->SetLabelFont(42);
   muon2_eta_MC->GetYaxis()->SetLabelFont(42);
   muon2_eta_MC->GetYaxis()->SetLabelOffset(0.01);
   muon2_eta_MC->GetYaxis()->SetLabelSize(0.062);
   muon2_eta_MC->GetYaxis()->SetTitleSize(0.08);
   muon2_eta_MC->GetYaxis()->SetTitleOffset(0.58);
   muon2_eta_MC->GetYaxis()->SetTitleFont(42);
   muon2_eta_MC->GetZaxis()->SetLabelFont(42);
   muon2_eta_MC->GetZaxis()->SetLabelOffset(0.007);
   muon2_eta_MC->GetZaxis()->SetLabelSize(0.05);
   muon2_eta_MC->GetZaxis()->SetTitleSize(0.08);
   muon2_eta_MC->GetZaxis()->SetTitleOffset(1);
   muon2_eta_MC->GetZaxis()->SetTitleFont(42);
   muon2_eta_MC->Draw("E1");
   
   TProfile *muon2_eta_data = new TProfile("muon2_eta_data","",5, xAxis);
   muon2_eta_data->SetBinEntries(1,5679);
   muon2_eta_data->SetBinEntries(2,7845);
   muon2_eta_data->SetBinEntries(3,21332);
   muon2_eta_data->SetBinEntries(4,7751);
   muon2_eta_data->SetBinEntries(5,5629);
   muon2_eta_data->SetBinContent(1,5532);
   muon2_eta_data->SetBinContent(2,7745);
   muon2_eta_data->SetBinContent(3,21114);
   muon2_eta_data->SetBinContent(4,7632);
   muon2_eta_data->SetBinContent(5,5480);
   muon2_eta_data->SetBinError(1,0.001932334);
   muon2_eta_data->SetBinError(2,0.001183064);
   muon2_eta_data->SetBinError(3,0.0006223141);
   muon2_eta_data->SetBinError(4,0.001293315);
   muon2_eta_data->SetBinError(5,0.001960971);
   muon2_eta_data->SetEntries(48236);

   muon2_eta_data->SetLineColor(2);
   muon2_eta_data->SetLineWidth(2);
   muon2_eta_data->SetMarkerColor(2);
   muon2_eta_data->SetMarkerStyle(22);
   muon2_eta_data->SetMarkerSize(1.2);

   muon2_eta_data->GetXaxis()->SetTitle(" #eta");
   muon2_eta_data->GetXaxis()->SetLabelFont(42);
   muon2_eta_data->GetXaxis()->SetLabelOffset(999);
   muon2_eta_data->GetXaxis()->SetLabelSize(0.05);
   muon2_eta_data->GetXaxis()->SetTitleSize(0.08);
   muon2_eta_data->GetXaxis()->SetTitleOffset(1);
   muon2_eta_data->GetXaxis()->SetTitleFont(42);
   muon2_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muon2_eta_data->GetYaxis()->SetLabelFont(42);
   muon2_eta_data->GetYaxis()->SetLabelFont(42);
   muon2_eta_data->GetYaxis()->SetLabelOffset(0.01);
   muon2_eta_data->GetYaxis()->SetLabelSize(0.062);
   muon2_eta_data->GetYaxis()->SetTitleSize(0.08);
   muon2_eta_data->GetYaxis()->SetTitleOffset(0.6336);
   muon2_eta_data->GetYaxis()->SetTitleFont(42);
   muon2_eta_data->GetZaxis()->SetLabelFont(42);
   muon2_eta_data->GetZaxis()->SetLabelOffset(0.007);
   muon2_eta_data->GetZaxis()->SetLabelSize(0.05);
   muon2_eta_data->GetZaxis()->SetTitleSize(0.08);
   muon2_eta_data->GetZaxis()->SetTitleOffset(1);
   muon2_eta_data->GetZaxis()->SetTitleFont(42);
   muon2_eta_data->Draw("same E1");
   
   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muon2_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muon2_eta_MC", "MC Efficiency", "PEL");
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

   TH1D *p_muon2_eta_SF__4 = new TH1D("p_muon2_eta_SF__4","",5, xAxis);
   p_muon2_eta_SF__4->SetBinContent(1,0.9870751);
   p_muon2_eta_SF__4->SetBinContent(2,0.9948119);
   p_muon2_eta_SF__4->SetBinContent(3,0.9969597);
   p_muon2_eta_SF__4->SetBinContent(4,0.9922864);
   p_muon2_eta_SF__4->SetBinContent(5,0.986167);
   p_muon2_eta_SF__4->SetBinError(1,0.02010359);
   p_muon2_eta_SF__4->SetBinError(2,0.01701826);
   p_muon2_eta_SF__4->SetBinError(3,0.01006125);
   p_muon2_eta_SF__4->SetBinError(4,0.01697987);
   p_muon2_eta_SF__4->SetBinError(5,0.02019671);
   p_muon2_eta_SF__4->SetEntries(16479.6);

   p_muon2_eta_SF__4->SetMinimum(0.9);
   p_muon2_eta_SF__4->SetMaximum(1.1);
   p_muon2_eta_SF__4->SetLineColor(8);
   p_muon2_eta_SF__4->SetLineWidth(2);
   p_muon2_eta_SF__4->SetMarkerColor(8);
   p_muon2_eta_SF__4->SetMarkerStyle(33);
   p_muon2_eta_SF__4->SetMarkerSize(1.5);

   p_muon2_eta_SF__4->GetXaxis()->SetTitle(" #eta");
   p_muon2_eta_SF__4->GetXaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetXaxis()->SetLabelOffset(0.013);
   p_muon2_eta_SF__4->GetXaxis()->SetLabelSize(0.13);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleSize(0.13);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleOffset(1);
   p_muon2_eta_SF__4->GetXaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->GetYaxis()->SetTitle("Data/MC SF");
   p_muon2_eta_SF__4->GetYaxis()->SetNdivisions(506);
   p_muon2_eta_SF__4->GetYaxis()->CenterTitle(true);
   p_muon2_eta_SF__4->GetYaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetYaxis()->SetLabelOffset(0.01);
   p_muon2_eta_SF__4->GetYaxis()->SetLabelSize(0.12);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleSize(0.16);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleOffset(0.3);
   p_muon2_eta_SF__4->GetYaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->GetZaxis()->SetLabelFont(42);
   p_muon2_eta_SF__4->GetZaxis()->SetLabelSize(0.035);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleSize(0.035);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleOffset(1);
   p_muon2_eta_SF__4->GetZaxis()->SetTitleFont(42);
   p_muon2_eta_SF__4->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("muon2_eta_SF_alt.pdf");
}
