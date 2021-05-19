import { Injectable } from '@angular/core';
import { Todo } from './todo';
import { HttpClient } from '@angular/common/http';

@Injectable({
  providedIn: 'root',
})
export class TodoService {
  todos: Todo[] = [
    new Todo(1, 'Buy Milk'),
    new Todo(2, 'Buy Stocks'),
    new Todo(3, 'Check Dog'),
  ];

  currSeqId: number = 4;

  constructor(private http: HttpClient) {}

  getTodos(): Todo[] {
    return this.todos;
  }

  addTodo(title: string) {
    let obj = new Todo(this.currSeqId, title);
    this.todos.push(obj);
    this.currSeqId++;
  }

  updateTodo(obj: Todo) {
    let index = this.todos.findIndex((x) => x.id === obj.id);
    this.todos[index] = obj;
  }

  deleteTodo(obj: Todo) {
    let index = this.todos.findIndex((x) => x.id === obj.id);
    this.todos.splice(index, 1);
  }

  toggleTodo(obj: Todo) {
    obj.isCompleted = !obj.isCompleted;
    this.updateTodo(obj);
  }
}
