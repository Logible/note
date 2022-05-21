import java.util.ArrayList;
import java.util.List;

public class Department {
    private int id;
    private int parent_department_id;
    private List<Employee> Employees;

    public Department(int id, int parent_department_id, List<Employee> Employees) {
        this.id = id;
        this.parent_department_id = parent_department_id;
        this.Employees = Employees;
    }

    public Department(int id, int parent_department_id) {
        this.id = id;
        this.parent_department_id = parent_department_id;
    }

    public List<Employee> getEmployees() {
        return Employees;
    }

    public void addEmployees(Employee employee) {
        Employees.add(employee);
    }

    public int GetDepartmentSalary() {
        int salary = 0;
        for(int i = 0; i < this.Employees.size(); i ++){
            salary+=this.Employees.get(i).getSalary();
        }
        return salary;
    }
}
