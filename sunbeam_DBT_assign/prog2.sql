delimiter ~
drop procedure if exists sp_tb1;
create procedure sp_tb1(in srsnumber int,in destnumber int,in amount float,out srcbalance float,out destbalance float)
begin
  update accounts set balance=balance-amount where acc_num=srcnumber;

  update accounts set balance=balance+amount where acc_num=destnumber;

  select balance into srcbalance from accounts where acc_num=srcnumber;

  select balance into destbalance from accounts where acc_num=destnumber;

end ~
delimiter ;
