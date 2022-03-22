class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
      void setWidth(int w);
      void setLength (int l);
      void setHeight (int h);
       // write prototypes of getters for length, width and height 
      int getWidth();
      int getLength();
      int getHeight();
      int calcVolume();
   
};
