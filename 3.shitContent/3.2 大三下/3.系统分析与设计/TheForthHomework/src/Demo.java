import com.sun.crypto.provider.DESParameters;

import java.util.ArrayList;
import java.util.List;
import java.util.UnknownFormatConversionException;

public class Demo {
    public static void main(String[] args) {
        //创建老板集合
        List<Employee> Bosses = new ArrayList<>();

        //创建两个老板
        Employee CEO = new Employee(1,1,50000);
        Employee UFO = new Employee(2,1,30000);
        Bosses.add(CEO);
        Bosses.add(UFO);

        //创建公司
        Department Company = new Department(1,0,Bosses);


        //创建销售员工集合
        List<Employee> personnel = new ArrayList<>();

        //创建销售员工(我年纪轻轻工资就达到了3200,你敢想吗
        Employee salesExecutive1 = new Employee(3,1,3200);
        Employee salesExecutive2 = new Employee(4,1,3200);
        personnel.add(salesExecutive1);
        personnel.add(salesExecutive2);

        //创建销售部门，部门属于公司
        Department salePart = new Department(2,1,personnel);

        int BossesSalary = Company.GetDepartmentSalary();
        int personnelSalary = salePart.GetDepartmentSalary();
        System.out.println("董事们的的工资是"+BossesSalary);
        System.out.println("销售部门的总工资是"+personnelSalary);
    }
}
