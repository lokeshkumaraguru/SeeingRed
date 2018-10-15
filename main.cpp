#include "Bitmap/bitmap.h"
#include <iostream>
#include <vector>

using namespace std;

//argc - number of arguments in command
//argv - each argument word, stored in an array
int main(int argc, char* argv[])
{
  
  if(argc != 2)
  {
  
    cout<<"Please specify one image file!\n"<<endl;        
  
  }

  if(argc == 2)
  {

    string filename;
    filename = argv[1];
    Bitmap image;
    image.open(filename);
    bool validBmp = image.isImage();

    if(validBmp == false)
    {
    
      cout<<"Image file must be a bitmap with 24-bit color depth.\n"<<endl;
    
    }

    if(validBmp == true)
    {
    
      vector <vector <Pixel> > imagePixels = image.toPixelMatrix();
/*
      imagePixel.size
      imagePixel[0].size
*/
      cout<<argv[1];
      cout<<" is ";
      cout<<imagePixels.size();
      cout<<" pixels high and ";
      cout<<imagePixels[0].size();
      cout<<" pixels wide\n";

    }

  }

  return 0;
}
