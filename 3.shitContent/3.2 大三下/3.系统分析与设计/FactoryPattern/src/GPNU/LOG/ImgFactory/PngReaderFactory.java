package GPNU.LOG.ImgFactory;

import GPNU.LOG.ImgReader.ImgReader;
import GPNU.LOG.ImgReader.PngReader;

public class PngReaderFactory implements ImageReaderFactory {
    @Override
    public ImgReader getImg() {
        return new PngReader();
    }
}
