{
  TFile file1("noMS_5000_3p5.root");
  TFile file2("MS_Ian_5000_3p5.root");
  TFile file3("MS_Alex_5000_3p5.root");

  TCanvas d1("d1");

  TEfficiency* teffi1;
  TEfficiency* teffi2;
  TEfficiency* teffi3;

  file1.GetObject("TMTrackProducer/KF4ParamsComb/AlgEffFitVsInvPt_KF4ParamsComb", teffi1);
  teffi1->SetMarkerStyle(25);
  teffi1->Draw("AP");
  d1.Update();
  auto g = teffi1->GetPaintedGraph();
  g->SetMinimum(0.);
  leg.AddEntry(teffi1, "1", "P");


  file2.GetObject("TMTrackProducer/KF4ParamsComb/AlgEffFitVsInvPt_KF4ParamsComb", teffi2);
  teffi2->SetMarkerStyle(21);
  teffi2->Draw("P SAME");
  d1.Update();
  leg.AddEntry(teffi2, "2", "P");

  d1.Print("test.pdf");

  file1.Close();
  file2.Close();
  file3.Close();
}