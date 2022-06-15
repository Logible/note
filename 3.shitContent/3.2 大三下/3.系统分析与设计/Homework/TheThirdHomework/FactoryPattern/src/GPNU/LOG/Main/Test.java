package GPNU.LOG.Main;

import GPNU.LOG.ImgFactory.ImageReaderFactory;
import GPNU.LOG.ImgFactory.JpgReaderFactory;
import GPNU.LOG.ImgFactory.PngReaderFactory;
import GPNU.LOG.ImgReader.ImgReader;

public class Test {
    public static void main(String[] args) {
        ImageReaderFactory imgFetchFactory = new PngReaderFactory();
        ImgReader imgFetch = imgFetchFactory.getImg();
        imgFetch.readImg();

        ImageReaderFactory imgFetchFactory2 = new JpgReaderFactory();
        ImgReader imgFetch2 = imgFetchFactory2.getImg();
        imgFetch2.readImg();
    }
}
