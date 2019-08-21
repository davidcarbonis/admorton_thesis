void fourthJetPt_SingleTop_wMass()
{
//=========Macro generated from canvas: fourthJetPt_SingleTop_wMass/fourthJetPt_SingleTop_wMass
//=========  (Wed Aug 21 19:38:31 2019) by ROOT version 6.18/00

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
   
   THStack *fourthJetPt_SingleTop_wMass_emu = new THStack();
   fourthJetPt_SingleTop_wMass_emu->SetName("fourthJetPt_SingleTop_wMass_emu");
   fourthJetPt_SingleTop_wMass_emu->SetTitle(";Fourth p_{T} (GeV);Events");
   fourthJetPt_SingleTop_wMass_emu->SetMaximum(984.5);
   
   TH1F *fourthJetPt_SingleTop_wMass_emu_stack_1 = new TH1F("fourthJetPt_SingleTop_wMass_emu_stack_1","Fourth Jet p_{T}",35,0,300);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetMinimum(-0.03166467);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetMaximum(1033.725);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetDirectory(0);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetStats(0);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetLineStyle(0);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetLineWidth(0);
   fourthJetPt_SingleTop_wMass_emu_stack_1->SetMarkerStyle(20);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetNdivisions(506);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelOffset(999);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetLabelSize(0.05);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetXaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitle("Events");
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetNdivisions(506);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelOffset(0.01);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetLabelSize(0.062);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleOffset(0.6336);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetYaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelOffset(0.007);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetLabelSize(0.05);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu_stack_1->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->SetHistogram(fourthJetPt_SingleTop_wMass_emu_stack_1);
   
   
   TH1D *fourthJetPt_tZq_wMass_emu_stack_1 = new TH1D("fourthJetPt_tZq_wMass_emu_stack_1","fourthJetPt_tZq_wMass_emu",35,0,300);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(3,-1.275414e-05);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(4,0.05234804);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(5,0.1126835);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(6,0.07243142);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(7,0.03835135);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(8,0.02949156);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(9,0.01713123);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(10,0.009775167);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(11,0.005828715);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(12,0.002562701);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(13,0.003524229);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(14,0.002830238);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(15,0.0006226905);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(16,-0.0006286746);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(17,-0.000399348);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(20,-0.001372419);
   fourthJetPt_tZq_wMass_emu_stack_1->SetBinContent(21,-0.0007591972);
   fourthJetPt_tZq_wMass_emu_stack_1->SetEntries(2170);
   fourthJetPt_tZq_wMass_emu_stack_1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   fourthJetPt_tZq_wMass_emu_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   fourthJetPt_tZq_wMass_emu_stack_1->SetLineColor(ci);
   fourthJetPt_tZq_wMass_emu_stack_1->SetLineWidth(0);
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetLabelFont(42);
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_tZq_wMass_emu_stack_1->GetXaxis()->SetTitleFont(42);
   fourthJetPt_tZq_wMass_emu_stack_1->GetYaxis()->SetLabelFont(42);
   fourthJetPt_tZq_wMass_emu_stack_1->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_tZq_wMass_emu_stack_1->GetYaxis()->SetTitleFont(42);
   fourthJetPt_tZq_wMass_emu_stack_1->GetZaxis()->SetLabelFont(42);
   fourthJetPt_tZq_wMass_emu_stack_1->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_tZq_wMass_emu_stack_1->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_tZq_wMass_emu_stack_1,"");
   
   TH1D *fourthJetPt_ttV_wMass_emu_stack_2 = new TH1D("fourthJetPt_ttV_wMass_emu_stack_2","fourthJetPt_ttV_wMass_emu",35,0,300);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(3,0.001553758);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(4,5.147797);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(5,8.415919);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(6,5.758715);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(7,3.427393);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(8,1.565309);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(9,1.525431);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(10,0.6262777);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(11,0.6070347);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(12,0.2753558);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(13,0.2438958);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(14,0.1029174);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(15,0.1506623);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(16,0.01862843);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(17,0.01934779);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(18,0.001093937);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(19,-0.03166467);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(20,0.01198039);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(21,0.004523704);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(22,0.004299732);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(23,0.00399442);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(24,-0.001524321);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(29,0.001579998);
   fourthJetPt_ttV_wMass_emu_stack_2->SetBinContent(32,-0.00135082);
   fourthJetPt_ttV_wMass_emu_stack_2->SetEntries(14144);
   fourthJetPt_ttV_wMass_emu_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   fourthJetPt_ttV_wMass_emu_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#00ff00");
   fourthJetPt_ttV_wMass_emu_stack_2->SetLineColor(ci);
   fourthJetPt_ttV_wMass_emu_stack_2->SetLineWidth(0);
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetLabelFont(42);
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_ttV_wMass_emu_stack_2->GetXaxis()->SetTitleFont(42);
   fourthJetPt_ttV_wMass_emu_stack_2->GetYaxis()->SetLabelFont(42);
   fourthJetPt_ttV_wMass_emu_stack_2->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_ttV_wMass_emu_stack_2->GetYaxis()->SetTitleFont(42);
   fourthJetPt_ttV_wMass_emu_stack_2->GetZaxis()->SetLabelFont(42);
   fourthJetPt_ttV_wMass_emu_stack_2->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_ttV_wMass_emu_stack_2->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_ttV_wMass_emu_stack_2,"");
   
   TH1D *fourthJetPt_wJets_wMass_emu_stack_3 = new TH1D("fourthJetPt_wJets_wMass_emu_stack_3","fourthJetPt_wJets_wMass_emu",35,0,300);
   fourthJetPt_wJets_wMass_emu_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#cccccc");
   fourthJetPt_wJets_wMass_emu_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   fourthJetPt_wJets_wMass_emu_stack_3->SetLineColor(ci);
   fourthJetPt_wJets_wMass_emu_stack_3->SetLineWidth(0);
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetLabelFont(42);
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_wJets_wMass_emu_stack_3->GetXaxis()->SetTitleFont(42);
   fourthJetPt_wJets_wMass_emu_stack_3->GetYaxis()->SetLabelFont(42);
   fourthJetPt_wJets_wMass_emu_stack_3->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_wJets_wMass_emu_stack_3->GetYaxis()->SetTitleFont(42);
   fourthJetPt_wJets_wMass_emu_stack_3->GetZaxis()->SetLabelFont(42);
   fourthJetPt_wJets_wMass_emu_stack_3->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_wJets_wMass_emu_stack_3->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_wJets_wMass_emu_stack_3,"");
   
   TH1D *fourthJetPt_VVV_wMass_emu_stack_4 = new TH1D("fourthJetPt_VVV_wMass_emu_stack_4","fourthJetPt_VVV_wMass_emu",35,0,300);
   fourthJetPt_VVV_wMass_emu_stack_4->SetBinContent(4,0.05437512);
   fourthJetPt_VVV_wMass_emu_stack_4->SetBinContent(5,0.03603485);
   fourthJetPt_VVV_wMass_emu_stack_4->SetBinContent(6,0.06803485);
   fourthJetPt_VVV_wMass_emu_stack_4->SetBinContent(7,0.0318951);
   fourthJetPt_VVV_wMass_emu_stack_4->SetBinContent(9,0.03392089);
   fourthJetPt_VVV_wMass_emu_stack_4->SetEntries(9);
   fourthJetPt_VVV_wMass_emu_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#00ffff");
   fourthJetPt_VVV_wMass_emu_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   fourthJetPt_VVV_wMass_emu_stack_4->SetLineColor(ci);
   fourthJetPt_VVV_wMass_emu_stack_4->SetLineWidth(0);
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetLabelFont(42);
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_VVV_wMass_emu_stack_4->GetXaxis()->SetTitleFont(42);
   fourthJetPt_VVV_wMass_emu_stack_4->GetYaxis()->SetLabelFont(42);
   fourthJetPt_VVV_wMass_emu_stack_4->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_VVV_wMass_emu_stack_4->GetYaxis()->SetTitleFont(42);
   fourthJetPt_VVV_wMass_emu_stack_4->GetZaxis()->SetLabelFont(42);
   fourthJetPt_VVV_wMass_emu_stack_4->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_VVV_wMass_emu_stack_4->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_VVV_wMass_emu_stack_4,"");
   
   TH1D *fourthJetPt_VV_wMass_emu_stack_5 = new TH1D("fourthJetPt_VV_wMass_emu_stack_5","fourthJetPt_VV_wMass_emu",35,0,300);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(4,1.010649);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(5,0.5931303);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(6,0.3311697);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(7,0.141629);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(8,0.389611);
   fourthJetPt_VV_wMass_emu_stack_5->SetBinContent(9,0.01342892);
   fourthJetPt_VV_wMass_emu_stack_5->SetEntries(45);
   fourthJetPt_VV_wMass_emu_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#ff9933");
   fourthJetPt_VV_wMass_emu_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   fourthJetPt_VV_wMass_emu_stack_5->SetLineColor(ci);
   fourthJetPt_VV_wMass_emu_stack_5->SetLineWidth(0);
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetLabelFont(42);
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_VV_wMass_emu_stack_5->GetXaxis()->SetTitleFont(42);
   fourthJetPt_VV_wMass_emu_stack_5->GetYaxis()->SetLabelFont(42);
   fourthJetPt_VV_wMass_emu_stack_5->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_VV_wMass_emu_stack_5->GetYaxis()->SetTitleFont(42);
   fourthJetPt_VV_wMass_emu_stack_5->GetZaxis()->SetLabelFont(42);
   fourthJetPt_VV_wMass_emu_stack_5->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_VV_wMass_emu_stack_5->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_VV_wMass_emu_stack_5->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_VV_wMass_emu_stack_5,"");
   
   TH1D *fourthJetPt_SingleTop_wMass_emu_stack_6 = new TH1D("fourthJetPt_SingleTop_wMass_emu_stack_6","fourthJetPt_SingleTop_wMass_emu",35,0,300);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(1,0.6608644);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(4,38.7077);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(5,34.42307);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(6,13.02242);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(7,7.497091);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(8,4.340116);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(9,3.141379);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(10,0.7270729);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(11,1.003704);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(12,0.3220701);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(13,0.1444165);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(14,0.1998297);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(15,0.1497666);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(16,0.3940945);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetBinContent(20,0.0005307676);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetEntries(1034);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetDirectory(0);

   ci = TColor::GetColor("#ff00ff");
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetLineColor(ci);
   fourthJetPt_SingleTop_wMass_emu_stack_6->SetLineWidth(0);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetXaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetYaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetYaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetZaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu_stack_6->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_SingleTop_wMass_emu_stack_6,"");
   
   TH1D *fourthJetPt_tt_wMass_emu_stack_7 = new TH1D("fourthJetPt_tt_wMass_emu_stack_7","fourthJetPt_tt_wMass_emu",35,0,300);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(1,0.777125);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(3,1.117279);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(4,711.0863);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(5,841.0213);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(6,404.0921);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(7,211.8311);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(8,100.3881);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(9,56.76437);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(10,26.57142);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(11,20.96381);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(12,12.46454);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(13,5.820289);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(14,3.203786);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(15,1.654445);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(16,1.002863);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(17,0.326938);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(18,0.7678884);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(20,0.3325498);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(22,0.320512);
   fourthJetPt_tt_wMass_emu_stack_7->SetBinContent(25,0.2723083);
   fourthJetPt_tt_wMass_emu_stack_7->SetEntries(7802);
   fourthJetPt_tt_wMass_emu_stack_7->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   fourthJetPt_tt_wMass_emu_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   fourthJetPt_tt_wMass_emu_stack_7->SetLineColor(ci);
   fourthJetPt_tt_wMass_emu_stack_7->SetLineWidth(0);
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetLabelFont(42);
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_tt_wMass_emu_stack_7->GetXaxis()->SetTitleFont(42);
   fourthJetPt_tt_wMass_emu_stack_7->GetYaxis()->SetLabelFont(42);
   fourthJetPt_tt_wMass_emu_stack_7->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_tt_wMass_emu_stack_7->GetYaxis()->SetTitleFont(42);
   fourthJetPt_tt_wMass_emu_stack_7->GetZaxis()->SetLabelFont(42);
   fourthJetPt_tt_wMass_emu_stack_7->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_tt_wMass_emu_stack_7->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_tt_wMass_emu_stack_7->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_tt_wMass_emu_stack_7,"");
   
   TH1D *fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8 = new TH1D("fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8","fourthJetPt_zPlusJetsMadgraph_wMass_emu",35,0,300);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->SetLineColor(ci);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->SetLineWidth(0);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetLabelFont(42);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetXaxis()->SetTitleFont(42);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetLabelFont(42);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetYaxis()->SetTitleFont(42);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetLabelFont(42);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu->Add(fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8,"");
   fourthJetPt_SingleTop_wMass_emu->Draw("");
   
   TH1D *fourthJetPt_data_wMass_emu__1 = new TH1D("fourthJetPt_data_wMass_emu__1","fourthJetPt_data_wMass_emu",35,0,300);
   fourthJetPt_data_wMass_emu__1->SetBinContent(4,807);
   fourthJetPt_data_wMass_emu__1->SetBinContent(5,895);
   fourthJetPt_data_wMass_emu__1->SetBinContent(6,501);
   fourthJetPt_data_wMass_emu__1->SetBinContent(7,215);
   fourthJetPt_data_wMass_emu__1->SetBinContent(8,126);
   fourthJetPt_data_wMass_emu__1->SetBinContent(9,57);
   fourthJetPt_data_wMass_emu__1->SetBinContent(10,31);
   fourthJetPt_data_wMass_emu__1->SetBinContent(11,13);
   fourthJetPt_data_wMass_emu__1->SetBinContent(12,10);
   fourthJetPt_data_wMass_emu__1->SetBinContent(13,4);
   fourthJetPt_data_wMass_emu__1->SetBinContent(14,3);
   fourthJetPt_data_wMass_emu__1->SetBinContent(15,1);
   fourthJetPt_data_wMass_emu__1->SetBinContent(16,3);
   fourthJetPt_data_wMass_emu__1->SetBinContent(17,1);
   fourthJetPt_data_wMass_emu__1->SetBinContent(18,1);
   fourthJetPt_data_wMass_emu__1->SetEntries(2668);
   fourthJetPt_data_wMass_emu__1->SetDirectory(0);
   fourthJetPt_data_wMass_emu__1->SetFillColor(1);
   fourthJetPt_data_wMass_emu__1->SetLineWidth(2);
   fourthJetPt_data_wMass_emu__1->SetLineColor(1); //
   fourthJetPt_data_wMass_emu__1->SetMarkerStyle(20);
   fourthJetPt_data_wMass_emu__1->SetMarkerSize(1.4);
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetLabelSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetTitleSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_data_wMass_emu__1->GetXaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__1->GetYaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__1->GetYaxis()->SetLabelSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetYaxis()->SetTitleSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetYaxis()->SetTitleOffset(1);
   fourthJetPt_data_wMass_emu__1->GetYaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__1->GetZaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__1->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_data_wMass_emu__1->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_data_wMass_emu__1->GetZaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__1->Draw("e x0, same");
   
   TLegend *leg = new TLegend(0.78,0.42,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("fourthJetPt_zPlusJetsMadgraph_wMass_emu_stack_8","Z+jets (LO)","f");

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
   entry=leg->AddEntry("fourthJetPt_tt_wMass_emu_stack_7","t#bar{t}","f");

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
   entry=leg->AddEntry("fourthJetPt_SingleTop_wMass_emu_stack_6","Single top","f");

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
   entry=leg->AddEntry("fourthJetPt_VV_wMass_emu_stack_5","VV","f");

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
   entry=leg->AddEntry("fourthJetPt_VVV_wMass_emu_stack_4","VVV","f");

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
   entry=leg->AddEntry("fourthJetPt_wJets_wMass_emu_stack_3","W+jets","f");

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
   entry=leg->AddEntry("fourthJetPt_ttV_wMass_emu_stack_2","t#bar{t}V","f");

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
   entry=leg->AddEntry("fourthJetPt_tZq_wMass_emu_stack_1","tZq","f");

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
   entry=leg->AddEntry("fourthJetPt_data_wMass_emu","Data","p");
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
   
   TH1F *fourthJetPt_SingleTop_wMass_emu__2 = new TH1F("fourthJetPt_SingleTop_wMass_emu__2","Fourth Jet p_{T}",35,0,300);
   fourthJetPt_SingleTop_wMass_emu__2->SetMinimum(-0.03166467);
   fourthJetPt_SingleTop_wMass_emu__2->SetMaximum(1033.725);
   fourthJetPt_SingleTop_wMass_emu__2->SetDirectory(0);
   fourthJetPt_SingleTop_wMass_emu__2->SetStats(0);
   fourthJetPt_SingleTop_wMass_emu__2->SetLineStyle(0);
   fourthJetPt_SingleTop_wMass_emu__2->SetLineWidth(0);
   fourthJetPt_SingleTop_wMass_emu__2->SetMarkerStyle(20);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetNdivisions(506);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetLabelOffset(999);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetLabelSize(0.05);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu__2->GetXaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetTitle("Events");
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetNdivisions(506);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetLabelOffset(0.01);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetLabelSize(0.062);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetTitleOffset(0.6336);
   fourthJetPt_SingleTop_wMass_emu__2->GetYaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetLabelFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetLabelOffset(0.007);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetLabelSize(0.05);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetTitleSize(0.08);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_SingleTop_wMass_emu__2->GetZaxis()->SetTitleFont(42);
   fourthJetPt_SingleTop_wMass_emu__2->Draw("sameaxis");
   
/*   TPaveText *pt = new TPaveText(0.42852,0.9203237,0.57148,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Fourth Jet p_{T}");
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
   
   TH1D *fourthJetPt_data_wMass_emu__3 = new TH1D("fourthJetPt_data_wMass_emu__3","",35,0,300);
   fourthJetPt_data_wMass_emu__3->SetBinContent(4,1.067377);
   fourthJetPt_data_wMass_emu__3->SetBinContent(5,1.011754);
   fourthJetPt_data_wMass_emu__3->SetBinContent(6,1.183432);
   fourthJetPt_data_wMass_emu__3->SetBinContent(7,0.9642662);
   fourthJetPt_data_wMass_emu__3->SetBinContent(8,1.180742);
   fourthJetPt_data_wMass_emu__3->SetBinContent(9,0.9268946);
   fourthJetPt_data_wMass_emu__3->SetBinContent(10,1.109737);
   fourthJetPt_data_wMass_emu__3->SetBinContent(11,0.5757211);
   fourthJetPt_data_wMass_emu__3->SetBinContent(12,0.7654313);
   fourthJetPt_data_wMass_emu__3->SetBinContent(13,0.643902);
   fourthJetPt_data_wMass_emu__3->SetBinContent(14,0.854856);
   fourthJetPt_data_wMass_emu__3->SetBinContent(15,0.5113791);
   fourthJetPt_data_wMass_emu__3->SetBinContent(16,2.120205);
   fourthJetPt_data_wMass_emu__3->SetBinContent(17,2.891122);
   fourthJetPt_data_wMass_emu__3->SetBinContent(18,1.30042);
   fourthJetPt_data_wMass_emu__3->SetBinError(4,0.05402451);
   fourthJetPt_data_wMass_emu__3->SetBinError(5,0.04796793);
   fourthJetPt_data_wMass_emu__3->SetBinError(6,0.07812579);
   fourthJetPt_data_wMass_emu__3->SetBinError(7,0.09216751);
   fourthJetPt_data_wMass_emu__3->SetBinError(8,0.1553359);
   fourthJetPt_data_wMass_emu__3->SetBinError(9,0.1704205);
   fourthJetPt_data_wMass_emu__3->SetBinError(10,0.2895033);
   fourthJetPt_data_wMass_emu__3->SetBinError(11,0.2004381);
   fourthJetPt_data_wMass_emu__3->SetBinError(12,0.3216115);
   fourthJetPt_data_wMass_emu__3->SetBinError(13,0.4127886);
   fourthJetPt_data_wMass_emu__3->SetBinError(14,0.6721828);
   fourthJetPt_data_wMass_emu__3->SetBinError(15,0.62868);
   fourthJetPt_data_wMass_emu__3->SetBinError(16,2.162264);
   fourthJetPt_data_wMass_emu__3->SetBinError(17,5.703006);
   fourthJetPt_data_wMass_emu__3->SetBinError(18,1.972365);
   fourthJetPt_data_wMass_emu__3->SetMinimum(0.5);
   fourthJetPt_data_wMass_emu__3->SetMaximum(1.5);
   fourthJetPt_data_wMass_emu__3->SetEntries(6.901039);
   fourthJetPt_data_wMass_emu__3->SetDirectory(0);
   fourthJetPt_data_wMass_emu__3->SetStats(0);
   fourthJetPt_data_wMass_emu__3->SetFillColor(1);
   fourthJetPt_data_wMass_emu__3->SetLineWidth(2);
   fourthJetPt_data_wMass_emu__3->SetLineColor(1); //
   fourthJetPt_data_wMass_emu__3->SetMarkerStyle(20);
   fourthJetPt_data_wMass_emu__3->SetMarkerSize(1.6);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetTitle("Fourth p_{T} (GeV)");
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetNdivisions(506);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetLabelOffset(0.013);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetLabelSize(0.13);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetTitleSize(0.13);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetTitleOffset(1);
   fourthJetPt_data_wMass_emu__3->GetXaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetTitle("Data/MC");
   fourthJetPt_data_wMass_emu__3->GetYaxis()->CenterTitle(true);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetNdivisions(506);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetLabelOffset(0.01);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetLabelSize(0.12);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetTitleSize(0.16);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetTitleOffset(0.3);
   fourthJetPt_data_wMass_emu__3->GetYaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__3->GetZaxis()->SetLabelFont(42);
   fourthJetPt_data_wMass_emu__3->GetZaxis()->SetLabelSize(0.035);
   fourthJetPt_data_wMass_emu__3->GetZaxis()->SetTitleSize(0.035);
   fourthJetPt_data_wMass_emu__3->GetZaxis()->SetTitleOffset(1);
   fourthJetPt_data_wMass_emu__3->GetZaxis()->SetTitleFont(42);
   fourthJetPt_data_wMass_emu__3->Draw("e x0, SCAT");
   canvy_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
//   c1->SetSelected(fourthJetPt_data_wMass_emu);
   c1->SaveAs("fourthJetPt_wMass.pdf");
}
