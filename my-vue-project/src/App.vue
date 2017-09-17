<template>
  <div id="app">
    <h1>{{title}}</h1>
    <input v-model="newItem" v-on:keyup.enter="addNew">
    <ul>
      <li v-for="item in items" v-bind:class="{finished:item.isFinished}" v-on:click="toggleFinished(item)">
          {{item.label}}
      </li>
    </ul>
    <button v-on:click="clearstore">Clear!</button>
  </div>
</template>

<script>
import Store from './Store'
import Hello from './components/Hello'
export default {
  data: function(){
    return {
      title: 'This is a todo list!!!',
      newItem: '',
      items: Store.fetch(),
    }
  },
  methods:{
    toggleFinished: function(item){
      item.isFinished = !item.isFinished;
    },
    addNew: function(){
      this.items.push({
        label: this.newItem,
        isFinished: false
      })
      this.newItem='';
    },
    clearstore: function(){
      Store.del();
      location.reload();
    }
  },
  watch: {
    items: {
      handler: function(items){
        Store.save(items);
      },
      deep: true
    }
  },
}
</script>

<style>
.finished{
  text-decoration: underline;
}
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #42b983;
  margin-top: 60px;
}
li {
  color: black;
}
</style>
