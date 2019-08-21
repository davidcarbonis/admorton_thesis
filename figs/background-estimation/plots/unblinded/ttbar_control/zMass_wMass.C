void zMass_wMass()
{
//=========Macro generated from canvas: zPairMass_SingleTop_wMass_emu/zPairMass_SingleTop_wMass_emu
//=========  (Wed Aug 21 18:10:04 2019) by ROOT version 6.18/00

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
   
   THStack *zPairMass_SingleTop_wMass_emu = new THStack();
   zPairMass_SingleTop_wMass_emu->SetName("zPairMass_SingleTop_wMass_emu");
   zPairMass_SingleTop_wMass_emu->SetTitle(";Z boson invariant mass (GeV);Events");
   zPairMass_SingleTop_wMass_emu->SetMaximum(389.4);
   
   TH1F *zPairMass_SingleTop_wMass_emu_stack_1 = new TH1F("zPairMass_SingleTop_wMass_emu_stack_1","Invariant Z Mass",20,50,140);
   zPairMass_SingleTop_wMass_emu_stack_1->SetMinimum(0);
   zPairMass_SingleTop_wMass_emu_stack_1->SetMaximum(408.87);
   zPairMass_SingleTop_wMass_emu_stack_1->SetDirectory(0);
   zPairMass_SingleTop_wMass_emu_stack_1->SetStats(0);
   zPairMass_SingleTop_wMass_emu_stack_1->SetLineStyle(0);
   zPairMass_SingleTop_wMass_emu_stack_1->SetLineWidth(0);
   zPairMass_SingleTop_wMass_emu_stack_1->SetMarkerStyle(20);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetNdivisions(506);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelOffset(999);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelSize(0.05);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitle("Events");
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetNdivisions(506);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelOffset(0.01);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelSize(0.062);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleOffset(0.6336);
   zPairMass_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelOffset(0.007);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelSize(0.05);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->SetHistogram(zPairMass_SingleTop_wMass_emu_stack_1);
   
   
   TH1D *zPairMass_tZq_wMass_emu_stack_1 = new TH1D("zPairMass_tZq_wMass_emu_stack_1","zPairMass_tZq_wMass_emu",20,50,140);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(5,0.01242905);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(6,0.04639514);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(7,0.04340869);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(8,0.04749591);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(9,0.03333614);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(10,0.04739086);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(11,0.02455871);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(12,0.03234922);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(13,0.03102847);
   zPairMass_tZq_wMass_emu_stack_1->SetBinContent(14,0.02601623);
   zPairMass_tZq_wMass_emu_stack_1->SetEntries(2170);
   zPairMass_tZq_wMass_emu_stack_1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   zPairMass_tZq_wMass_emu_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   zPairMass_tZq_wMass_emu_stack_1->SetLineColor(ci);
   zPairMass_tZq_wMass_emu_stack_1->SetLineWidth(0);
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetLabelFont(42);
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetLabelSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleOffset(1);
   zPairMass_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleFont(42);
   zPairMass_tZq_wMass_emu_stack_1->GetYaxis()->SetLabelFont(42);
   zPairMass_tZq_wMass_emu_stack_1->GetYaxis()->SetLabelSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleOffset(1);
   zPairMass_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleFont(42);
   zPairMass_tZq_wMass_emu_stack_1->GetZaxis()->SetLabelFont(42);
   zPairMass_tZq_wMass_emu_stack_1->GetZaxis()->SetLabelSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleSize(0.035);
   zPairMass_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleOffset(1);
   zPairMass_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_tZq_wMass_emu_stack_1,"");
   
   TH1D *zPairMass_ttV_wMass_emu_stack_2 = new TH1D("zPairMass_ttV_wMass_emu_stack_2","zPairMass_ttV_wMass_emu",20,50,140);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(5,0.7827502);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(6,2.932985);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(7,2.99729);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(8,2.592273);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(9,3.122917);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(10,3.215713);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(11,3.496841);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(12,2.814775);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(13,3.594512);
   zPairMass_ttV_wMass_emu_stack_2->SetBinContent(14,2.329113);
   zPairMass_ttV_wMass_emu_stack_2->SetEntries(14144);
   zPairMass_ttV_wMass_emu_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   zPairMass_ttV_wMass_emu_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#00ff00");
   zPairMass_ttV_wMass_emu_stack_2->SetLineColor(ci);
   zPairMass_ttV_wMass_emu_stack_2->SetLineWidth(0);
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetLabelFont(42);
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetLabelSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleOffset(1);
   zPairMass_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleFont(42);
   zPairMass_ttV_wMass_emu_stack_2->GetYaxis()->SetLabelFont(42);
   zPairMass_ttV_wMass_emu_stack_2->GetYaxis()->SetLabelSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleOffset(1);
   zPairMass_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleFont(42);
   zPairMass_ttV_wMass_emu_stack_2->GetZaxis()->SetLabelFont(42);
   zPairMass_ttV_wMass_emu_stack_2->GetZaxis()->SetLabelSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleSize(0.035);
   zPairMass_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleOffset(1);
   zPairMass_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_ttV_wMass_emu_stack_2,"");
   
   TH1D *zPairMass_wJets_wMass_emu_stack_3 = new TH1D("zPairMass_wJets_wMass_emu_stack_3","zPairMass_wJets_wMass_emu",20,50,140);
   zPairMass_wJets_wMass_emu_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   zPairMass_wJets_wMass_emu_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   zPairMass_wJets_wMass_emu_stack_3->SetLineColor(ci);
   zPairMass_wJets_wMass_emu_stack_3->SetLineWidth(0);
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetLabelFont(42);
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetLabelSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleOffset(1);
   zPairMass_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleFont(42);
   zPairMass_wJets_wMass_emu_stack_3->GetYaxis()->SetLabelFont(42);
   zPairMass_wJets_wMass_emu_stack_3->GetYaxis()->SetLabelSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleOffset(1);
   zPairMass_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleFont(42);
   zPairMass_wJets_wMass_emu_stack_3->GetZaxis()->SetLabelFont(42);
   zPairMass_wJets_wMass_emu_stack_3->GetZaxis()->SetLabelSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleSize(0.035);
   zPairMass_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleOffset(1);
   zPairMass_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_wJets_wMass_emu_stack_3,"");
   
   TH1D *zPairMass_VVV_wMass_emu_stack_4 = new TH1D("zPairMass_VVV_wMass_emu_stack_4","zPairMass_VVV_wMass_emu",20,50,140);
   zPairMass_VVV_wMass_emu_stack_4->SetBinContent(6,0.02946448);
   zPairMass_VVV_wMass_emu_stack_4->SetBinContent(7,0.033447);
   zPairMass_VVV_wMass_emu_stack_4->SetBinContent(11,0.02619483);
   zPairMass_VVV_wMass_emu_stack_4->SetBinContent(12,0.06850874);
   zPairMass_VVV_wMass_emu_stack_4->SetBinContent(13,0.06664577);
   zPairMass_VVV_wMass_emu_stack_4->SetEntries(9);
   zPairMass_VVV_wMass_emu_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#00ffff");
   zPairMass_VVV_wMass_emu_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   zPairMass_VVV_wMass_emu_stack_4->SetLineColor(ci);
   zPairMass_VVV_wMass_emu_stack_4->SetLineWidth(0);
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetLabelFont(42);
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetLabelSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleOffset(1);
   zPairMass_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleFont(42);
   zPairMass_VVV_wMass_emu_stack_4->GetYaxis()->SetLabelFont(42);
   zPairMass_VVV_wMass_emu_stack_4->GetYaxis()->SetLabelSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleOffset(1);
   zPairMass_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleFont(42);
   zPairMass_VVV_wMass_emu_stack_4->GetZaxis()->SetLabelFont(42);
   zPairMass_VVV_wMass_emu_stack_4->GetZaxis()->SetLabelSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleSize(0.035);
   zPairMass_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleOffset(1);
   zPairMass_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_VVV_wMass_emu_stack_4,"");
   
   TH1D *zPairMass_VV_wMass_emu_stack_5 = new TH1D("zPairMass_VV_wMass_emu_stack_5","zPairMass_VV_wMass_emu",20,50,140);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(5,0.1764741);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(6,0.2227825);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(7,0.2346402);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(8,0.4110828);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(9,0.1558213);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(10,0.4256428);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(11,0.1084657);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(12,0.2699858);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(13,0.151914);
   zPairMass_VV_wMass_emu_stack_5->SetBinContent(14,0.3228092);
   zPairMass_VV_wMass_emu_stack_5->SetEntries(45);
   zPairMass_VV_wMass_emu_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#ff9933");
   zPairMass_VV_wMass_emu_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   zPairMass_VV_wMass_emu_stack_5->SetLineColor(ci);
   zPairMass_VV_wMass_emu_stack_5->SetLineWidth(0);
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetLabelFont(42);
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetLabelSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetTitleSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetTitleOffset(1);
   zPairMass_VV_wMass_emu_stack_5->GetXaxis()->SetTitleFont(42);
   zPairMass_VV_wMass_emu_stack_5->GetYaxis()->SetLabelFont(42);
   zPairMass_VV_wMass_emu_stack_5->GetYaxis()->SetLabelSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetYaxis()->SetTitleSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetYaxis()->SetTitleOffset(1);
   zPairMass_VV_wMass_emu_stack_5->GetYaxis()->SetTitleFont(42);
   zPairMass_VV_wMass_emu_stack_5->GetZaxis()->SetLabelFont(42);
   zPairMass_VV_wMass_emu_stack_5->GetZaxis()->SetLabelSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetZaxis()->SetTitleSize(0.035);
   zPairMass_VV_wMass_emu_stack_5->GetZaxis()->SetTitleOffset(1);
   zPairMass_VV_wMass_emu_stack_5->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_VV_wMass_emu_stack_5,"");
   
   TH1D *zPairMass_SingleTop_wMass_emu_stack_6 = new TH1D("zPairMass_SingleTop_wMass_emu_stack_6","zPairMass_SingleTop_wMass_emu",20,50,140);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(5,2.716738);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(6,9.271538);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(7,10.7404);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(8,10.6053);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(9,11.58463);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(10,12.76866);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(11,11.96308);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(12,14.63206);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(13,11.6165);
   zPairMass_SingleTop_wMass_emu_stack_6->SetBinContent(14,8.835209);
   zPairMass_SingleTop_wMass_emu_stack_6->SetEntries(1034);
   zPairMass_SingleTop_wMass_emu_stack_6->SetDirectory(0);

   ci = TColor::GetColor("#ff00ff");
   zPairMass_SingleTop_wMass_emu_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   zPairMass_SingleTop_wMass_emu_stack_6->SetLineColor(ci);
   zPairMass_SingleTop_wMass_emu_stack_6->SetLineWidth(0);
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetLabelSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu_stack_6->GetYaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_6->GetYaxis()->SetLabelSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu_stack_6->GetZaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu_stack_6->GetZaxis()->SetLabelSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleSize(0.035);
   zPairMass_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_SingleTop_wMass_emu_stack_6,"");
   
   TH1D *zPairMass_tt_wMass_emu_stack_7 = new TH1D("zPairMass_tt_wMass_emu_stack_7","zPairMass_tt_wMass_emu",20,50,140);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(5,70.83825);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(6,246.3051);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(7,258.4273);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(8,275.76);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(9,266.8835);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(10,282.7573);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(11,266.2021);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(12,282.726);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(13,281.3366);
   zPairMass_tt_wMass_emu_stack_7->SetBinContent(14,169.543);
   zPairMass_tt_wMass_emu_stack_7->SetEntries(7802);
   zPairMass_tt_wMass_emu_stack_7->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   zPairMass_tt_wMass_emu_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   zPairMass_tt_wMass_emu_stack_7->SetLineColor(ci);
   zPairMass_tt_wMass_emu_stack_7->SetLineWidth(0);
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetLabelFont(42);
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetLabelSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetTitleSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetTitleOffset(1);
   zPairMass_tt_wMass_emu_stack_7->GetXaxis()->SetTitleFont(42);
   zPairMass_tt_wMass_emu_stack_7->GetYaxis()->SetLabelFont(42);
   zPairMass_tt_wMass_emu_stack_7->GetYaxis()->SetLabelSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetYaxis()->SetTitleSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetYaxis()->SetTitleOffset(1);
   zPairMass_tt_wMass_emu_stack_7->GetYaxis()->SetTitleFont(42);
   zPairMass_tt_wMass_emu_stack_7->GetZaxis()->SetLabelFont(42);
   zPairMass_tt_wMass_emu_stack_7->GetZaxis()->SetLabelSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetZaxis()->SetTitleSize(0.035);
   zPairMass_tt_wMass_emu_stack_7->GetZaxis()->SetTitleOffset(1);
   zPairMass_tt_wMass_emu_stack_7->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_tt_wMass_emu_stack_7,"");
   
   TH1D *zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8 = new TH1D("zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8","zPairMass_zPlusJetsMadgraph_wMass_emu",20,50,140);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->SetLineColor(ci);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->SetLineWidth(0);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetLabelFont(42);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetLabelSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleOffset(1);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleFont(42);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetLabelFont(42);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetLabelSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleOffset(1);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleFont(42);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetLabelFont(42);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetLabelSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleSize(0.035);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleOffset(1);
   zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu->Add(zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8,"");
   zPairMass_SingleTop_wMass_emu->Draw("");
   
   TH1D *zPairMass_data_wMass_emu__1 = new TH1D("zPairMass_data_wMass_emu__1","zPairMass_data_wMass_emu",20,50,140);
   zPairMass_data_wMass_emu__1->SetBinContent(5,79);
   zPairMass_data_wMass_emu__1->SetBinContent(6,277);
   zPairMass_data_wMass_emu__1->SetBinContent(7,278);
   zPairMass_data_wMass_emu__1->SetBinContent(8,292);
   zPairMass_data_wMass_emu__1->SetBinContent(9,303);
   zPairMass_data_wMass_emu__1->SetBinContent(10,322);
   zPairMass_data_wMass_emu__1->SetBinContent(11,317);
   zPairMass_data_wMass_emu__1->SetBinContent(12,354);
   zPairMass_data_wMass_emu__1->SetBinContent(13,261);
   zPairMass_data_wMass_emu__1->SetBinContent(14,185);
   zPairMass_data_wMass_emu__1->SetEntries(2668);
   zPairMass_data_wMass_emu__1->SetDirectory(0);
   zPairMass_data_wMass_emu__1->SetFillColor(1);
   zPairMass_data_wMass_emu__1->SetLineWidth(2);
   zPairMass_data_wMass_emu__1->SetLineColor(1); //
   zPairMass_data_wMass_emu__1->SetMarkerStyle(20);
   zPairMass_data_wMass_emu__1->SetMarkerSize(1.4);
   zPairMass_data_wMass_emu__1->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_data_wMass_emu__1->GetXaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__1->GetXaxis()->SetLabelSize(0.035);
   zPairMass_data_wMass_emu__1->GetXaxis()->SetTitleSize(0.035);
   zPairMass_data_wMass_emu__1->GetXaxis()->SetTitleOffset(1);
   zPairMass_data_wMass_emu__1->GetXaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__1->GetYaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__1->GetYaxis()->SetLabelSize(0.035);
   zPairMass_data_wMass_emu__1->GetYaxis()->SetTitleSize(0.035);
   zPairMass_data_wMass_emu__1->GetYaxis()->SetTitleOffset(1);
   zPairMass_data_wMass_emu__1->GetYaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__1->GetZaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__1->GetZaxis()->SetLabelSize(0.035);
   zPairMass_data_wMass_emu__1->GetZaxis()->SetTitleSize(0.035);
   zPairMass_data_wMass_emu__1->GetZaxis()->SetTitleOffset(1);
   zPairMass_data_wMass_emu__1->GetZaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__1->Draw("e x0, same");
   
   TLegend *leg = new TLegend(0.78,0.42,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("zPairMass_zPlusJetsMadgraph_wMass_emu_stack_8","Z+jets (LO)","f");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_tt_wMass_emu_stack_7","t#bar{t}","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_SingleTop_wMass_emu_stack_6","Single top","f");

   ci = TColor::GetColor("#ff00ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_VV_wMass_emu_stack_5","VV","f");

   ci = TColor::GetColor("#ff9933");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_VVV_wMass_emu_stack_4","VVV","f");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_wJets_wMass_emu_stack_3","W+jets","f");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_ttV_wMass_emu_stack_2","t#bar{t}V","f");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_tZq_wMass_emu_stack_1","tZq","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("zPairMass_data_wMass_emu","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.968,0.9429101,"35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06792969);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.096,0.9429101,"");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.05419922);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16899,0.9429101,"");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.04119141);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *zPairMass_SingleTop_wMass_emu__2 = new TH1F("zPairMass_SingleTop_wMass_emu__2","Invariant Z Mass",20,50,140);
   zPairMass_SingleTop_wMass_emu__2->SetMinimum(0);
   zPairMass_SingleTop_wMass_emu__2->SetMaximum(408.87);
   zPairMass_SingleTop_wMass_emu__2->SetDirectory(0);
   zPairMass_SingleTop_wMass_emu__2->SetStats(0);
   zPairMass_SingleTop_wMass_emu__2->SetLineStyle(0);
   zPairMass_SingleTop_wMass_emu__2->SetLineWidth(0);
   zPairMass_SingleTop_wMass_emu__2->SetMarkerStyle(20);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetNdivisions(506);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetLabelOffset(999);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetLabelSize(0.05);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu__2->GetXaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetTitle("Events");
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetNdivisions(506);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetLabelOffset(0.01);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetLabelSize(0.062);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetTitleOffset(0.6336);
   zPairMass_SingleTop_wMass_emu__2->GetYaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetLabelFont(42);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetLabelOffset(0.007);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetLabelSize(0.05);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetTitleSize(0.08);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetTitleOffset(1);
   zPairMass_SingleTop_wMass_emu__2->GetZaxis()->SetTitleFont(42);
   zPairMass_SingleTop_wMass_emu__2->Draw("sameaxis");
   
/*   TPaveText *pt = new TPaveText(0.412152,0.94,0.587848,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Invariant Z Mass");
   pt->Draw();*/
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
   
   TH1D *zPairMass_data_wMass_emu__3 = new TH1D("zPairMass_data_wMass_emu__3","",20,50,140);
   zPairMass_data_wMass_emu__3->SetBinContent(5,1.060024);
   zPairMass_data_wMass_emu__3->SetBinContent(6,1.070291);
   zPairMass_data_wMass_emu__3->SetBinContent(7,1.020271);
   zPairMass_data_wMass_emu__3->SetBinContent(8,1.008928);
   zPairMass_data_wMass_emu__3->SetBinContent(9,1.075306);
   zPairMass_data_wMass_emu__3->SetBinContent(10,1.07615);
   zPairMass_data_wMass_emu__3->SetBinContent(11,1.124827);
   zPairMass_data_wMass_emu__3->SetBinContent(12,1.177866);
   zPairMass_data_wMass_emu__3->SetBinContent(13,0.8793884);
   zPairMass_data_wMass_emu__3->SetBinContent(14,1.021783);
   zPairMass_data_wMass_emu__3->SetBinError(5,0.1711741);
   zPairMass_data_wMass_emu__3->SetBinError(6,0.09252891);
   zPairMass_data_wMass_emu__3->SetBinError(7,0.08697575);
   zPairMass_data_wMass_emu__3->SetBinError(8,0.08368561);
   zPairMass_data_wMass_emu__3->SetBinError(9,0.0889922);
   zPairMass_data_wMass_emu__3->SetBinError(10,0.08641207);
   zPairMass_data_wMass_emu__3->SetBinError(11,0.09209111);
   zPairMass_data_wMass_emu__3->SetBinError(12,0.09238674);
   zPairMass_data_wMass_emu__3->SetBinError(13,0.07462232);
   zPairMass_data_wMass_emu__3->SetBinError(14,0.1068169);
   zPairMass_data_wMass_emu__3->SetMinimum(0.5);
   zPairMass_data_wMass_emu__3->SetMaximum(1.5);
   zPairMass_data_wMass_emu__3->SetEntries(1085.947);
   zPairMass_data_wMass_emu__3->SetDirectory(0);
   zPairMass_data_wMass_emu__3->SetStats(0);
   zPairMass_data_wMass_emu__3->SetFillColor(1);
   zPairMass_data_wMass_emu__3->SetLineWidth(2);
   zPairMass_data_wMass_emu__3->SetLineColor(1); //
   zPairMass_data_wMass_emu__3->SetMarkerStyle(20);
   zPairMass_data_wMass_emu__3->SetMarkerSize(1.6);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetTitle("Z boson invariant mass (GeV)");
   zPairMass_data_wMass_emu__3->GetXaxis()->SetNdivisions(506);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetLabelOffset(0.013);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetLabelSize(0.13);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetTitleSize(0.13);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetTitleOffset(1);
   zPairMass_data_wMass_emu__3->GetXaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetTitle("Data/MC");
   zPairMass_data_wMass_emu__3->GetYaxis()->CenterTitle(true);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetNdivisions(506);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetLabelOffset(0.01);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetLabelSize(0.12);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetTitleSize(0.16);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetTitleOffset(0.3);
   zPairMass_data_wMass_emu__3->GetYaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__3->GetZaxis()->SetLabelFont(42);
   zPairMass_data_wMass_emu__3->GetZaxis()->SetLabelSize(0.035);
   zPairMass_data_wMass_emu__3->GetZaxis()->SetTitleSize(0.035);
   zPairMass_data_wMass_emu__3->GetZaxis()->SetTitleOffset(1);
   zPairMass_data_wMass_emu__3->GetZaxis()->SetTitleFont(42);
   zPairMass_data_wMass_emu__3->Draw("e x0, SCAT");
   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SaveAs("zMass_wMass.pdf");
}
