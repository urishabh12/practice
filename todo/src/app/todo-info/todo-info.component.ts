import { Component, OnInit, Input, Output } from '@angular/core';
import { TodoService } from '../todo.service';
import { Todo } from '../todo';
import * as EventEmitter from 'events';

@Component({
  selector: 'todo-info',
  templateUrl: './todo-info.component.html',
  styleUrls: ['./todo-info.component.css'],
})
export class TodoInfoComponent implements OnInit {
  @Input('todo') todo: Todo;
  @Output('update') update: EventEmitter = new EventEmitter();

  constructor(private todoService: TodoService) {}

  ngOnInit(): void {}

  toggleTodo() {
    this.todoService.toggleTodo(this.todo);
    this.update.emit(null);
  }

  delete() {
    this.todoService.deleteTodo(this.todo);
  }
}
