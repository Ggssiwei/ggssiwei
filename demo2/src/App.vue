<template>
  <div id="app">
    <h1>这里是父组件！</h1>
    <component1 v-on:child-tell-something='listenMsg'></component1>
    <p>Child tells me:{{childwords}}</p>
  </div>
</template>

<script>
import component1 from './components/component1'
export default {
  data: function(){
    return {
      childwords:''
    }
  },
  methods:{
    listenMsg: function(msg){
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
