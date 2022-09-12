# Write your MySQL query statement below
Select name as Customers from Customers where id not In (Select customerID from Orders)