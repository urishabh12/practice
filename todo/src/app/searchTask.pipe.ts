import { Pipe, PipeTransform } from '@angular/core';
import { Todo } from './todo';

@Pipe({
  name: 'searchTask',
})
export class SearchTask implements PipeTransform {
  transform(values: Todo[], filter: string) {
    if (filter.length == 0) {
      return values;
    }

    return values.filter(
      (obj) => obj.title.search(new RegExp(filter, 'i')) > -1
    );
  }
}
