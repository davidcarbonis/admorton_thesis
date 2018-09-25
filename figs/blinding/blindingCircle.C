   double mTop = 173.21;
   double mW = 80.3585;
   double sigmaTop = 30.;
   double sigmaW = 8.;

   uint n = 10;

   uint k = 0;
   TPolyMarker *pmSR = new TPolyMarker(52500*n*n);
   for (uint i = 0; i!=150*n; i++) {
     for (uint j = 0; j!=350*n; j++) {
       double wChi2Term = (double(i)/n-mW)/(sigmaW);
       double topChi2Term = (double(j)/n-mTop)/(sigmaTop);
       if ( (wChi2Term*wChi2Term + topChi2Term*topChi2Term) < 4.1 && (wChi2Term*wChi2Term + topChi2Term*topChi2Term) > 3.9 ) {
         pmSR->SetPoint(k,double(i)/n,double(j)/n);
         k++;
       }
     }
   }

   pmSR->Draw("same");

   uint a = 0;
   TPolyMarker *pmSB = new TPolyMarker(52500*n*n);
   for (uint b = 0; b!=150*n; b++) {
     for (uint c = 0; c!=350*n; c++) {
       double wChi2Term = (double(b)/n-mW)/(sigmaW);
       double topChi2Term = (double(c)/n-mTop)/(sigmaTop);
       if ( (wChi2Term*wChi2Term + topChi2Term*topChi2Term) < 30.1 && (wChi2Term*wChi2Term + topChi2Term*topChi2Term) > 29.9 ) {
         pmSB->SetPoint(a,double(b)/n,double(c)/n);
         a++;
       }
     }
   }

   pmSB->Draw("same");
   
