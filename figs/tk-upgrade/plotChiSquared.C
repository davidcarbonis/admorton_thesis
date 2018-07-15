{
// In unnamed scripts, variables not forgotten at end, so must delete them before rerunning script, so ...
  gROOT->Reset("a");
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat("");
  //gStyle->SetOptStat("emr");
  //  gStyle->SetOptStat("euom");
  gStyle->SetStatFontSize(0.035);
  gStyle->SetHistFillColor(kBlue);
  gStyle->SetHistFillStyle(1001);

  gStyle->SetStatFormat("5.3f");
  gStyle->SetStatFontSize(0.04);
  gStyle->SetOptFit(0111);
  gStyle->SetStatW(0.30);
  gStyle->SetStatH(0.02);
  gStyle->SetStatX(0.5);
  gStyle->SetStatY(0.9);
  gStyle->SetTitleYOffset(1.25);
  gStyle->SetTitleSize(0.05, "XYZ");

  TCanvas d1("d1");

  TProfile* ptResTrackletStyle;
//  TH1F* prof;
//  TEfficiency* teffi;

  TFile fileKF("rootFiles-flatGeometry/Chi2Fitter/test_5000_chi2_kf.root");
  TFile filechi2_it1("rootFiles-flatGeometry/Chi2Fitter/test_5000_chi2_it1.root");
  TFile filechi2_it4("rootFiles-flatGeometry/Chi2Fitter/test_5000_chi2_it4.root");

//  fileSLR.GetObject("TMTrackProducer/Effi_KF4ParamsComb/AlgEffFitVsInvPt_KF4ParamsComb", teffi);
//  fileSLR.GetObject("TMTrackProducer/KF4ParamsComb/PtRelResVsTrueEta_KF4ParamsComb", his)
  
// ChiSquared4ParamsApprox
// ChiSquared4ParamsTracklet

  filechi2_it1.GetObject("TMTrackProducer/KF4ParamsComb/PtRelResVsTrueEta_ChiSquared4ParamsTracklet", ptResTrackletStyle);
  ptResTrackletStyle->Draw();
  d1.Draw(); d1.Update(); 
  d1.Print("test.pdf");
  cin.get(); 

  fileKF.Close();
  filechi2_it1.Close();
  filechi2_it4.Close();
}
