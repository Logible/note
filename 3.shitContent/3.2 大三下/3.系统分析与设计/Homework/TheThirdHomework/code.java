public interface ImageReaderFactory {
   ImgReader getImg();
}

public class JpgReaderFactory implements ImageReaderFactory {
    @Override
    public ImgReader getImg() {
        return new JpgReader();
    }
}

public class PngReaderFactory implements ImageReaderFactory {
    @Override
    public ImgReader getImg() {
        return new PngReader();
    }
}

public abstract class ImgReader {
    /**
     * 获取图片
     */
    public abstract void readImg();
}

public class JpgReader extends ImgReader{

    @Override
    public void readImg() {
        System.out.println("I am reading jpgImg");
    }
}

public class PngReader extends ImgReader{
    @Override
    public void readImg() {
        System.out.println("I am reading pngImg");
    }
}

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
