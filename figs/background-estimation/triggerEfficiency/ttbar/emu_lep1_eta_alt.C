void emu_lep1_eta_alt()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug 24 23:32:22 2019) by ROOT version 6.18/00

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
   
   TProfile *muonElectron1_eta_MC = new TProfile("muonElectron1_eta_MC","e#mu final state - electron",5, xAxis);
   muonElectron1_eta_MC->SetBinEntries(0,1);
   muonElectron1_eta_MC->SetBinEntries(1,329);
   muonElectron1_eta_MC->SetBinEntries(2,362);
   muonElectron1_eta_MC->SetBinEntries(3,986);
   muonElectron1_eta_MC->SetBinEntries(4,324);
   muonElectron1_eta_MC->SetBinEntries(5,340);
   muonElectron1_eta_MC->SetBinContent(0,1);
   muonElectron1_eta_MC->SetBinContent(1,309);
   muonElectron1_eta_MC->SetBinContent(2,354);
   muonElectron1_eta_MC->SetBinContent(3,952);
   muonElectron1_eta_MC->SetBinContent(4,313);
   muonElectron1_eta_MC->SetBinContent(5,321);
   muonElectron1_eta_MC->SetBinError(0,1);
   muonElectron1_eta_MC->SetBinError(1,0.01382608);
   muonElectron1_eta_MC->SetBinError(2,0.009189442);
   muonElectron1_eta_MC->SetBinError(3,0.005819732);
   muonElectron1_eta_MC->SetBinError(4,0.0113897);
   muonElectron1_eta_MC->SetBinError(5,0.01315283);
   muonElectron1_eta_MC->SetEntries(2342);

   muonElectron1_eta_MC->SetMinimum(0.7);
   muonElectron1_eta_MC->SetMaximum(1.2);
   muonElectron1_eta_MC->SetLineColor(1);
   muonElectron1_eta_MC->SetLineWidth(2);
   muonElectron1_eta_MC->SetMarkerColor(1);
   muonElectron1_eta_MC->SetMarkerStyle(20);
   muonElectron1_eta_MC->SetMarkerSize(1);
   
   muonElectron1_eta_MC->GetXaxis()->SetTitle(" #eta");
   muonElectron1_eta_MC->GetXaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetXaxis()->SetLabelOffset(999);
   muonElectron1_eta_MC->GetXaxis()->SetLabelSize(0.05);
   muonElectron1_eta_MC->GetXaxis()->SetTitleSize(0.08);
   muonElectron1_eta_MC->GetXaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetXaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_eta_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetYaxis()->SetLabelOffset(0.01);
   muonElectron1_eta_MC->GetYaxis()->SetLabelSize(0.062);
   muonElectron1_eta_MC->GetYaxis()->SetTitleSize(0.08);
   muonElectron1_eta_MC->GetYaxis()->SetTitleOffset(0.58);
   muonElectron1_eta_MC->GetYaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelFont(42);
   muonElectron1_eta_MC->GetZaxis()->SetLabelOffset(0.007);
   muonElectron1_eta_MC->GetZaxis()->SetLabelSize(0.05);
   muonElectron1_eta_MC->GetZaxis()->SetTitleSize(0.08);
   muonElectron1_eta_MC->GetZaxis()->SetTitleOffset(1);
   muonElectron1_eta_MC->GetZaxis()->SetTitleFont(42);
   muonElectron1_eta_MC->Draw("E1");
   
   TProfile *muonElectron1_eta_data = new TProfile("muonElectron1_eta_data","",5, xAxis);
   muonElectron1_eta_data->SetBinEntries(0,2);
   muonElectron1_eta_data->SetBinEntries(1,239);
   muonElectron1_eta_data->SetBinEntries(2,235);
   muonElectron1_eta_data->SetBinEntries(3,687);
   muonElectron1_eta_data->SetBinEntries(4,235);
   muonElectron1_eta_data->SetBinEntries(5,199);
   muonElectron1_eta_data->SetBinContent(0,2);
   muonElectron1_eta_data->SetBinContent(1,221);
   muonElectron1_eta_data->SetBinContent(2,227);
   muonElectron1_eta_data->SetBinContent(3,663);
   muonElectron1_eta_data->SetBinContent(4,225);
   muonElectron1_eta_data->SetBinContent(5,186);
   muonElectron1_eta_data->SetBinError(0,1.414214);
   muonElectron1_eta_data->SetBinError(1,0.01808359);
   muonElectron1_eta_data->SetBinError(2,0.01403305);
   muonElectron1_eta_data->SetBinError(3,0.007239845);
   muonElectron1_eta_data->SetBinError(4,0.01508216);
   muonElectron1_eta_data->SetBinError(5,0.01929893);
   muonElectron1_eta_data->SetEntries(1597);

   muonElectron1_eta_data->SetLineColor(2);
   muonElectron1_eta_data->SetLineWidth(2);
   muonElectron1_eta_data->SetMarkerColor(2);
   muonElectron1_eta_data->SetMarkerStyle(22);
   muonElectron1_eta_data->SetMarkerSize(1.2);

   muonElectron1_eta_data->GetXaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetXaxis()->SetLabelOffset(999);
   muonElectron1_eta_data->GetXaxis()->SetLabelSize(0.05);
   muonElectron1_eta_data->GetXaxis()->SetTitleSize(0.08);
   muonElectron1_eta_data->GetXaxis()->SetTitleOffset(1);
   muonElectron1_eta_data->GetXaxis()->SetTitleFont(42);
   muonElectron1_eta_data->GetYaxis()->SetTitle(" Efficiency");
   muonElectron1_eta_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetYaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetYaxis()->SetLabelOffset(0.01);
   muonElectron1_eta_data->GetYaxis()->SetLabelSize(0.062);
   muonElectron1_eta_data->GetYaxis()->SetTitleSize(0.08);
   muonElectron1_eta_data->GetYaxis()->SetTitleOffset(0.6336);
   muonElectron1_eta_data->GetYaxis()->SetTitleFont(42);
   muonElectron1_eta_data->GetZaxis()->SetLabelFont(42);
   muonElectron1_eta_data->GetZaxis()->SetLabelOffset(0.007);
   muonElectron1_eta_data->GetZaxis()->SetLabelSize(0.05);
   muonElectron1_eta_data->GetZaxis()->SetTitleSize(0.08);
   muonElectron1_eta_data->GetZaxis()->SetTitleOffset(1);
   muonElectron1_eta_data->GetZaxis()->SetTitleFont(42);
   muonElectron1_eta_data->Draw("same E1");
   
   TLegend *leg = new TLegend(0.45,0.22,0.52,0.43,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   TLegendEntry *entry=leg->AddEntry("muonElectron1_eta_data", "Data Efficiency", "PEL");
   entry=leg->AddEntry("muonElectron1_eta_MC", "MC Efficiency", "PEL");
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

   TH1D *p_muonElectron1_eta_SF__5 = new TH1D("p_muonElectron1_eta_SF__5","",5, xAxis);
   p_muonElectron1_eta_SF__5->SetBinContent(0,1);
   p_muonElectron1_eta_SF__5->SetBinContent(1,0.9845364);
   p_muonElectron1_eta_SF__5->SetBinContent(2,0.987787);
   p_muonElectron1_eta_SF__5->SetBinContent(3,0.9995321);
   p_muonElectron1_eta_SF__5->SetBinContent(4,0.9910951);
   p_muonElectron1_eta_SF__5->SetBinContent(5,0.9899967);
   p_muonElectron1_eta_SF__5->SetBinError(1,0.08367752);
   p_muonElectron1_eta_SF__5->SetBinError(2,0.08274888);
   p_muonElectron1_eta_SF__5->SetBinError(3,0.04967386);
   p_muonElectron1_eta_SF__5->SetBinError(4,0.08492091);
   p_muonElectron1_eta_SF__5->SetBinError(5,0.08836124);
   p_muonElectron1_eta_SF__5->SetEntries(782.8579);

   p_muonElectron1_eta_SF__5->SetMinimum(0.8);
   p_muonElectron1_eta_SF__5->SetMaximum(1.2);
   p_muonElectron1_eta_SF__5->SetLineColor(8);
   p_muonElectron1_eta_SF__5->SetLineWidth(2);
   p_muonElectron1_eta_SF__5->SetMarkerColor(8);
   p_muonElectron1_eta_SF__5->SetMarkerStyle(33);
   p_muonElectron1_eta_SF__5->SetMarkerSize(1.5);

   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitle(" #eta");
   p_muonElectron1_eta_SF__5->GetXaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetLabelOffset(0.013);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetLabelSize(0.13);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleSize(0.13);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleOffset(1);
   p_muonElectron1_eta_SF__5->GetXaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitle("Data/MC SF");
   p_muonElectron1_eta_SF__5->GetYaxis()->SetNdivisions(506);
   p_muonElectron1_eta_SF__5->GetYaxis()->CenterTitle(true);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetLabelOffset(0.01);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetLabelSize(0.12);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleSize(0.16);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleOffset(0.3);
   p_muonElectron1_eta_SF__5->GetYaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetLabelFont(42);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetLabelSize(0.035);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleSize(0.035);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleOffset(1);
   p_muonElectron1_eta_SF__5->GetZaxis()->SetTitleFont(42);
   p_muonElectron1_eta_SF__5->Draw("E1");

   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
//   c1->SetSelected(zPairPt_SingleTop_wMass_emu);
   c1->SaveAs("muonElectron1_eta_SF_alt.pdf");
}
