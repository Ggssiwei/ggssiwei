<template>
  <div id="cp1">
    <h2>这里是子组件</h2>
    <h1>Father say:{{allmsgfromfather}}</h1>
  </div></template>

<script>export default {
  data: function () {
    return {
    }
  },
  props: [
    'allmsgfromfather'
  ]
}
</script>

<style>
#cp1 {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
