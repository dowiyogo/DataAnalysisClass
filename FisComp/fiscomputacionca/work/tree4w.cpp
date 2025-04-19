void tree4w() {
   // check to see if the event class is in the dictionary
   // if it is not load the definition in libEvent.so
   if (!TClassTable::GetDict("Event")) {
     gSystem->Load("$ROOTSYS/test/libEvent.so");
   }
   // create a Tree file tree4.root
   TFile f("tree4.root","RECREATE");
   // create a ROOT Tree
   TTree t4("t4","A Tree with Events");
   // create a pointer to an Event object
   Event *event = new Event();
   // create two branches, split one
   t4.Branch("event_branch", "Event", &event,16000,2);
   t4.Branch("event_not_split", "Event", &event,16000,0);
   // a local variable for the event type
   char etype[20];
   // fill the tree
   for (Int_t ev = 0; ev <100; ev++) {
      Float_t sigmat, sigmas;
      gRandom->Rannor(sigmat,sigmas);
      Int_t ntrack   = Int_t(600 + 600 *sigmat/120.);
      Float_t random = gRandom->Rndm(1);
      sprintf(etype,"type%d",ev%5);
      event->SetType(etype);
      event->SetHeader(ev, 200, 960312, random);
      event->SetNseg(Int_t(10*ntrack+20*sigmas));
      event->SetNvertex(Int_t(1+20*gRandom->Rndm()));
      event->SetFlag(UInt_t(random+0.5));
      event->SetTemperature(random+20.);
      for(UChar_t m = 0; m < 10; m++) {
         event->SetMeasure(m, Int_t(gRandom->Gaus(m,m+1)));
      }
     // fill the matrix
     for(UChar_t i0 = 0; i0 < 4; i0++) {
        for(UChar_t i1 = 0; i1 < 4; i1++) {
           event->SetMatrix(i0,i1,gRandom->Gaus(i0*i1,1));
        }
     }
     // create and fill the Track objects
     for (Int_t t = 0; t < ntrack; t++) event->AddTrack(random);
     t4.Fill();      // Fill the tree
     event->Clear(); // Clear before reloading event
  }
  f.Write();            // Write the file header
  t4.Print();           // Print the tree contents
}
