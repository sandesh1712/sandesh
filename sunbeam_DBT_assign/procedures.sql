 delimiter ~
 create procedure sp_delete_tb1()
 begin
   delete from tb1 where result > 20;
 end ~
 delimiter ;  //ok

delimiter ~
create procedure sp_insert_tb1()
begin
  declare r1 int default 10;
  declare r2 int;
  set r2=20;
insert into tb1
values(r1+r2),(r2-r1);
end ~
delimiter ;   //ok

delimiter ~
create procedure sp_delete_tb1()
begin
 delete from tb1 where result>5;
end ~
delimiter ;  //ok

delimiter ~
create procedure sp_day()
begin
  declare year int default 2020;
  declare day int default 28;
  
if year mod 4 = 0 then
  set day=29;
  end if;

  insert into days values (day);   
end ~
delimiter ;     --if condition 

delimiter ~
create procedure sp_days()
begin
   declare year int default 2020;
   declare day int default 4;
  
  if year%4=0 then
   set day=29;
  else
    set day=28;
  end if;
   insert into days values (day);
end ~
delimiter ;  --if-else

delimiter ~
create procedure sp_days()
begin
   declare month int default 0;
   declare day int default 0;
   set month=3;
   if month=1 or month=3 or month=5 or month=7 or month=10 or month=12 then
   set day=31;
   elseif month=4 or month=6 or month=8 or month=9 or month=11 then 
   set day=30;
   else
     set day=28;
   end if;
   insert into days values (day);
end ~
delimiter ;   --if-elseif-else

delimiter ~
create procedure sp_days()
begin
  declare month int default 0;
  declare day int default 0;
  set month=11;
    case month
    when 10 then set day=31;
    when 11 then set day=30;
    when 12 then set day=31;
    else set day=0;
    end case;
   insert into days values(day);
end ~
delimiter ;    --swith case

delimiter ~
create procedure sp_tb1()
begin
  declare count int default 1;
  declare res int default 0;
  while count<=10 do
    set res=res+count;
    set count=count+1;
  end while;
  insert into tb1 values(res);
end ~
delimiter ;  --while loop

delimiter ~
drop procedure if exists sp_tb1;
create procedure sp_tb1()
begin
  declare count int default 1;
  declare res int default 0;
  repeat
    set res=res+count;
    set count=count+1;
 until count>10
  end repeat;
  insert into tb1 values (res);
end ~
delimiter ;  --do-while loop

delimiter ~
drop procedure if exists sp_tb1;
create procedure sp_tb1()
begin
declare res int default 0;
declare count int default 0;  
label:LOOP
  set res=res+count;
  set count=count+1;
  if count=10 then
      leave label;
  end if;
 end loop label;
  insert into tb1 values(res);
end ~
delimiter ;

delimiter ~
drop procedure if exists sp_tb1;
create procedure sp_tb1(in s1 int,in s2 int)
  begin
   insert into tb1 values(s1+s2);
end ~
delimiter ;  --in parameter

delimeter ~
drop procedure if exists sp_tb1;
create procedure sp_tb1(in srsnumber int,in destnumber int,in amount float,out srcbalance float,out destbalance float)
begin
  update accounts set balance=balance-amount where acc_num=srcnumber;

  update accounts set balance=balance+amount where acc_num=destnumber;

   select balance into srcbalance from accounts where
acc_num=srcnumber;

select balance into destbalance from accounts where
acc_num=destnumber;
end ~
delimiter ;




















