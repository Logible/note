public class RuleConfigSource1 {
  public RuleConfig load(String ruleConfigFilePath) throws InvalidRuleConfigException {
    String ruleConfigFileExtension = getFileExtension(ruleConfigFilePath);

    IRuleConfigParserFactory parserFactory = null;
    if ("json".equalsIgnoreCase(ruleConfigFileExtension)) {
      parserFactory = new JsonRuleConfigParserFactory();
    } else if ("xml".equalsIgnoreCase(ruleConfigFileExtension)) {
      parserFactory = new XmlRuleConfigParserFactory();
    } else if ("yaml".equalsIgnoreCase(ruleConfigFileExtension)) {
      parserFactory = new YamlRuleConfigParserFactory();
    } else if ("properties".equalsIgnoreCase(ruleConfigFileExtension)) {
      parserFactory = new PropertiesRuleConfigParserFactory();
    } else {
      throw new InvalidRuleConfigException("Rule config file format is not supported: " + ruleConfigFilePath);
    }
    IRuleConfigParser parser = parserFactory.createParser();

    String configText = "";
    // 从ruleConfigFilePath文件中读取配置文本到configText中
    RuleConfig ruleConfig = parser.parse(configText);
    return ruleConfig;
  }

  // 可进一步重构
  /*
   * public RuleConfig load(String ruleConfigFilePath) { String
   * ruleConfigFileExtension = getFileExtension(ruleConfigFilePath);
   * 
   * IRuleConfigParserFactory parserFactory =
   * RuleConfigParserFactoryMap.getParserFactory(ruleConfigFileExtension);
   * 
   * IRuleConfigParser parser = parserFactory.createParser();
   * 
   * ... ...
   */

  private String getFileExtension(String filePath) {
    // ...解析文件名获取扩展名，比如rule.json，返回json
    return "json";
  }
}
