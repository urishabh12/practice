import { Component, OnInit } from '@angular/core';
import { TodoService } from '../todo.service';
import { Todo } from '../todo';

@Component({
  selector: 'todo-list',
  templateUrl: './todo-list.component.html',
  styleUrls: ['./todo-list.component.css'],
})
export class TodoListComponent implements OnInit {
  todos: Todo[];
  todoTitle: string;
  filterText: string = '';

  constructor(private todoService: TodoService) {}

  ngOnInit(): void {
    this.setTodos();
  }

  setTodos(): void {
    this.todos = this.todoService.getTodos();
  }

  addTodo(): void {
    if (this.todoTitle.length > 0) {
      this.todoService.addTodo(this.todoTitle);
      this.todoTitle = '';
    }
  }
}
