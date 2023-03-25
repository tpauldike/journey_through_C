linkedList: main.c new.c print.c pld_attendance
	gcc main.c new.c print.c -o linkedList

pld_attendance: attendance.c display_att.c add_record.c count_att.c
	gcc attendance.c display_att.c add_record.c count_att.c -o pld_attendance

clean:
	rm linkedList pld_attendance
