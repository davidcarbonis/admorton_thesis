   double mTop = 173.21;
   double mW = 80.3585;
   double sigmaTop = 30.;
   double sigmaW = 8.;

   uint k = 0;
   TPolyMarker *pmSR = new TPolyMarker(5250000);
   for (uint i = 0; i!=1500; i++) {
     for (uint j = 0; j!=3500; j++) {
       double wChi2Term = (double(i)/10-mW)/(sigmaW);
       double topChi2Term = (double(j)/10-mTop)/(sigmaTop);
       if ( (wChi2Term*wChi2Term + topChi2Term*topChi2Term) < 4.1 && (wChi2Term*wChi2Term + topChi2Term*topChi2Term) > 3.9 ) {
         pmSR->SetPoint(k,double(i)/10,double(j)/10);
         k++;
       }
     }
   }

   pmSR->Draw("same");

   uint a = 0;
   TPolyMarker *pmSB = new TPolyMarker(525000000);
   for (uint b = 0; b!=15000; b++) {
     for (uint c = 0; c!=35000; c++) {
       double wChi2Term = (double(b)/100-mW)/(sigmaW);
       double topChi2Term = (double(c)/100-mTop)/(sigmaTop);
       if ( (wChi2Term*wChi2Term + topChi2Term*topChi2Term) < 30.1 && (wChi2Term*wChi2Term + topChi2Term*topChi2Term) > 29.9 ) {
         pmSB->SetPoint(a,double(b)/100,double(c)/100);
         a++;
       }
     }
   }

   pmSB->Draw("same");
   
