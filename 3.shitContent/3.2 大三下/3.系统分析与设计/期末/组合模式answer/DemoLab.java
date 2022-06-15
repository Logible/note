public class DemoLab {
    public static void main(String[] args) {
        // 构建公司的组织结构
        Department rootDepartment = new Department(1001);
        Department saleDepartment = new Department(100101);
        Department financialDepartment = new Department(100102);

        Employee zhangsan = new Employee(1, 10000);
        Employee lisi = new Employee(2, 5000);
        Employee wangwu = new Employee(3, 3000);
        Employee zhaoliu = new Employee(4, 4000);

        rootDepartment.addSubNode(saleDepartment);
        rootDepartment.addSubNode(financialDepartment);
        rootDepartment.addSubNode(zhangsan);
        saleDepartment.addSubNode(lisi);
        financialDepartment.addSubNode(wangwu);
        financialDepartment.addSubNode(zhaoliu);

        // 计算财务部的薪资成本
        System.out.println("部门：" + financialDepartment.id);
        System.out.println("薪资成本：" + financialDepartment.calculateSalary());
    }
}