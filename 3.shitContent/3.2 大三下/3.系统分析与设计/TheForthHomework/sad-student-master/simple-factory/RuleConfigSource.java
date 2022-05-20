public class RuleConfigSource {
    public RuleConfig load(String ruleConfigFilePath) {
        String ruleConfigFileExtension = getFileExtension(ruleConfigFilePath); // 获取扩展名（略）
        IRuleConfigParser parser = null;

        if ("json".equalsIgnoreCase(ruleConfigFileExtension)) {
            parser = new JsonRuleConfigParser();
        } else if ("xml".equalsIgnoreCase(ruleConfigFileExtension)) {
            parser = new XmlRuleConfigParser();
        } else if ("yaml".equalsIgnoreCase(ruleConfigFileExtension)) {
            parser = new YamlRuleConfigParser();
        } else if ("properties".equalsIgnoreCase(ruleConfigFileExtension)) {
            parser = new PropertiesRuleConfigParser();
        }

        String configText = "";
        // ... 从ruleConfigFilePath文件中读取配置文本到configText中（略）
        RuleConfig ruleConfig = parser.parse(configText);
        return ruleConfig;
    }

    // After refactor
    /*
     * public RuleConfig load1(String ruleConfigFilePath) { String
     * ruleConfigFileExtension = getFileExtension(ruleConfigFilePath); // 获取扩展名（略）
     * 
     * IRuleConfigParser parser =
     * RuleConfigParserFactory.createParser(ruleConfigFileExtension);
     * 
     * String configText = ""; // ... 从ruleConfigFilePath文件中读取配置文本到configText中（略）
     * RuleConfig ruleConfig = parser.parse(configText); return ruleConfig; }
     */

    private String getFileExtension(String ruleConfigFilePath) {
        return null;
    }
}
