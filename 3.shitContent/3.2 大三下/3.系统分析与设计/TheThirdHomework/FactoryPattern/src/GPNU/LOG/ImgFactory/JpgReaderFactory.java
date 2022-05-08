package GPNU.LOG.ImgFactory;

import GPNU.LOG.ImgReader.ImgReader;
import GPNU.LOG.ImgReader.JpgReader;

public class JpgReaderFactory implements ImageReaderFactory {
    @Override
    public ImgReader getImg() {
        return new JpgReader();
    }
}
