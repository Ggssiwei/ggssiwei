<template>
  <div id="app">
    <h1>DEMO1:父组件在这呢!</h1>
    <input v-model="msgfromfather" @keyup.enter="emitmsg">
    <h1>Child say:{{childwords}}</h1>
    <components1 :allmsgfromfather="allmsgfromfather" v-on:child-tell-something="listenMsg"></components1>
    <button v-on:click="onClickMe">Clear!</button>
  </div>
</template>

<script>
import components1 from './components/component1'
export default {
  name: 'app',
  data: function(){
    return {
      allmsgfromfather: '',
      msgfromfather: '',
      childwords:'',
      }
  },
  components: {
      components1
  },
  methods: {
    emitmsg: function(){
      this.allmsgfromfather = this.msgfromfather;
      this.msgfromfather= '';
    },
    onClickMe: function(){
      this.allmsgfromfather='';
      this.childwords='';
    },
    listenMsg:function(msg){
      this.childwords=msg;
    }
  }
}
</script>

<style>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
